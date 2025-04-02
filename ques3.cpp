#include<iostream>
using namespace std;
int main(){

//predict the output
int a = 10 , b = 20;

int *ptr = &a;
b = *ptr+1;
ptr = &b;
cout<<*ptr<<" "<<a<<" "<<b;

//option c is correct.
//Ans  - 11 , 10 ,11


//explanation - 
// first we put 10 in a and 20 in b
// then make a pointer and put address of a into it
//then we put *ptr(means the value which address is saved in ptr pointer)+ 1 into b
//then we update ptr now, into ptr there is address of b is saved not a and
//b has value 11 as same it , puts in ptr
//clearly, ptr and b has same value
//a has still intial value 10

}