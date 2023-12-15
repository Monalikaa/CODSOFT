#include<iostream>
using namespace std;
int main()
{
    float num1,num2,result;
    int option;
    do
    {
        cout<<"-------------Simple Calculator---------------\n\n";
        cout<<"\tPerform the Arithmethic Operation\n";
        cout<<"\t 1.Addition\n";
        cout<<"\t 2.Subtraction\n";
        cout<<"\t 3.Multiply\n";
        cout<<"\t 4.Division\n";
        cout<<"Enter the any option from 1 to 4:\n";
        cin>>option;
        cout<<"Enter the 1st No.:\n";
        cin>>num1;
        cout<<"Enter the 2nd No.:\n";
        cin>>num2;
        switch(option)
        {
            case 1:
            result=num1+num2;
            cout<<"Addition of "<<num1<<" "<<" & "<<num2<<" "<<" is "<<result<<endl;
            break;
            case 2:
            result=num1-num2;
            cout<<"Subtraction of "<<" "<<num1<<" & "<<num2<<" "<< "is "<<result<<endl;
            break;
            case 3:
            result=num1*num2;
            cout<<"Multiply of "<<" "<<num1<<" & "<<num2<<" "<< " is "<<result<<endl;
            break;
            case 4:
            result=num1/num2;
            cout<<"Division of "<<num1<<" "<<" & "<<num2<<" "<<" is "<<result<<endl;
            break;
            default:
            cout<<"Invalid option"<<endl;
            break;
        
        }      cout<<endl;  
    }while(option!=4);

    return 0;
}









