#include<iostream>
#include<set>
using namespace std;
int main()
{
    set<int>s;

    s.insert(5);
    s.insert(1);
    s.insert(2);
    s.insert(0);
    s.insert(6);
    s.insert(5);
    s.insert(5);
    s.insert(5);

    for(auto i:s){
        cout<<i<<" "<<endl;
    }
    cout<<endl;

    set<int>::iterator it = s.begin();
    it++;

    s.erase(s.begin());
    for(auto i:s){
        cout<<i<<" "<<endl;
    }
    cout<<endl;

    cout<<"Is it persent or not ? "<<s.count(-55)<<endl;

    set<int>::iterator itr = s.find(2);

    for(auto it = itr;it!=s.end();it++ ){
        cout<<*it<<" ";
    }
    cout<<endl;

    // cout<<"value persent at itr -> "<<*it<<endl;
        return 0;
}