#include<stdio.h>

int main(){
    float length,width;
    printf("Enter size of Length: ");
    scanf("%f",&length);
    printf("Enter size of Width: ");
    scanf("%f",&width);
    printf("your area of Ractangle(%f x %f) is %f Meter Square\n ",length,width,(float)(length*width));

    return 0;
}   