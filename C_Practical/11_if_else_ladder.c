#include<stdio.h>
#include<math.h>

int main(){
    int a,b;
    char o;
    printf("\tEnter First Number : ");
    scanf("%d",&a);
    printf("\tEnter Second Number : ");
    scanf("%d",&b);
    printf("\n\t Enter your operation ");
    scanf("\n %c",&o);
    if (o=='+')
    {
        printf("\tsum of %d and %d is %d\n",a,b,a+b);
    }
    else if (o=='-')
    {
        printf("\tSubtraction of %d and %d is %d\n",a,b,a-b);
    }
    else if (o=='*')
    {
        printf("\tMultiplication of %d and %d is %d\n",a,b,a*b);
    }
    else if (o=='/')
    {
        printf("\tDivison of %d and %d is %d\n",a,b,a/b);
    }
    else if(o=='%')
    {
        printf("\tRemider of %d divides of %d is %d\n",a,b,a%b);
    }
    else if(o=='^')
    {
        printf("\tPower of %d and %d is %d\n",a,b,(a*b));
    }
    else
    {
        printf("\tEnter the valid operation\n");
    }
        
    return 0;
}