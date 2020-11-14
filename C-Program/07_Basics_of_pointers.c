#include <stdio.h>
int main()
{
    int var = 5;
    int *v = &var;

    printf("var: %d\n", var);

    // Notice the use of & before var
    printf("address of var: %p\n", &var);
    printf("address of var: %d\n", &var);
    printf("address of var: %x\n", &var);
    printf("address of var: %d\n", *v);

    //Changing Value Pointed by Pointers

    // int *pc, c;
    // c = 21;
    // printf("%d\n", c); // Output: 1
    // pc = &c;
    // c = 31;
    // printf("%d\n", *pc); // Ouptut: 1

    //Changing Value Pointed by Pointers

    int *pc, c;

    c = 22;
    printf("Address of c: %p\n", &c);
    printf("Value of c: %d\n\n", c); // 22

    pc = &c;
    printf("Address of pointer pc: %p\n", pc);
    printf("Content of pointer pc: %d\n\n", *pc); // 22

    c = 11;
    printf("Address of pointer pc: %p\n", pc);
    printf("Content of pointer pc: %d\n\n", *pc); // 11

    *pc = 2;
    printf("Address of c: %p\n", &c);
    printf("Value of c: %d\n\n", c); // 2

    return 0;
}