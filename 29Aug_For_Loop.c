#include<stdio.h>

int main() {
    // Factorial
    int n = 5, fact = 1;
    for(int i=1;i<=n;i++) {
        fact *= i;
    }
    printf("%d", fact);

    // Fibonacci series
    int n = 5;
    int n1 = 0, n2 = 1, n3;
    printf("%d %d ", n1, n2);
    for(int i=1;i<=n;i++) {
        n3 = n1 + n2;
        printf("%d ", n3);
        n1 = n2;
        n2 = n3;
    }

    // *
    // * *
    // * * *
    for(int i=1;i<=3;i++) {
        for(int j=1;j<=i;j++) {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}