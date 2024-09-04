#include<stdio.h>

int main() {
    // *****
    // *   *
    // *   *
    // *   * 
    // *****
    for(int i=1;i<=5;i++) {
        for(int j=1;j<=5;j++) {
            if(i == 1 || i == 5 || j == 1 || j == 5) {
                printf("* ");
            }
            else {
                printf("  ");
            }
        }
        printf("\n");
    }

    // * * * * *
    // *       *
    // *       *
    // * * * * * 
    // *       *
    // *       *
    for(int i=1;i<=6;i++) {
        for(int j=1;j<=5;j++) {
            if(i == 1 || i == 4 || j == 1 || j == 5) {
                printf("* ");
            }
            else {
                printf("  ");
            }
        }
        printf("\n");
    }

    // * * * * *
    // *       *
    // *       *
    // * * * * * 
    // *       *
    // *       *
    // * * * * *
    for(int i=1;i<=7;i++) {
        for(int j=1;j<=5;j++) {
            if(i == 1 || i == 4 || i == 7 || j == 1 || j == 5) {
                printf("* ");
            }
            else {
                printf("  ");
            }
        }
        printf("\n");
    }

    // * * * *
    // *
    // * 
    // * * * *
    for(int i=1;i<=4;i++) {
        for(int j=1;j<=4;j++) {
            if(i == 1 || i == 4 || j == 1) {
                printf("* ");
            }
            else {
                printf("  ");
            }
        }
        printf("\n");
    }

    // * * * *
    //       *
    //       * 
    // * * * *
    for(int i=1;i<=4;i++) {
        for(int j=1;j<=4;j++) {
            if(i == 1 || i == 4 || j == 4) {
                printf("* ");
            }
            else {
                printf("  ");
            }
        }
        printf("\n");
    } 

    // *     *
    // *     *
    // *     * 
    // * * * *
    for(int i=1;i<=4;i++) {
        for(int j=1;j<=4;j++) {
            if(i == 4 || j == 1 || j == 4) {
                printf("* ");
            }
            else {
                printf("  ");
            }
        }
        printf("\n");
    } 

    // * * * * *
    // *
    // * * * * *
    // * 
    // * * * * *
    for(int i=1;i<=5;i++) {
        for(int j=1;j<=5;j++) {
            if(i == 1 || i == 3 || i == 5 || j == 1) {
                printf("* ");
            }
            else {
                printf("  ");
            }
        }
        printf("\n");
    }

    // * * * * *
    // *
    // * * * * *
    // * 
    // *
    for(int i=1;i<=5;i++) {
        for(int j=1;j<=5;j++) {
            if(i == 1 || i == 3 || j == 1) {
                printf("* ");
            }
            else {
                printf("  ");
            }
        }
        printf("\n");
    }

    // *       *
    // *       *
    // * * * * * 
    // *       * 
    // *       *
    for(int i=1;i<=5;i++) {
        for(int j=1;j<=5;j++) {
            if(i == 3 || j == 1 || j == 5) {
                printf("* ");
            }
            else {
                printf("  ");
            }
        }
        printf("\n");
    }

    // * * * * *
    //     *
    //     * 
    //     * 
    // * * * * * 
    for(int i=1;i<=5;i++) {
        for(int j=1;j<=5;j++) {
            if(i == 1 || i == 5 || j == 3) {
                printf("* ");
            }
            else {
                printf("  ");
            }
        }
        printf("\n");
    }

    // *
    // *
    // * 
    // * 
    // * * * * *
    for(int i=1;i<=5;i++) {
        for(int j=1;j<=5;j++) {
            if(j == 1 || i == 5) {
                printf("* ");
            }
            else {
                printf("  ");
            }
        }
        printf("\n");
    }

    //         *
    //         *
    //         * 
    //         * 
    // * * * * * 
    for(int i=1;i<=5;i++) {
        for(int j=1;j<=5;j++) {
            if(i == 5 || j == 5) {
                printf("* ");
            }
            else {
                printf("  ");
            }
        }
        printf("\n");
    }

    // * * * * *
    // *
    // * 
    // * 
    // *
    for(int i=1;i<=5;i++) {
        for(int j=1;j<=5;j++) {
            if(j == 1 || i == 1) {
                printf("* ");
            }
            else {
                printf("  ");
            }
        }
        printf("\n");
    } 

    // * * * * *
    //         *
    //         * 
    //         * 
    //         * 
    for(int i=1;i<=5;i++) {
        for(int j=1;j<=5;j++) {
            if(i == 1 || j == 5) {
                printf("* ");
            }
            else {
                printf("  ");
            }
        }
        printf("\n");
    }

    // * * * * *
    //     *
    //     * 
    //     * 
    //     *
    for(int i=1;i<=5;i++) {
        for(int j=1;j<=5;j++) {
            if(i == 1 || j == 3) {
                printf("* ");
            }
            else {
                printf("  ");
            }
        }
        printf("\n");
    }

    //     *
    //     *
    //     * 
    //     * 
    // * * * * *
    for(int i=1;i<=5;i++) {
        for(int j=1;j<=5;j++) {
            if(i == 5 || j == 3) {
                printf("* ");
            }
            else {
                printf("  ");
            }
        }
        printf("\n");
    }

    // *
    // *
    // * * * * *
    // * 
    // *
    for(int i=1;i<=5;i++) {
        for(int j=1;j<=5;j++) {
            if(i == 3 || j == 1) {
                printf("* ");
            }
            else {
                printf("  ");
            }
        }
        printf("\n");
    } 

    //         *
    //         *
    // * * * * * 
    //         * 
    //         *
    for(int i=1;i<=5;i++) {
        for(int j=1;j<=5;j++) {
            if(i == 3 || j == 5) {
                printf("* ");
            }
            else {
                printf("  ");
            }
        }
        printf("\n");
    } 

    // * 2 3 4 5
    // 1 * 3 4 5
    // 1 2 * 4 5
    // 1 2 3 * 5
    // 1 2 3 4 *
    for(int i=1;i<=5;i++) {
        for(int j=1;j<=5;j++) {
            if(i == j) {
                printf("* ");
            }
            else {
                printf("%d ", j);
            }
        }
        printf("\n");
    }

    // * * * * *
    // * 2 2 2 *
    // * 3 3 3 *
    // * 4 4 4 * 
    // * * * * *
    for(int i=1;i<=5;i++) {
        for(int j=1;j<=5;j++) {
            if(i == 1 || i == 5 || j == 1 || j == 5) {
                printf("* ");
            }
            else {
                printf("%d ", i);
            }
        }
        printf("\n");
    }    

    // * * * * *
    // *   *   *
    // * * * * *
    // *   *   * 
    // * * * * *
    for(int i=1;i<=5;i++) {
        for(int j=1;j<=5;j++) {
            if(i == 1 || i == 3 || i == 5 || j == 1 || j == 3 || j == 5) {
                printf("* ");
            }
            else {
                printf("  ");
            }
        }
        printf("\n");
    }

    // * * * * *
    // *       *
    // * * * * *
    // *       * 
    // * * * * *
    for(int i=1;i<=5;i++) {
        for(int j=1;j<=5;j++) {
            if(i == 1 || i == 3 || i == 5 || j == 1 || j == 5) {
                printf("* ");
            }
            else {
                printf("  ");
            }
        }
        printf("\n");
    }

    // * * * * *
    // *     * *
    // *   *   *
    // * *     * 
    // * * * * *
    for(int i=1;i<=5;i++) {
        for(int j=1;j<=5;j++) {
            if(i == 1 || i == 5 || j == 1 || j == 5 || i+j == 6) {
                printf("* ");
            } 
            else {
                printf("  ");
            }
        }
        printf("\n");
    }

    // * * * * *
    // * *     *
    // *   *   *
    // *     * * 
    // * * * * *
    for(int i=1;i<=5;i++) {
        for(int j=1;j<=5;j++) {
            if(i == 1 || i == 5 || j == 1 || j == 5 || i == j) {
                printf("* ");
            }
            else {
                printf("  ");
            }
        }
        printf("\n");
    }

    // * * * * *
    // * *   * *
    // *   *   *
    // * *   * * 
    // * * * * *
    for(int i=1;i<=5;i++) {
        for(int j=1;j<=5;j++) {
            if(i == 1 || i == 5 || j == 1 || j == 5 || i == j || i+j == 6) {
                printf("* ");
            }
            else {
                printf("  ");
            }
        }
        printf("\n");
    }

    // *       *
    //   *   *  
    //     *    
    //   *   *   
    // *       *
    for(int i=1;i<=5;i++) {
        for(int j=1;j<=5;j++) {
            if(i == j || i+j == 6) {
                printf("* ");
            }
            else {
                printf("  ");
            }
        }
        printf("\n");
    } 

    // * * * * *
    //   *      
    //     *    
    //       *   
    // * * * * *
    for(int i=1;i<=5;i++) {
        for(int j=1;j<=5;j++) {
            if(i == 1 || i == 5 || i == j) {
                printf("* ");
            }
            else {
                printf("  ");
            }
        }
        printf("\n");
    }

    // * * * * *
    //       *  
    //     *    
    //   *       
    // * * * * *
    for(int i=1;i<=5;i++) {
        for(int j=1;j<=5;j++) {
            if(i == 1 || i == 5 || i+j == 6) {
                printf("* ");
            }
            else {
                printf("  ");
            }
        }
        printf("\n");
    }

    // *       *
    // *     *
    // *   *
    // * *
    // * * * * *
    for(int i=1;i<=5;i++) {
        for(int j=1;j<=5;j++) {
            if(i == 5 || j == 1 || i+j == 6) {
                printf("* ");
            }
            else {
                printf("  ");
            }
        }
        printf("\n");
    }

    // *       *
    //   *     *
    //     *   *
    //       * *
    // * * * * *
    for(int i=1;i<=5;i++) {
        for(int j=1;j<=5;j++) {
            if(i == j || i == 5 || j == 5) {
                printf("* ");
            }
            else {
                printf("  ");
            }
        }
        printf("\n");
    }

    // * * * * *
    // * *
    // *   *
    // *     *
    // *       *
    for(int i=1;i<=5;i++) {
        for(int j=1;j<=5;j++) {
            if(i == 1 || j == 1 || i == j) {
                printf("* ");
            }
            else {
                printf("  ");
            }
        }
        printf("\n");
    }

    // * * * * *
    //       * *
    //     *   * 
    //   *     * 
    // *       * 
    for(int i=1;i<=5;i++) {
        for(int j=1;j<=5;j++) {
            if(i == 1 || j == 5 || i+j == 6) {
                printf("* ");
            }
            else {
                printf("  ");
            }
        }
        printf("\n");
    }

    // 1 6 11 16 21
    // 2 7 12 17 22
    // 3 8 13 18 23
    // 4 9 14 19 24
    // 5 10 15 20 25
    int num = 1;
    for(int i=1;i<=5;i++) {
        for(int j=1;j<=5;j++) {
            printf("%d ", num);
            num = num + 5;
        }
        num = i+1;
        printf("\n");
    }
    return 0;
}