#include "utils.h"

void Set_Image_On_Label(QLabel* label, QString path){
    QFile file(path);
    if (!file.open(QIODevice::Append))
    {
        // Set to default color
        label->setStyleSheet("QLabel {background-color:rgba(110, 189, 221, 0.5);}");
    }
    else
    {
        label->setText("");
        // Create a QPixmap object
        QPixmap pix = QPixmap();
        // Load the image
        pix.load(path);
        // Set background image by 'setPixmap' method
        label->setPixmap(pix.scaled(label->size(),
                                    Qt::IgnoreAspectRatio,
                                    Qt::SmoothTransformation));
        // Auto Fill the Background and it's necessary
        label->setAutoFillBackground(true);
        label->setStyleSheet("QLabel {background-color:rgba(255, 255, 255, 0);}");
        label->setScaledContents(true);
    }
}

QGraphicsDropShadowEffect* red_shadow(QWidget* parent){
    QGraphicsDropShadowEffect* shadow_effect = new QGraphicsDropShadowEffect(parent);
    // Offset Settings
    shadow_effect->setOffset(0, 0);
    // Set the color of the shadow
    shadow_effect->setColor(Qt::red);
    // radius of the shadow(The larger it is, the more vague it will be)
    shadow_effect->setBlurRadius(20);

    return shadow_effect;
}

QGraphicsDropShadowEffect* none_shadow(QWidget* parent){
    QGraphicsDropShadowEffect* shadow_effect = new QGraphicsDropShadowEffect(parent);
    // Offset Settings
    shadow_effect->setOffset(0, 0);
    // Set the color of the shadow
    shadow_effect->setColor(Qt::red);
    // radius of the shadow(The larger it is, the more vague it will be)
    shadow_effect->setBlurRadius(0);

    return shadow_effect;
}

QString nums = "0123456789";

// Compare the priority between current op and the top op
bool cmp(QChar top, QChar now){
    if(top == '('){
        return false;
    }else if((top == '-' || top == '+') && (now == '*' || now == '/')){
        return false;
    }
    return true;
}

// Calculate from the top two of number stack and top of op stack
void calculate(QStack<int> &num, QStack<QChar> &op){
    // FILO
    int b = num.top();
    num.pop();
    int a = num.top();
    num.pop();
    QChar c = op.top();
    op.pop();
    if(c == '+') a = a+b;
    else if(c == '-') a = a-b;
    else if(c == '*') a = a*b;
    else if(c == '/') a = a/b;
    // Push Answer to the stack
    num.push(a);
    return ;
}

int Calculate(QString s){
    // Number Stack
    QStack<int> num_stk;
    // Operator Stack
    QStack<QChar> op_stk;
    // Preprrocess string inner a pair of '()'
    op_stk.push('(');
    s += ')';
    // First char should be a number
    bool isNextOp = false;
    for(int i=0; i<s.size(); ++i){
        // '(' --> Push to the Stack
        if(s[i] == '(' || s[i] == '[' || s[i] == '{'){
            op_stk.push('(');
        }
        // Calculate when meet a ')'
        else if(s[i] == ')' || s[i] == ']' || s[i] == '}'){
            while(op_stk.top() != '(')
                calculate(num_stk,op_stk);
            // pop the '('
            op_stk.pop();
        }
        // Formular String Member should be a number by a operator etc. Except for '()'
        // Consider the priority of calculation when there is no '()'
        else if(isNextOp){
            while(cmp(op_stk.top(),s[i])){
                // Calculate the top two/one number
                calculate(num_stk,op_stk);
            }
            op_stk.push(s[i]);
            isNextOp = false;
        }
        // Extract the number from the String
        else{
            int j = i;
            // Deal with the Positive/Negative symbol
            if(s[j] == '+' || s[j] == '-') ++i;
            // Multiple-bits number
            while(nums.indexOf(s[i]) != -1) ++i;
            // Number between index i and j
            // Extract it and push to stack
            num_stk.push(s.mid(j, i-j).QString::toInt());
            --i;
            // Current character is a number so next should be an operator
            isNextOp = true;
        }
    }
    // Result is the top of the number stack
    return num_stk.top();
}

QVector<QString> Get_Random_Verification(void){
    QVector<QString> result;
    QString formula = "";
    QVector<QString> operators = {"+", "-", "*", "/"};
    int ans = QRandomGenerator::global()->bounded(1, 9);
    result.append(QString::number(ans));
    formula.append(QString::number(ans));

    // OPerator it
    for(auto i = 0; i < 3; i++){
        QString op = operators[QRandomGenerator::global()->bounded(4)];
        int tmp = QRandomGenerator::global()->bounded(1, 10);
        result.append(op);
        formula.append(op);
        result.append(QString::number(tmp));
        formula.append(QString::number(tmp));
    }

    ans = Calculate(formula);

    // The Final Number
    result.append(QString::number(ans));

    return result;
}

QString Set_Number_Split(QString num){
    QString res = "";
    QStack<QString> s;
    int cnt = 0;
    for(auto i = num.size()-1; i >= 0; i--){
        if(cnt++==3){
            cnt = 0;
            s.push(",");
        }
        s.push(num[i]);
    }
    while(!s.empty()){
        res.append(s.top());
        s.pop();
    }
    return res;
}
