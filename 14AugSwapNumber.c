#include<stdio.h>
int main() {


    // Swap numbers without third variable
    int a = 55, b = 66;
    printf("Original value of a: %d\n", a);
    printf("Original value of b: %d\n", b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("Swapped value of a: %d\n", a);
    printf("Swapped value of b: %d\n", b);


    // Swap numbers with third variable
    int a = 35, b = 45, c;
    printf("Original value of a: %d\n", a);
    printf("Original value of b: %d\n", b);
    c=a;
    a=b;
    b=c;
    printf("Swapped value of a: %d\n", a);
    printf("Swapped value of b: %d\n", b);


    return 0;
}
