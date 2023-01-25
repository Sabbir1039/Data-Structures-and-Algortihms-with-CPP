#include<iostream>
#include<stack>
#include<cstring>
using namespace std;

void reverseStr(char* c, int n)
{
    stack<char> s;
    for(int i=0; i<n; i++){
        s.push(c[i]);
    }

    for(int j=0; j<n; j++){
        c[j] = s.top();
        s.pop();
    }
}

int main()
{
    char c[50];
    cout<<"string: ";
    gets(c);
    cout<<c<<endl;
    int n = strlen(c);
    reverseStr(c,n);
    cout<<c;
    return 0;
}

