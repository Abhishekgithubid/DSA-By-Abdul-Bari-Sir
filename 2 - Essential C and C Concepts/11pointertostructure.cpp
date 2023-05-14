#include<bits/stdc++.h>
using namespace std;

struct pen
{
    string brand;
    int price;
};

int main()
{
    cout<<"IN STACK MEMORY: "<<endl;
    struct pen p1={"softek",2};//struct can be omitted in c++ but not in c
    struct pen* p1_ptr=&p1;
    
    cout<<"pen detail using dot operator:\n\t"<<"brand: "<<p1.brand<<"\n\tprice: "<<p1.price<<endl;
    cout<<"pen detail using ptr:\n\t"<<"brand: "<<p1_ptr->brand<<"\n\tprice: "<<p1_ptr->price<<endl;
    cout<<"pen detail using ptr and dot operator :\n\t"<<"brand: "<<(*p1_ptr).brand<<"\n\tprice: "<<(*p1_ptr).price<<endl;
    
    cout<<"IN HEAP MEMORY: "<<endl;
    //struct pen* p2_ptr=(struct pen*)malloc(sizeof(struct pen));
    struct pen* p2_ptr= new pen();// () can be omitted
    p2_ptr->brand="reynolds";
    p2_ptr->price=10;
    cout<<"pen detail using ptr:\n\t"<<"brand: "<<p2_ptr->brand<<"\n\tprice: "<<p2_ptr->price<<endl;
    cout<<"pen detail using ptr and dot operator :\n\t"<<"brand: "<<(*p2_ptr).brand<<"\n\tprice: "<<(*p2_ptr).price<<endl;
    
    delete p2_ptr;
    
    return 0;
}