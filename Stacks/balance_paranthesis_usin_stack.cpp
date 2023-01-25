#include<iostream>
#include<string>
#include<stack>
using namespace std;

bool arePair(char opening, char close)
{
    if((opening == '(') && (close == ')'))
        return true;
    if((opening == '{') && (close == '}'))
        return true;
    if((opening == '[') && (close == ']'))
        return true;
    return false;
}

bool checkBalancedParanthesis(string exp)
{
    stack<char> S;
    int n = exp.length();

    for(int i=0; i<n; i++){
        if((exp[i] == '(') || (exp[i] == '{') || (exp[i] == '[')){
            S.push(exp[i]);
            cout<<"opening: "<<exp[i]<<endl;
        }
        else if ((exp[i] == ')') || (exp[i] == '}') || (exp[i] == ']')){
                cout<<"closing: "<<exp[i]<<endl;
                if(S.empty() || !arePair(S.top(),exp[i])){
                    return false;
                }
                else{
                    S.pop();
                }
        }
    }
     return S.empty() ? true:false;

}

int main()
{
    string exp;
    cout<<"Enter expression"<<endl;
    cin>>exp;
    if(checkBalancedParanthesis(exp)){
        cout<<"Balanced"<<endl;
    }
    else {
        cout<<"Not Balanced"<<endl;
    }
    return 0;
}
