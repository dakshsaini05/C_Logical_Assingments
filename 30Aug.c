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

    // 1
    // 10
    // 101
    // 1010
    // 10101
    for(int i=1;i<=5;i++) {
        for(int j=1;j<=i;j++) {
            if(i%2 != 0) {
                printf("1 ");
            }
            else {
                printf("0 ");
            }
        }
        printf("\n");
    }

    // 1
    // 0 1
    // 1 0 1
    // 0 1 0 1 
    // 1 0 1 0 1
    for(int i=1;i<=5;i++) {
        for(int j=1;j<=i;j++) {
            if((i+j) % 2 == 0){
                printf("1 ");
            }
            else {
                printf("0 ");
            }
        }
        printf("\n");
    }

    // 1
    // 4 4 
    // 9 9 9 
    // 16 16 16 16
    // 25 25 25 25 25
    for(int i=1;i<=5;i++) {
        for(int j=1;j<=i;j++) {
            printf("%d ", i*i);
        }
        printf("\n");
    }

    // ****
    // ****
    // ****
    // ****
    for(int i=1;i<=4;i++) {
        for(int j=1;j<=4;j++) {
            printf("* ");
        }
        printf("\n");
    }

    // 12345
    // 12345
    // 12345
    // 12345
    // 12345
    for(int i=1;i<=5;i++) {
        for(int j=1;j<=5;j++) {
            printf("%d ", j);
        }
        printf("\n");
    }

    // 10101
    // 10101
    // 10101
    // 10101
    for(int i=1;i<=5;i++) {
        for(int j=1;j<=5;j++) {
            if(j%2 != 0) {
                printf("1 ");
            }
            else {
                printf("0 ");
            }
        }
        printf("\n");
    }

    // 1111
    // 2222
    // 3333
    // 4444
    // 5555
    for(int i=1;i<=5;i++) {
        for(int j=1;j<=5;j++) {
            printf("%d ", i);
        }
        printf("\n");
    }

    // 1111
    // 0000
    // 1111
    // 0000
    for(int i=1;i<=4;i++) {
        for(int j=1;j<=4;j++) {
            if(i%2 != 0) {
                printf("1 ");
            }
            else {
                printf("0 ");
            }
        }
        printf("\n");
    }

    // 1 2 3 4 5 
    // 6 7 8 9 10
    // 11 12 13 14 15
    // 16 17 18 19 20 
    // 21 22 23 24 25

    // 1 0 1 0 1 
    // 0 1 0 1 0 
    // 1 0 1 0 1 
    // 0 1 0 1 0 
    // 1 0 1 0 1 
    for(int i=1;i<=5;i++) {
        for(int j=1;j<=5;j++) {
            if((i+j) % 2 == 0) {
                printf("1 ");
            }
            else {
                printf("0 ");
            }
        }
        printf("\n");
    }

    // 1 2 3 4 5 
    // 2 3 4 5 6 
    // 3 4 5 6 7 
    // 4 5 6 7 8 
    // 5 6 7 8 9 
    for(int i=1;i<=5;i++) {
        for(int j=1;j<=5;j++) {
            printf("%d ", i + j - 1);
        }
        printf("\n");
    }

    //     *
    //    **
    //   ***
    //  ****
    // *****
    for(int i=1;i<=5;i++) {
        for(int s=5;s>=i;s--) {
            printf(" ");
        }
        for(int j=1;j<=i;j++){
            printf("*");
        }
        printf("\n");
    }

    // *****
    //  ****
    //   ***
    //    **
    //     *
    for(int i=1;i<=5;i++) {
        for(int s=1;s<=i;s++) {
            printf(" ");
        }
        for(int j=5;j>=i;j--) {
            printf("*");
        }
        printf("\n");
    }

    // ####*
    // ###**
    // ##***
    // #****
    // *****
    for(int i=1;i<=5;i++) {
        for(int s=5;s>=i;s--) {
            printf("#");
        }
        for(int j=1;j<=i;j++) {
            printf("*");
        }
        printf("\n");
    }

    //     1 
    //    2 2 
    //   3 3 3 
    //  4 4 4 4
    // 5 5 5 5 5 
    for(int i=1;i<=5;i++) {
        for(int s=5;s>=i;s--) {
            printf(" ");
        }
        for(int j=1;j<=i;j++) {
            printf("%d ",i);
        }
        printf("\n");
    }

//     *
//    **
//   ***
//  ****
// *****
// *****
//  ****
//   ***
//    **
//     *
    for(int i=1;i<=5;i++) {
        for(int s=5;s>=i;s--) {
            printf(" ");
        }
        for(int j=1;j<=i;j++) {
            printf("*");
        }
        printf("\n");
    }
    for(int i=1;i<=5;i++) {
        for(int s=1;s<=i;s++) {
            printf(" ");
        }
        for(int j=5;j>=i;j--) {
            printf("*");
        }
        printf("\n");
    }

    // *****
    //  ****
    //   ***
    //    **
    //     *
    //     *
    //    **
    //   ***
    //  ****
    // *****
    for(int i=1;i<=5;i++) {
        for(int s=1;s<=i;s++) {
            printf(" ");
        }
        for(int j=5;j>=i;j--) {
            printf("*");
        }
        printf("\n");
    }
    for(int i=1;i<=5;i++) {
        for(int s=5;s>=i;s--) {
            printf(" ");
        }
        for(int j=1;j<=i;j++) {
            printf("*");
        }
        printf("\n");
    }

    // *****
    // #****
    // ##***
    // ###**
    // ####*
    for(int i=1;i<=5;i++) {
        for(int s=1;s<=i;s++) {
            printf("#");
        }
        for(int j=5;j>=i;j--) {
            printf("*");
        }
        printf("\n");
    }

    // ####*
    // ###**
    // ##***
    // #****
    // *****
    // *****
    // #****
    // ##***
    // ###**
    // ####*
    for(int i=1;i<=5;i++) {
        for(int s=5;s>=i;s--) {
            printf("#");
        }
        for(int j=1;j<=i;j++) {
            printf("*");
        }
        printf("\n");
    }
    for(int i=1;i<=5;i++) {
        for(int s=1;s<=i;s++) {
            printf("#");
        }
        for(int j=5;j>=i;j--) {
            printf("*");
        }
        printf("\n");
    }

    //     *
    //    * *
    //   * * * 
    //  * * * * 
    // * * * * * 
    for(int i=1;i<=5;i++) {
        for(int s=5;s>=i;s--) {
            printf(" ");
        }
        for(int j=1;j<=i;j++) {
            printf("* ");
        }
        printf("\n");
    }

    // * * * * * 
    //  * * * *
    //   * * *
    //    * *
    //     *
    for(int i=1;i<=5;i++) {
        for(int s=1;s<=i;s++) {
            printf(" ");
        }
        for(int j=5;j>=i;j--) {
            printf("* ");
        }
        printf("\n");
    }

    //     *
    //    * *
    //   * * * 
    //  * * * * 
    // * * * * * 
    // * * * * * 
    //  * * * *
    //   * * *
    //    * *
    //     *
    for(int i=1;i<=5;i++) {
        for(int s=5;s>=i;s--) {
            printf(" ");
        }
        for(int j=1;j<=i;j++) {
            printf("* ");
        }
        printf("\n");
    }
    for(int i=1;i<=5;i++) {
        for(int s=1;s<=i;s++) {
            printf(" ");
        }
        for(int j=5;j>=i;j--) {
            printf("* ");
        }
        printf("\n");
    }

    // * * * * * 
    //  * * * *
    //   * * *
    //    * *
    //     *
    //     *
    //    * *
    //   * * * 
    //  * * * * 
    // * * * * * 
    for(int i=1;i<=5;i++) {
        for(int s=1;s<=i;s++) {
            printf(" ");
        }
        for(int j=5;j>=i;j--) {
            printf("* ");
        }
        printf("\n");
    }
    for(int i=1;i<=5;i++) {
        for(int s=5;s>=i;s--) {
            printf(" ");
        }
        for(int j=1;j<=i;j++) {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}