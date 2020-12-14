#include<stdio.h>


int main(){
    int  n;
    printf("which table you want : ");
    scanf("%d",&n);
    printf("\nUsing For Loop :\n");
    for (int i = 1; i <=10; i++)
    {
        printf("%d x %d = %d\n",n,i,(n*i));
    }
    printf("\n Using while loop : \n");
    int k=1;
    while (k<=10)
    {
        printf("%d x %d = %d\n",n,k,(n*k));
        k++;
    }
    
    return 0;
}   