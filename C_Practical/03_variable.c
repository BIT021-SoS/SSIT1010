#include <stdio.h>
int main()
{
    int a;
    float b;
    double c;
    long d;
    printf("Enter the value of type Int :");
    scanf("%d", &a);
    printf("Enter the value of type float :");
    scanf("%f", &b);
    printf("Enter the value of type Double :");
    scanf("%lf", &c);
    printf("Enter the value of type long Int :");
    scanf("%li", &d);
    printf("Given value of int is %d\n", a);
    printf("Given value of float is %f\n", b);
    printf("Given value of double is %lf\n", c);
    printf("Given value of long int is %li\n", d);
    return 0;
}