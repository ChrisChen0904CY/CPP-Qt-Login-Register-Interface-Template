# C++ Qt Login-Register Interface Template Manual

<div style="display: flex; justify-content: space-between; padding: 0 30%;">
  <a href="./ReadMe.md">中文手册</a>
  <a href="./ReadMe_EN.md">English Instruction</a>
</div>

## Contents

- [0. Preview](#chapter-0)
- [1. Database Preparation](#chapter-1)
- [2. Resources & UI Modifications](#chapter-2)
- [3. Data Structure and Database Interaction Functions](#chapter-3)
  - [3.1 Default Data Structure](#3.1)
  - [3.2 Database Interaction Functions](#3.2)
    - [3.2.1 Adding New Data to the Database](#3.2.1)
    - [3.2.2 Querying Specific Data from a Column](#3.2.2)
- [4. Page Redirection After Successful Login](#chapter-4)
- [5. Supprot & Contacts On Me](#Support)

## <a id="chapter-0">0. Preview</a>

- Login page preview:

<div style="text-align: center;"> 
	<img src="https://pic.imgdb.cn/item/667425e7d9c307b7e921f9f8.png" alt="Login page demo image">
</div>

- Registration page preview:

<div style="text-align: center;"> 
	<img src="https://pic.imgdb.cn/item/66743817d9c307b7e949a1ce.png" alt="Registration page demo image">
</div>

- For a more detailed demonstration, please watch the video below:

<div style="text-align: center;">
  <a href="https://www.bilibili.com/video/BV1rogDeAERB/?vd_source=057305f6f7570cd5ef98cb1a31358015" target="_blank">👉Click here to watch the demo video👈</a>
</div>

## <a id="chapter-1">1. Database Preparation</a>

This project uses **`SQLite`** as the backend database, which is supported natively by `C++ Qt 6.x`. The visualization tool `SQLite Expert` is easy to download and use.

In `Qt Creator`, to successfully link the `SQLite` database, you need to add the following to your project configuration file:

- For projects built with `CMake`:

Add the following to `CMakeList.txt`:

```CMake
# Add the necessary dynamic libraries for SQL linking
target_link_libraries(WelcomePage PRIVATE Qt${QT_VERSION_MAJOR}::Widgets
                      Qt${QT_VERSION_MAJOR}::Sql)
find_package(Qt${QT_VERSION_MAJOR} COMPONENTS Sql REQUIRED)
```

**Note: Replace `WelcomePage` with your project name.**

- For projects built with `QMake`:

Add the following to the `.pro` project configuration file:

```QMake
# Add the necessary dynamic libraries for SQL linking
QT += sql
# Libraries needed on Windows (usually handled automatically by Qt)
win32:CONFIG(release, debug|release): LIBS += -L$$[QT_INSTALL_LIBS] -lQt6Sql
win32:CONFIG(debug, debug|release): LIBS += -L$$[QT_INSTALL_LIBS] -lQt6Sqld
```

## <a id="chapter-2">2. Resources & UI Modifications</a>

- **Resource Management**

The resource management file for this template is `resources.qrc`, which can be opened in Qt Creator as a resource editor, making it convenient to add or remove resources.

- **UI Modifications**

The UI design files for the login and registration pages are `welcomepage.ui` and `registerpage.ui`, respectively. The generated header files can be found in the build directory, with paths similar to:

```path
build-WelcomePage-Desktop_Qt_6_6_1_MSVC2019_64bit-Debug\WelcomePage_autogen\include
```

You can customize the appearance of the pages using the resource and UI design files according to your preferences or needs.

## <a id="chapter-3">3. Data Structure and Database Interaction Functions</a>

### <a id="3.1">3.1 Default Data Structure</a>

The default account data structure provided is shown in the table below:

<div style="display: flex; justify-content: center;">
    <table border="1" cellpadding="5" cellspacing="0">
        <tr>
            <th>Key Name</th>
            <th>Data Type</th>
            <th>Description</th>
        </tr>
        <tr>
            <td>User_Name</td>
            <td>VARCHAR(30)</td>
            <td>User account name, up to 30 characters</td>
        </tr>
		<tr>
            <td>Password</td>
            <td>VARCHAR(30)</td>
            <td>User password, up to 30 characters</td>
        </tr>
		<tr>
            <td>Type</td>
            <td>VARCHAR(5)</td>
            <td>User account type, up to 5 characters. Two possible values:
					<br><br>"User" for regular users
					<br><br>"Admin" for administrators
				</td>
        </tr>
    </table>
</div>

You can modify the table creation statement in the `Open_DB()` function in `welcomepage.cpp`.

### <a id="3.2">3.2 Database Interaction Functions</a>

#### <a id="3.2.1">3.2.1 Adding New Data to the Database</a>

This function is implemented by `WelcomePage::Create_New_Account(QVector<QString> info)`, where each string in the `info` container corresponds to a value for each column. You can easily extend this function by following the provided example:

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

In the first line, you can modify the column names after `Users` to extend and modify the function. Then, append the data passed in `info`, separating values with commas or closing the insertion with a right parenthesis.

#### <a id="3.2.2">3.2.2 Querying Specific Data from a Column</a>

This function is implemented by `QVector<QVector<QString>> WelcomePage::QuerySpecificData(QString col_name, QString val)`, where `col_name` is the column name to search, and `val` is the value to look for in that column. The query results are returned as a two-dimensional container, with each row of data stored as a one-dimensional container:

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

You can extend the function by adding the necessary values to the `tmp` container in the `while` loop, following the provided example.

## <a id="chapter-4">4. Page Redirection After Successful Login</a>

In the `void WelcomePage::sign_in()` function, the login events for regular users and administrators are handled separately. Upon successful login for both, there is a code segment like this, which you can replace `QWidget` with your main window class and pass in username, user type, etc., during construction to achieve the login redirection.

```cpp
// Redirect to the main page after login and close the login page
QWidget* mainPage = new QWidget();
mainPage->show();
this->Close_DB();
this->close();
```

## <a id="Support"> 5. Supprot & Contacts On Me</a>

If my template do help you a lot, please give me a support!

<div style="text-align: center;"> 
	<img src="./SupportOnMe_Paypal.png" alt="Support On Me">
</div>

And if you have any question or advises about this project, please reach me at this email address:

📫chrischanyedu@gmail.com
