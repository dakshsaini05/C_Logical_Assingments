#include<stdio.h>

int main() {
    // 1 to 10
    for(int i=1;i<=10;i++) {
        printf("%d", i);
    }

    // 67 to 23
    for(int i=67;i>=23;i--) {
        printf("%d ", i);
    }

    // 1 to 10 even number 
    for(int i=1;i<=10;i++) {
        if(i%2 == 0) {
            printf("%d ", i);
        }
    }

    // 1 to 10 odd number
    for(int i=1;i<=10;i++) {
        if(i%2 != 0) {
            printf("%d", i);
        }
    }

    //67 to 23 even number 
    for(int i=67;i>=23;i--) {
        if(i%2 == 0) {
            printf("%d", i);
        }
    }

    // 67 to 23 odd number 
    for(int i=67;i>=23;i--) {
        if(i%2 != 0) {
            printf("%d", i);
        }
    } 

    // 67 to 2 even number
    for(int i=67;i>=2;i--) {
        if(i%2 == 0) {
            printf("%d", i);
        }
    }

    // 67 to 2 odd number
    for(int i=67;i>=2;i--) {
        if(i%2 != 0) {
            printf("%d", i);
        }
    }

    // Print table
    int t;
    printf("Enter number to print it's table: ");
    scanf("%d", &t);
    for(int i=1;i<=10;i++) {
        printf("%d ", t*i);
    }
    return 0;
}