#include<stdio.h>
// Arithmetic operators
int main(){
    /*
    +(Sum),-(Sub),*(Multiplication),/(Division)
    %(Modulo)....reminders.
    */
   //varible init.. and Declaration.
   int Sum, Sub, Mul, Div, Mod;
   int A= 10;
   int B = 25;

    //Operations
    Sum = A+B;
    Sub = A-B;
    Mul = A*B;
    Div = A/B;
    Mod = A%B;

    //Print Statements
    printf("Sum of given two number is %d \n",Sum);
    printf("Subtraction of given two number is %d \n",Sub);
    printf("Multiplication of given two number is %d \n",Mul);
    printf("Divison of given two number is %d \n",Div);
    printf("Modulo(Reminder) of given two number is %d \n",Mod);

 


    return 0;
}   