#include<iostream>
using namespace std;

template<class dataType>
class arithmatic
{
    private:
        dataType number1;
        dataType number2;
    
    public:
    //constructor
        arithmatic(dataType userNumber1=0, dataType userNumber2=0)
        {
            setNumber1(userNumber1);
            setNumber2(userNumber2);
        }
    //Mutator
        void setNumber1(dataType userNumber1);
        void setNumber2(dataType userNumber2); 
    //Accessor
        dataType getNumber1(){return number1;}
        dataType getNumber2(){return number2;}
    //Facilitator
        dataType add();
        dataType subtract();
    //Enquiry
    //Destructor
};

//Mutator
    template<class dataType>
    void arithmatic<dataType>::setNumber1(dataType userNumber1)
    {
        this->number1= userNumber1;
    }
    template<class dataType>
    void arithmatic<dataType>::setNumber2(dataType userNumber2)
    {
        this->number2= userNumber2;
    } 

//Facilitator
    template<class dataType>
    dataType arithmatic<dataType>::add()
    {
        return number1+number2;
    }
    template<class dataType>
    dataType arithmatic<dataType>::subtract()
    {
        return number1-number2;
    }

int main()
{
    arithmatic<int> a1;
    cout<<"default add: "<<a1.add()<<endl;
    cout<<"default subtract: "<<a1.subtract();


    return 034;
}