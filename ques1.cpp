#include<iostream>
using namespace std;
int main(){

//product of two numbers using pointers
int a , b;
cout<<"enter first number :"<<endl;
cin>>a;
cout<<"enter second number :"<<endl;
cin>>b;

int *p = &a;
int *p2 = &b;

int Ans =(*p)*(*p2);
cout<<"The product of given numbers is :"<<Ans;

}