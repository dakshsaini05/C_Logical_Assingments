#include<stdio.h>

int main() {
    /*
    Sum of all natural number
    int a = 1, sum = 0;
    while(a <= 10) {
        sum += a;
        a++;
    }
    printf("%d", sum);

    Count digits of the number
    int a = 1, count = 0;
    while(a > 0) {
        a /= 10;
        count++; 
    }
    printf("%d", count);

    sum of all digits of a number
    int num = 1234, rem = 0, sum = 0;
    while(num > 0) {
        rem = num % 10;
        sum += rem;
        num /= 10;
    }
    printf("%d", sum);

    Number reversal
    int n = 1234, rem = 0, sum = 0;  
    while(n > 0) {
        rem = n % 10;
        sum = sum * 10 + rem;
        n /= 10;
    }
    printf("%d", sum);

    Palindrom
    int n1 = 1221, rem = 0, sum = 0;
    int temp = n1;
    while(n1 > 0) {
        rem = n1 % 10;
        sum = sum * 10 + rem;
        n1 /= 10;
    }
    if(temp == sum) {
        printf("Number is palindrome");
    }
    else {
        printf("Number is not palindrome");
    }

    Armstrong
    int a = 153, rem = 0, sum = 0;
    int temp = a;
    while(a > 0) {
        rem = a % 10;
        sum = sum + (rem * rem * rem);
        a /= 10;
    }
    if(sum == temp) {
        printf("Number is armstrong");
    }
    else {
        printf("Number is not armstrong");
    }

    Neon number
    int n = 9, rem = 0, sum = 0;
    int temp = n * n;
    while(temp > 0) {
        rem = temp % 10;
        sum += rem;
        temp /= 10;
    }
    if(n == sum) {
        printf("Neon");
    }
    else {
        printf("Not neon");
    }
    */

    // Product of all digits of a number
    int p = 1234, rem = 0, pro = 1;
    while(p > 0) {
        rem = p % 10;
        pro *= rem;
        p /= 10;
    }
    printf("%d", pro);
    return 0;
}