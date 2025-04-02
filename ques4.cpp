#include<iostream>
using namespace std;
int main(){

//predict the output
int a = 15 , b = 20;

int *ptr = &a;
int *ptr2 = &b;
*ptr = *ptr2;

//option c is correct.
//Ans - a gets value of b
//also we can check it -
cout<<a<<" "<<b; //both gives same value

//explanation - 
// first we put 15 in a and 20 in b
// then make two pointer and put address of a and b into it
//then we put *ptr2(means the value which address is saved in ptr2 pointer)puts into ptr(first pointer)
//means , we put value of b into a through pointers
//clearly, a and b has same value now


}