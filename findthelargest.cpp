#include<iostream>
using namespace std;
int main(){

int num1,num2,num3;

cout<<"enter a number 1 :";
cin>>num1;

cout<<"enter a number 2 :";
cin>>num2;

cout<<"enter a number 3 :";
cin>>num3;

if((num1>num2)&&(num1>num3)){
    cout<<"num1 is greater";
}

else if((num2>num1)&&(num2>num3)){
cout<<"num 2 is greater";
}  

else{
    cout<<"num 3 is greater";
}



    return 0;
}