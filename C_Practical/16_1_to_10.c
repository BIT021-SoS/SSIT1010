#include<stdio.h>


int main(){
    printf("Using for loop\n");
    for (int i = 0; i < 11; i++)
    {
        printf("%d ",i);
    }
    
    int i = 0;
    printf("\nUsing while Loop\n");
    while (i<11)
    {
        printf("%d\n",i);
        i++;
    }

    printf("Using Do while Loop\n");
    int j = 0;
    do
    {
        printf("%d ",j);
        j++;
    } while (j<11);
    printf("\n");
    return 0;
}   