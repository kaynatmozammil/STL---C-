#include<iostream>
#include<deque>
using namespace std;
int main()
{
    deque<int>d;

    d.push_back(1);
    d.push_front(2);

    for (int i :d)
    {
        cout<<i<<" ";
    }
    cout<<endl;

    // d.pop_back();
    // for (int i :d)
    // {
    //     cout<<i<<" ";
    // }
    // cout<<endl;

    // d.pop_front();
    // for (int i :d)
    // {
    //     cout<<i<<" ";
    // }
    // cout<<endl;

   cout<<"Print  1st index elemnt :" <<d.at(1)<<endl;

    
    cout<<"front element "<<d.front()<<endl;
    cout<<"back element "<<d.back()<<endl;
    cout<<"Empty or not "<<d.empty()<<endl;
    // d.clear();
    cout<<"size-> "<<d.size()<<endl;

    cout<<"Before erase-> "<<d.size()<<endl;
    for(int i:d){
        cout<<i<<" ";
    }
    cout<<endl;
    
    d.erase(d.begin());
    cout<<"After erase-> "<<d.size()<<endl;


    for(int i:d){
        cout<<i<<endl;
    }
    
    return 0;
}