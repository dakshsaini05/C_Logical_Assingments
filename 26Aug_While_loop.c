#include<stdio.h>

int main() {
    // Answer 1
    int a = 1;
    while(a <= 5) {
        printf("%d ", a);
        a++;
    }

    // Answer 2
    int b = 1;
    while(b <= 10) {
        printf("%d ", b);
        b++;
    }

    // Answer 3
    int c = 1;
    while(c <= 100) {
        printf("%d ", c);
        c++;
    }

    // Answer 4
    int num = 34;
    while(num <= 89) {
        printf("%d ", num);
        num++;
    }

    // Answer 5
    int num1 = 5;
    while(num1 >= 1) {
        printf("%d ", num1);
        num1;
    }

    // Answer 6
    int num2 = 1;
    while(num2 <= 5) {
        if(num2 % 2 == 0) {
            printf("%d", num2);
        }
    }

    // Answer 7
    int num3 = 1;
    while(num3 <= 10) {
        if(num3 % 2 == 0) {
            printf("%d ", num3);
        }
        num++;
    }

    // Answer 8
    int a=56;
    while(a>=23){
       if(a%2==0){
       printf("%d ",a);
       }
       a--;
    }

    // Odd Number Question
    // Answer 1
    int a=1;
    while(a<=5){
       if(a%2!=0){
       printf("%d ",a);
       }
       a++;
    }

    // Answer 2
    int a=1;
    while(a<=10){
       if(a%2!=0){
       printf("%d ",a);
       }
       a++;
    }

    // Answer 3
    int a=34;
    while(a<=89){
      if(a%2!=0){
      printf("%d ",a);
      }
       a++;
    }

    // Answer 4
    int a=5;
    while(a>=1){
       if(a%2!=0){
       printf("%d ",a);
       }
       a--;
    }

    // Answer 5
    int a=10;
    while(a>=1){
       if(a%2!=0){
       printf("%d ",a);
       }
       a--;
    }

    // Answer 6
    int a=56;
    while(a>=23){
       if(a%2!=0){
       printf("%d ",a);
       }
       a--;
    }

    
    // Take user input
    // a: 
    char a;
    int i = 1; 
    printf("Enter a character: ");
    scanf("%c", &a);
    printf("Numbers from 1 to 5 are:\n");
    while (i <= 5) {
        printf("%d\n", i);
        i++; 
    }

    // b:
    char b;   
    int i = 45; 
    printf("Enter a character: ");
    scanf("%c", &b);
    printf("Numbers from 45 to 34 are:\n");
    while (i >=34) {
        printf("%d\n", i);
        i--; 
    }

    // c:
    char c;      
    int num = 4;
    printf("Enter a character: ");
    scanf("%c", &c);
    printf("Even numbers between 3 and 67 are:\n");
    while (num <= 67) {
        printf("%d\n", num);
        num += 2;     
    }

    // d:
    char d;      
    int num = 55;
    printf("Enter a character: ");
    scanf("%c", &d);
    printf("Odd numbers from 56 to 34 are:\n");
    while (num >= 34) {
        printf("%d\n", num);
        num -= 2;   
    }













    return 0;
}