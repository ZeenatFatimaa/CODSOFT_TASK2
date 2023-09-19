#include <iostream>
using namespace std;

int main()
{
int choice;
do
{
cout<<" Select one Arthemetic Operation you want to perform"<<endl;
cout<<"1) Multiplication"<<endl;
cout<<"2) Division"<<endl;
cout<<"3) Addition"<<endl;
cout<<"4) Subtraction"<<endl;
cout<<"5) Exit"<<endl;

cin>>choice;


if(choice!=5)
{
float num1,num2;
cout<<"Enter two numbers"<<endl;
cin>>num1;
cin>>num2;


if(choice==1)
{
float num3=num1*num2;
cout<<"The answer is: "<<num3<<endl;
}

else if(choice==2)
{
float num3=num1/num2;
cout<<"The answer is: "<<num3<<endl;
}

else if(choice==3)
{
float num3=num1+num2;
cout<<"The answer is: "<<num3<<endl;
}

else if(choice==4)
{
float num3=num1-num2;
cout<<"The answer is: "<<num3<<endl;
}
}
}while(choice!=5);
}
