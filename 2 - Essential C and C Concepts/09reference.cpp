#include<iostream>
using namespace std;

int main()
{
    int a=2;
    int& r=a;

    cout<<"a: "<<a<<endl;//2
    cout<<"r:"<<r<<endl;//2
    cout<<"++r: "<<++r<<endl;//3
    cout<<"&r: "<<&r<<endl;
    cout<<"a: "<<a<<endl;//4
    cout<<"r:"<<r<<endl;//4
    cout<<"++r: "<<++r<<endl;//5
    cout<<"&r: "<<&r<<endl;

    return 9;
}