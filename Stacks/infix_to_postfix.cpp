#include<iostream>
#include<stack>
#include<string>
using namespace std;

int EvaluatePostfix(string exp);
int PerformOperation(char opr, int op1, int op2);
bool IsNumeric(char i);
bool IsOperator(char opr);


int main()
{
    string exp;
    cout<<"enter expression: ";
    getline(cin,exp);
    cout<<"Given Expression: "<<exp<<endl;
    int result = EvaluatePostfix(exp);
    cout<<"Result: "<<result<<endl;
    return 0;
}

int EvaluatePostfix(string exp)
{
    stack<int> S;
    for(int i=0; i<exp.length(); i++){
        if(exp[i] == ',' || exp[i] == ' '){
            continue;
        }
        else if(IsNumeric(exp[i])){
            int operand = 0;
            while(i<exp.length() && IsNumeric(exp[i])){
                operand = (operand*10) + (exp[i] - '0');
                i++;
            }
            i--;
            S.push(operand);
        }
        else if(IsOperator(exp[i])){
            int op2 = S.top(); S.pop();
            int op1 = S.top(); S.pop();
            int res = PerformOperation(exp[i], op1, op2);
            S.push(res);
        }
    }
    return S.top();
}

bool IsNumeric(char i)
{
    if(i>='0' && i<='9'){
        return true;
    }
    return false;
}

bool IsOperator(char opr)
{
    if((opr == '+') || (opr == '-') || (opr == '*') || (opr == '/')){
        return true;
    }
    return false;
}

int PerformOperation(char opr, int op1, int op2)
{
    if(opr == '+'){
        return (op1+op2);
    }
    else if(opr == '-'){
        return (op1-op2);
    }
    else if(opr == '*'){
        return (op1*op2);
    }
    else if(opr == '/'){
        return (op1/op2);
    }
    else
        cout<<"Unexpected Error! "<<endl;
        return -1;

}
