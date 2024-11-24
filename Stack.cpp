#include<iostream>
#include<stack>
using namespace std;
int main()
{
    stack<string>s;
    s.push("kaynat");
    s.push("Mozammil");
    s.push("Brother");

    cout<<"Top element "<<s.top()<<endl;
      cout<<"Size of Stack "<<s.size()<<endl;

    s.pop();

    cout<<"Top element "<<s.top()<<endl;

    cout<<"Size of Stack "<<s.size()<<endl;

    cout<<"Empty or not "<<s.empty()<<endl;

    return 0;
}