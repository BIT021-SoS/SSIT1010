#include<stdio.h>


int main(){
    int Number;
    printf("Enter the number which you want to check: ");
    scanf("%d",&Number);

    if (Number%2 == 0)
    {
        printf("Given number is Even !\n");
    }
    else
    {
        printf("Given Number is Odd (Not Even)! \n");
    }
    
    
    return 0;
}   