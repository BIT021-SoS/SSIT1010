#include<stdio.h>


int main(){
    int WAD,ICP,Maths,ICA,English,Seminar;
    printf("Enter marks of Web Application Design: ");
    scanf("%d",&WAD);
    printf("Enter marks of Computer Programming: ");
    scanf("%d",&ICP);
    printf("Enter marks of Maths: ");
    scanf("%d",&Maths);
    printf("Enter marks of Computer Application: ");
    scanf("%d",&ICA);
    printf("Enter marks of English: ");
    scanf("%d",&English);
    printf("Enter marks of Seminar: ");
    scanf("%d",&Seminar);

    float Avg = (WAD+ICP+Maths+ICA+English+Seminar)/6.00;
    printf("Congratulation ! your avarge and Percentage is %f out of 100\n",Avg);
    return 0;
}   