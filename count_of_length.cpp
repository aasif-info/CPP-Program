#include<iostream>
using namespace std;

int main(){

string username;

    cout<<"enter a user name"<<endl;
    // getline method is taking string value with space
    getline(cin,username);
   
size_t length=username.length();  

cout<<"the length of usenamee is: "<<length<<endl; 

if(length>10){
    cout<<"only 10 character is allowed";
}

else{

}

    return 0;
}
 
