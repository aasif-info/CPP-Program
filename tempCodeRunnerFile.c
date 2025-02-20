#include<stdio.h>
int main(){
int marks;
printf("enter a number\n");
scanf("%d",&marks);

if(marks>=90){
    printf("grade A");
    if(marks>=100){
        printf("this is not valid");
    }
}
else if(marks>=75 && marks<=90){
printf("grade B");
if(marks>=50 && marks<=75){
    printf("grade C");
}
}

else{
    printf("you are fail");
}















    return 0;
}