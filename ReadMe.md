# C++ Qt 登录-注册界面模板使用指南

<div style="display: flex; justify-content: space-between; padding: 0 30%;">
  <a href="./ReadMe.md">中文手册</a>
  <a href="./ReadMe_EN.md">English Instruction</a>
</div>

## 目录

- [0. 效果预览](#Chapter 0)
- [1. 数据库准备](#Chapter 1)
- [2. 资源 & UI 修改](#Chapter 2)
- [3. 数据结构以及数据库交互函数的说明](#Chapter 3)
  - [3.1 默认的数据结构说明](#3.1)
  - [3.2 数据库的交互函数](#3.2)
    - [3.2.1 向数据库增加新数据](#3.2.1)
    - [3.2.2 查询指定列的指定数据](#3.2.2)
- [4. 登录成功后的页面跳转](#Chapter 4)
- [5. 打赏渠道 & 联系邮箱](#Support)

## <a id="Chapter 0">0. 效果预览</a>

- 登陆页面效果如下：

<div style="text-align: center;"> 
	<img src="https://pic.imgdb.cn/item/667425e7d9c307b7e921f9f8.png" alt="登录页面演示图片">
</div>

- 注册页面效果如下：

<div style="text-align: center;"> 
	<img src="https://pic.imgdb.cn/item/66743817d9c307b7e949a1ce.png" alt="注册页面演示图片">
</div>

- 更具体的功能演示视频见如下链接：

<div style="text-align: center;">
  <a href="https://www.bilibili.com" target="\_blank">👉点我跳转演示视频👈</a>
</div>

## <a id="Chapter 1">1. 数据库准备</a>

本项目采用的后端数据库为 **`SQLite`** ，因为他是 `C++ Qt 6.x` 内置支持的一种数据库，同时其可视化软件 `SQLite Expert` 的下载和使用都很简单。

在 `Qt Creator` 中为了能够顺利链接 `SQLite` 数据库，需要在项目配置文件中进行一些补充，具体如下：

- `CMake` 构建的项目

需要在 `CMakeList.txt` 中添加如下内容：

```CMake
# 加入 sql 链接必要的动态库
target_link_libraries(WelcomePage PRIVATE Qt${QT_VERSION_MAJOR}::Widgets
                      Qt${QT_VERSION_MAJOR}::Sql)
find_package(Qt${QT_VERSION_MAJOR} COMPONENTS Sql REQUIRED)
```

**注意：这里的 `WelcomePage` 请替换成您自己的项目名称**

- `QMake` 构建的项目

需要在 `.pro` 项目配置文件中添加如下内容：

```QMake
# 加入 sql 链接必要的动态库
QT += sql
# 在Windows上需要的库（一般情况下Qt会自动处理）
win32:CONFIG(release, debug|release): LIBS += -L$$[QT_INSTALL_LIBS] -lQt6Sql
win32:CONFIG(debug, debug|release): LIBS += -L$$[QT_INSTALL_LIBS] -lQt6Sqld
```
## <a id="Chapter 2">2. 资源 & UI 修改</a>

- 资源管理

本模板的资源管理文件为 `resources.qrc`，可以在 Qt Creator 中以资源编辑器的形式打开，非常便于资源的增删等管理。

- UI 修改

本模板中登录和注册页面对应的 UI 设计文件分别为 `welcomepage.ui` 与 `registerpage.ui`。他们生成的头文件可以在 build 出的文件夹中找到，路径会如下所示：

```path
build-WelcomePage-Desktop_Qt_6_6_1_MSVC2019_64bit-Debug\WelcomePage_autogen\include
```

您可以根据您的喜欢或需求利用资源文件和 UI 设计文件随意美化页面。

## <a id="Chapter 3">3. 数据结构以及数据库交互函数的说明</a>

### <a id="3.1">3.1 默认的数据结构说明</a>

默认为您提供的账号数据结构如下表所示：

<div style="display: flex; justify-content: center;">
    <table border="1" cellpadding="5" cellspacing="0">
        <tr>
            <th>键名</th>
            <th>数据类型</th>
            <th>描述</th>
        </tr>
        <tr>
            <td>User_Name</td>
            <td>VARCHAR(30)</td>
            <td>用户的账号名称，最多30个字符</td>
        </tr>
			<tr>
            <td>Password</td>
            <td>VARCHAR(30)</td>
            <td>用户的密码内容，最多30个字符</td>
        </tr>
			<tr>
            <td>Type</td>
            <td>VARCHAR(5)</td>
            <td>用户的账号类型，最多5个字符。只有两种值：
					 			<br><br>"User" 代表普通用户
							    <br><br>"Admin" 代表管理员
						</td>
        </tr>
    </table>
</div>

建表的语句可以在 `welcomepage.cpp` 中的 `Open_DB()` 函数修改。

### <a id="3.2">3.2 数据库的交互函数</a>

#### <a id="3.2.1">3.2.1 向数据库增加新数据</a>

该功能由 `WelcomePage::Create_New_Account(QVector<QString> info)` 实现，其中 `info` 容器中的每一个字符串对应了每一列的取值。您可以在该函数中沿用我提供好的写法进行非常方便的拓展：

```cpp
void WelcomePage::Create_New_Account(QVector<QString> info){
    QString select_sql = "insert into Users (User_Name, Password, Type) values(\"";
    select_sql.append(info[0]);
    select_sql.append("\",\"");
    select_sql.append(info[1]);
    select_sql.append("\",\"");
    select_sql.append((info[2]=="U") ? "User" : "Admin");
    select_sql.append("\");");
    QSqlQuery sql_query;
    sql_query.exec(select_sql);
}
```

如上，您可以在第一行修改 `Users` 后的列名来进行拓展和修改，接着您可以为其 *append* 一个 `info` 传入的数据，并在其后加入逗号分割或右括号结束插入。

#### <a id="3.2.2">3.2.2 查询指定列的指定数据</a>

该功能由 `QVector<QVector<QString>> WelcomePage::QuerySpecificData(QString col_name, QString val)` 实现，其中 `col_name` 为指定的查找列的列名，`val` 为您希望查找的该列的值。最后查询结果会以一个二维容器的形式返回，他包含着查询到的每一行数据，即每一行数据以一个一维容器的形式存入其中：

```cpp
QVector<QVector<QString>> WelcomePage::QuerySpecificData(QString col_name, QString val){
    QString select_sql = "select * from Users where ";
    select_sql.append(col_name);
    select_sql.append("==\"");
    select_sql.append(val);
    select_sql.append("\";");
    QSqlQuery sql_query;
    sql_query.exec(select_sql);
    // Return Data
    QVector<QVector<QString>> result = {};
    while(sql_query.next())
    {
        QVector<QString> tmp;
        tmp.append(sql_query.value("User_Name").toString());
        tmp.append(sql_query.value("Password").toString());
        tmp.append(sql_query.value("Type").toString());
        result.append(tmp);
    }
    return result;
}
```

如上，您可以参照我的写法在 `while` 循环中向 `tmp` 容器中加入您需要的值进行功能拓展。

## <a id="Chapter 4">4. 登录成功后的页面跳转</a>

在 `void WelcomePage::sign_in()` 函数中我将普通用户和管理员的登录事件分开处理，因此在二者的登录成功处都有一段这样的代码，您可以将 `QWidget` 替换成您自己的主窗口类，并在构造时引入用户名、用户类型等信息进行构造来实现登录。

```cpp
// 跳转登录后的页面并关闭登录页面
QWidget* mainPage = new QWidget();
mainPage->show();
this->Close_DB();
this->close();
```

## <a id="Support">5. 打赏渠道 & 联系邮箱</a>

如果我的模板对您有帮助或启发，请在经济条件允许的情况下支持我一下吧！

<div style="text-align: center;"> 
	<img src="./SupportOnMe.jpg" alt="打赏二维码">
</div>

另外，如果您对本项目有任何建议、想法或疑惑请联系我的邮箱：

📫chrischanyedu@gmail.com
