#include<stdio.h>

int fectorial(int number){
    if (number == 1 || number == 0)
    {
        return 1;
    }
    else
    {
        return (number * fectorial(number-1));
    }
    
    
}
int main(){
    int num;
    printf("Enter the Number you want factorial of : ");
    scanf("%d",&num);
    printf("Factorial of %d = %d \n",num , fectorial(num));
    return 0;
}   