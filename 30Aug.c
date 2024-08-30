#include<stdio.h>

int main() {
    // *
    // **
    // ***
    // ****
    // *****
    for(int i=1;i<=5;i++) {
        for(int j=1;j<=i;j++) {
            printf("* ");
        }
        printf("\n");
    }

    // *****
    // ****
    // ***
    // **
    // *
    for(int i=1;i<=5;i++) {
        for(int j=5;j>=i;j--) {
            printf("* ");
        }
        printf("\n");
    }

    // *
    // **
    // ***
    // ****
    // *****
    // *****
    // ****
    // ***
    // **
    // *
    for(int i=1;i<=5;i++) {
        for(int j=1;j<=i;j++) {
            printf("* ");
        }
        printf("\n");
    }
    for(int i=1;i<=5;i++) {
        for(int j=5;j>=i;j--) {
            printf("* ");
        }
        printf("\n");
    }

    // *****
    // ****
    // ***
    // **
    // *
    // *
    // **
    // ***
    // ****
    // *****
    for(int i=1;i<=5;i++) {
        for(int j=5;j>=i;j--) {
            printf("* ");
        }
        printf("\n");
    }
    for(int i=1;i<=5;i++) {
        for(int j=1;j<=i;j++) {
            printf("* ");
        }
        printf("\n");
    }

    // 1
    // 22
    // 333
    // 4444
    // 55555
    for(int i=1;i<=5;i++) {
        for(int j=1;j<=i;j++) {
            printf("%d", i);
        }
        printf("\n");
    }

    // 1
    // 12
    // 123
    // 1234
    // 12345
    for(int i=1;i<=5;i++) {
        for(int j=1;j<=i;j++) {
            printf("%d ", j);
        }
        printf("\n");
    }

    // 1
    // 2 3
    // 4 5 6
    // 7 8 9 10
    // 11 12 13 14 15
    int number = 1;
    for(int i=1;i<=5;i++) {
        for(int j=1;j<=i;j++) {
            printf("%d ", number);
            number++;
        }
        printf("\n");
    }

    // 1
    // 1 2 
    // 2 3 4 
    // 3 4 5 6 
    // 4 5 6 7 8 
    for(int i=1;i<=5;i++) {
        for(int j=1;j<=i;j++){
            printf("%d ", i+j-1);
        }
        printf("\n");
    }
    return 0;
}