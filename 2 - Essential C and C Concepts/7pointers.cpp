#include<bits/stdc++.h>
using namespace std;

int main()
{
    string name="abcdefghijklm0000000000000000000000000000000000000000000000000000no";
    // use * when declaraing and dereferencing
    string* name_pointer;//declaration
    name_pointer=&name;//initializing
    cout<<"using data variable, name: "<<name<<endl;
    cout<<"using address variable(pointer), name:"<<*name_pointer<<endl;//dereferencing
    cout<<"using ampersand, address of name: "<<&name<<endl;
    cout<<"using pointer,address of name: "<<name_pointer<<endl;
    cout<<"size of name: "<<sizeof(name)<<endl;//size is 32 no matter what's length
    cout<<"size of name_pointer: "<<sizeof(name_pointer)<<endl;//size of pointer of any data type is 8

    char fruit[]="Mango";
    char* fruit_pointer;
    //fruit_pointer=fruit;//for array no ampersand needed reason name is address in itself
    fruit_pointer=&fruit[0];//if ampersand written then do this

    cout<<"using data variable, fruit: "<<fruit<<endl;
    cout<<"using pointer(address variable), fruit: "<<fruit_pointer<<endl;
    cout<<"using data variable, size of fruit:"<<sizeof(fruit)<<endl;
    cout<<"using sizeof(&fruit_pointer), size of fruit_pointer: "<<sizeof(&fruit_pointer)<<endl;
    cout<<"using sizeof(fruit_pointer), size of fruit_pointer: "<<sizeof(fruit_pointer)<<endl;
    cout<<"Using , fruit[alphabet]"<<endl;
    for(int alphabet=0; alphabet<sizeof(fruit); alphabet++)
    {
        cout<<fruit[alphabet];
    }
    
    cout<<"\nusing name_alphabet[alphabet]"<<endl;
    for(int alphabet=0; alphabet<sizeof(fruit); alphabet++)
    {
        cout<<fruit_pointer[alphabet];
    }

    cout<<"\naccesssing heap memory  using pointer"<<endl;
    //ruit_pointer=(char*)malloc(5*sizeof(char));//method for c
    char* ruit_pointer= new char[5];//method for c++
    ruit_pointer[0]='k';
    ruit_pointer[1]='e';
    ruit_pointer[2]='l';
    ruit_pointer[3]='a';
    ruit_pointer[4]='A';
    cout<<"without loop : "<<ruit_pointer<<endl;
    for(int alphabet=0; alphabet<sizeof(ruit_pointer)-1; alphabet++)
    {
        cout<<ruit_pointer[alphabet];
    }

    //free(ruit_pointer);//method 1 for deleting space
    //for array use [ ] before name, other than that no needed
    delete [ ] ruit_pointer;//method 2 for deleting space
    //cout<<"after freeing space: "<<ruit_pointer;
    if(!ruit_pointer)
    {
        cout<<"ruit_pointer is free"<<endl;
    }


    return 3;
}