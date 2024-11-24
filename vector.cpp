#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>arr;

    vector<int>a(5,1);
    cout<<"Print a"<<endl;
    for(int i:a){
        cout<<i<<" ";
    }
    cout<<endl;

    vector<int>last(a);

    cout<<"Print last"<<endl;
    for(int i:last){
        cout<<i<<" ";
    }
    cout<<endl;


    cout<<"Capcity-> "<<arr.capacity()<<endl;
    arr.push_back(1);
    cout<<"Capcity-> "<<arr.capacity()<<endl;

     arr.push_back(22);
    cout<<"Capcity-> "<<arr.capacity()<<endl;

    arr.push_back(3);
    cout<<"Capcity-> "<<arr.capacity()<<endl;
    cout<<"size-> "<<arr.size()<<endl;

    cout<<"Element at 1st index: " << arr.at(1)<<endl;

    cout<<"Empty or not "<<arr.empty()<<endl;

    cout<<"First element "<<arr.front()<<endl;
    cout<<"Last element "<<arr.back()<<endl;

    cout<<"Before pop"<<endl;
    for(int i:arr){
        cout<<i<<" ";
    }
    cout<<endl;

    arr.pop_back();

    cout<<"After pop"<<endl;
    for(int i:arr){
        cout<<i<<" ";
    }
    cout<<endl;

    cout<<"Before Clear Size :"<<arr.size()<<endl;
    cout<<"Capcity-> "<<arr.capacity()<<endl;
    arr.clear();
    cout<<"After Clear Size :"<<arr.size()<<endl;

    cout<<"Capcity-> "<<arr.capacity()<<endl;

    return 0;
}