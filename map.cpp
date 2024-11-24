#include<iostream>
#include<map>

using namespace std;
int main()
{
    map<int,string>m;

    m[1] = "Kaynat";
    m[12] = "Mozammil";
    m[3] = "Faiz";

    m.insert({5,"Rizwan"});

    cout<<"before erase "<<endl;
    for(auto i:m ){
        cout<<i.first<<" "<<i.second<<endl;
    }
    cout<<endl;

    cout<<"finding 12 ->"<<m.count(12)<<endl;

    m.erase(12);
    cout<<"after erase"<<endl;
    for(auto i:m ){
        cout<<i.first<<" "<<i.second<<endl;
    }
    cout<<endl;

    auto it = m.find(5);

    for(auto i = it;i!= m.end();i++){
        cout<<(*i).first<<endl;
    }

    return 0;
}