#include<stdio.h>


int main(){
    printf("Using For Loop\n");
    for (int i =100; i >=0; i--)
    {
        printf("%d ",i);
    }
    printf("\n Using While Loop\n");
    int j=100;
    while (j>0)
    {
        printf("%d ",j);
        j--;
    }
    printf("\n Using Do While Loop\n");
    int k=100;
    do
    {
        printf("%d ",k);
        k--;
    } while (k>0);
    printf("\n");
    return 0;
}   