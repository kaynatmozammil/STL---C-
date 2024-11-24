#include<iostream>
#include<list>
using namespace std;
int main()
{
    list<int>l;

    list<int>new_list(l);

    list<int>n(5,100);
    cout<<"print n list "<<endl;
    for(int i:n){
        cout<<i<<" "; 
    }
    cout<<endl;

    l.push_back(1);
    l.push_front(2);

    cout<<"Before erase "<<endl;
    for(int i:l){
        cout<<i<<" "; 
    }
    cout<<endl;
    cout<<"Size of list-> "<<l.size()<<endl;

    l.erase(l.begin());

    cout<<"After erase "<<endl;
    for(int i:l){
        cout<<i<<" "; 
    }
    cout<<endl;

    cout<<"Size of list-> "<<l.size()<<endl;
    
    return 0;

}