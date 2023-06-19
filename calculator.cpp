#include<iostream> 
#include<math.h> 
using namespace std;

int main(){

    float a,b,PI;
    int c;
    cout<<endl; 
    cout<<"**************************** Calculator ***********************************\n"; 
    cout<<"---------------------------------------------------\n"; 
    cout<<"Operations\t"<<"\tTrigonometric Functions"<<"\t\tLogarithmic Functions\n"; 
    cout<<"------------------------------------------------\n"; 
    cout<<"1: Division\t\t"<<"7: Sin\t\t"<<"\t\t13: Log"<<endl; 
    cout<<"2: Multiplication\t"<<"8: Cos\t\t"<<"\t\t14: Log with base 10"<<endl; 
    cout<<"3: Subtraction\t\t"<<"9: Tan\t\t"<<endl; 
    cout<<"4: Addition\t\t"<<"10: Inverse of Sin"<<endl; 
    cout<<"5: Exponent\t\t"<<"11: Inverse of Cos"<<endl; 
    cout<<"6: Square root\t\t"<<"12: Inverse of Tan"<<endl; 
    cout<<"Enter the function that you want to perform : "; 
    cin>>c; 
    PI=3.14159265; 

    switch(c){
        case 1:
        cout<<"Enter 1st number : ";
        cin>>a;
        cout<<"Enter 2nd number :  ";
        cin>>b;
        cout<<"Devision:"<<a/b<<endl;
        break;

        case 2:
        cout<<"Enter 1st number : ";
        cin>>a;
        cout<<"Enter 2nd number :  ";
        cin>>b;
        cout<<"Multiplication:"<<a*b<<endl;
        break;
        case 3:
        cout<<"Enter 1st number : ";
        cin>>a;
        cout<<"Enter 2nd number :  ";
        cin>>b;
        cout<<"Substraction:"<<a-b<<endl;
        break;
        case 4: 
        cout<<"Enter 1st number : "; 
        cin>>a; 
        cout<<"Enter 2nd number : "; 
        cin>>b; 
        cout<<"Addition = "<<a+b<<endl; 
        break; 
        

    }

}

