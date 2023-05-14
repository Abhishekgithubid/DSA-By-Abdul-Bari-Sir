#include<bits/stdc++.h>
using namespace std;

//make rectangle with length and breath
struct rectangle
{
    float length;
    float breadth;
    int vertex;
    int edges;
};

struct complex_number
{
    float real;
    float imaginary;
};

struct employee
{
    string name;
    int batch;
    string department;
    int experience;

    employee()
    {
        cout<<"default constructor in struct"<<endl;
    }

    void employee_info()
    {
        this->name="Abhishek Tiwari";
        this->batch=2025;
        this->department="SD";
        experience=3;//does above this works as pointer
        cout<<"Employee details are: "<< name<<" "<<batch<<" "<<department<<" "<<experience;
    }
};

int main()
{
    struct rectangle r1={10.2,5.2,4};//here fourth value is not initialize so by default it's zero
    cout<<"size of r1 :"<<sizeof(r1)<<endl;
    cout<<"size of rectangle class: "<<sizeof(rectangle)<<endl;
    cout<<"rectangle length,breadth,vertex,edge: "<<r1.length<<" "<<r1.breadth<<" "<<r1.vertex<<" "<<r1.edges<<endl;
    
    struct complex_number c1;
    c1.real=32.2;
    c1.imaginary=44;
    cout<<"complex number is "<<c1.real<<" + i"<<c1.imaginary<<endl;
    
    struct employee e1;
    e1.employee_info();
    
    

    return 3;
}