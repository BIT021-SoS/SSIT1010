#include<stdio.h>

int main(){
    float degree,degree2;
    printf("Enter Tempereture (°C): ");
    scanf("%f",&degree);
    printf("Enter Tempereture (F): ");
    scanf("%f",&degree2);
    
    float answer = (degree*1.8)+32.00;
    float answer2 = (degree2-32.00)*0.56;

    printf("your tempereture %f °C in Fehrenhit is :- %f\n",degree,answer);
    printf("your tempereture %f °F in Celsius °C is :- %f\n",degree2,answer2);
    return 0;
}   
