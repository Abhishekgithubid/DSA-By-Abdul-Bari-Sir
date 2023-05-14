#include<bits/stdc++.h>
using namespace std;

int main()
{
    //Declaration
    
    //replace this with other to know behavior
    int n=3;
    int array[n];//Drawback of this is we can't intiliaze here but above can be
    int array1[]={7,8,9};//here declaration and initiliaze  both done otherwise only declaration cause error  
    int array2[3];

    //Initialization
    array[0]=0;//method 1
    array[1]=1;
    array[2]=2;
 cout<<"Entered elements are: ";
    for(int element: array)//this create random print problem
    {
        cout<<array[element]<<" ";
    }
    //method 2
        cout<<" using int element=0; element<3; element++ for input "<<endl;
    for(int element=0; element<3; element++)
    {
        int userinput;
        cout<<"enter elemnt: ";
        cin>>userinput;
        array[element]=userinput;
    }
    
    cout<<"Entered elements ar: ";
    for(int element=0; element<3; element++)
    {
        cout<<array[element]<<" ";
    }

    //method 3
    cout<<"\nusing int element: array for output"<<endl;
    /*for(int element: array) //this loops doesn't works for input 
    {
        int userinput;
        cout<<"enter elemnt: ";
        cin>>userinput;
        array[element]=userinput;       
    }*/

    cout<<"Entered elements are: ";
    for(int element: array)//this create random print problem
    {
        cout<<array[element]<<" ";
    }

    return 3;
}