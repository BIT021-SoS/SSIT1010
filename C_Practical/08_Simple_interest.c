#include<stdio.h>


float main(){
    float P,R,T;
    printf("Enter amout of your Principle value: ");
    scanf("%f",&P);
    printf("Enter your Rate value: ");
    scanf("%f",&R);
    printf("Enter Time period: ");
    scanf("%f",&T);

    float formula = (P*R*T)/100;
    printf("you will get %f in period of %d.\n",formula,(int)T);

    return 0;
}   