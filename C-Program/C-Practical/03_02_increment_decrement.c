#include<stdio.h>

int main(){
    int a, b;//Var initialization

    //take input from user
    printf("Enter your first Number: ");
    scanf("%d",&a);
    printf("Enter your second number: ");
    scanf("%d",&b);
    
    // Increment/Decrement operators   
     int post_increment, post_decrement;
     int pre_increment, pre_decrement;
     
     pre_increment = ++a;//(first calculate a+1 and then print it)
     post_increment = b++;//(first Print aand then Calculate a+1)
     pre_decrement = --b;//(first calculate a-1 and then print it)
     post_decrement = a--;//(first Print aand then Calculate a-1)
     
     printf("i am pre increment %d\n",pre_increment);
     printf("i am post increment %d\n",post_increment);
     printf("i am pre decrement %d\n",pre_decrement);
     printf("i am post decrement %d\n",post_decrement);
 
    return 0;
}