#include<stdio.h>


int main(){
    int a, b;
    printf("Enter your first Number: ");
    scanf("%d",&a);
    printf("Enter your second number: ");
    scanf("%d",&b);
    
    int sum, sub, mul, div, mod;
    // Start
    sum = a + b;
    sub = a - b;
    mul = a * b;
    div = a / b;
    mod = a % b;
    // End

    printf("your output is \n");
    printf("\t sum of %d and %d is %d\n",a,b,sum);
    printf("\t sub of %d and %d is %d\n",a,b,sub);
    printf("\t mul of %d and %d is %d\n",a,b,mul);
    printf("\t div of %d and %d is %d\n",a,b,div);
    printf("\t mod of %d and %d is %d\n",a,b,mod);
    return 0;
}      