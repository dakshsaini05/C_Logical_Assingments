#include<stdio.h>

int main() {
    /*
    Check vowel or consonant
    char l;
    printf("Enter a letter to check weather a consonent or a vowel: ");
    scanf("%s", &l);
    if(
        l == 'a' ||
        l == 'e' ||
        l == 'i' ||
        l == 'o' ||
        l == 'u' ||
        l == 'A' ||
        l == 'E' ||
        l == 'I' ||
        l == 'O' ||
        l == 'U'
    ) {
        printf("It is a vowel");
    }
    else {
        printf("It is a consonant");
    }

    Enter upper line letters 
    
    char in;
    printf("Enter a letter from the upper line of the keyboard: ");
    scanf("%s", &in);
    if(
        in == 'q' ||
        in == 'w' ||
        in == 'e' ||
        in == 'r' ||
        in == 't' ||
        in == 'y' ||
        in == 'u' ||
        in == 'i' ||
        in == 'o' ||
        in == 'p'
    ) {
        printf("Upper line");
    }
    else {
        printf("Input is not valid");
    }

    check mid line
    char in2;
    printf("Enter a letter from the upper line of the keyboard: ");
    scanf("%s", &in2);
    if(
        in2 == 'a' ||
        in2 == 's' ||
        in2 == 'd' ||
        in2 == 'f' ||
        in2 == 'g' ||
        in2 == 'h' ||
        in2 == 'j' ||
        in2 == 'k' ||
        in2 == 'l'
    ) {
        printf("Mid line");
    }
    else {
        printf("Input is not valid");
    }

    char peak;
    printf("Enter any character: ");
    scanf("%s", &peak);
    if(peak == 'p' || peak == 'e' || peak == 'a' || peak == 'k') {
        printf("PEAK");
    }
    else {
        printf("Input is invalid");
    }

    divisible by 4 and 6
    int num;
    printf("Enter number: ");
    scanf("%d", &num);
    if(num % 4 == 0 && num % 6 == 0) {
        printf("divisible by 6 and 4 both");
    } 
    else {
        printf("Not divisible");
    }

    divisible by 4 or 6
    int num2;
    printf("Enter number: ");
    scanf("%d", &num2);
    if(num2 % 4 == 0 || num2 % 6 == 0) {
        printf("divisible");
    } 
    else {
        printf("Not divisible");
    }

    divisible by 5 and 11 both 
    int num3;
    printf("Enter number: ");
    scanf("%d", &num3);
    if(num3 % 5 == 0 && num3 % 11 == 0) {
        printf("divisible by 5 and 11 both");
    } 
    else {
        printf("Not divisible");
    }

    Number is between 1 and 10
    int n1;
    printf("Enter number: ");
    scanf("%d", &n1);
    if(n1 >=1 && n1 <= 10) {
        printf("this number is present in between 1 to 10");
    }
    else {
        printf("this number is not in between 1 to 10");
    }

    Number is between 11 to 20
    int n2;
    printf("Enter number: ");
    scanf("%d", &n2);
    if(n2 >= 11 && n2 <= 20) {
        printf("this number is between 11 to 20");
    }
    else {
        printf("this number is not in between 11 to 20");
    }

    greater than 36 pass else fail
    int m1, m2, m3, m4, m5;
    printf("Enter five marks (each one out of 10): ");
    scanf("%d %d %d %d %d", &m1, &m2, &m3, &m4, &m5);
    int total = m1 + m2 + m3 + m4 + m5;
    if(total > 36) {
        printf("You passed");
    }
    else {
        printf("You failed");
    }

    greater than 60% you pass else fail
    float m1, m2, m3, m4, m5;
    printf("Enter five marks (each one out of 10): ");
    scanf("%f %f %f %f %f", &m1, &m2, &m3, &m4, &m5);
    float total = m1 + m2 + m3 + m4 + m5;
    float per = total / 50 * 100;
    if(per > 60){
        printf("You passed");
    }
    else {
        printf("You failed");
    }
    */

    float m1, m2, m3, m4, m5;
    printf("Enter five number (each out of 10): ");
    scanf("%f %f %f %f %f", &m1, &m2, &m3, &m4, &m5);
    float total = m1 + m2 + m3 + m4 + m5;
    float avg = total / 50;
    if(avg > 40) {
        printf("Pass");
    }
    else {
        printf("Fail");
    }
    return 0;
}
