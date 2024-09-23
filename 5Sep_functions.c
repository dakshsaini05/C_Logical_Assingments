#include<stdio.h>

void add(int a, int b);
void sub(int a, int b);
void mul(int a, int b);
void div(int a, int b);
void mod(int a, int b);
void even(int e);
void marksheet(int phy, int chem, int bio, int math, int comp, int total, float percentage);
void month(int Month);
void week(int week);
void vowal(char alp);
void voterid(int a);

int main() {
    int x, y;
    printf("Enter number 1: ");
    scanf("%d", &x);
    printf("Enter number 2: ");
    scanf("%d", &y);
    add(x, y);
    return 0;
}

void add(int a, int b) {
    printf("%d", a+b);
}

void sub(int a, int b) {
    printf("%d", a-b);
}

void mul(int a, int b) {
    printf("%d", a*b);
}

void div(int a, int b) {
    printf("%d", a/b);
}

void mod(int a, int b) {
    printf("%d", a%b);
}

void even(int e) {
    if(e%2 == 0) {
        printf("Number entered is even");
    }
    else {
        printf("Number entered is odd");
    }
}

void marksheet(int phy, int chem, int bio, int math, int comp, int total, float percentage) {
    int total = phy + chem + bio + math + comp;
    float percentage = (float)total / 5;
    if(percentage >= 90) {
      printf("Grade A");
    }
    else if(percentage >= 80){
      printf("Grade B");
    }
    else if(percentage >= 70){
      printf("Grade C");
    }
    else if(percentage >= 60){
      printf("Grade D");
    }
    else if(percentage >= 40){
      printf("Grade E");
    }
    else {
      printf("Percetage is less than 40, Grade F");
    }
}

void month(int Month) {
    if(Month == 1) {
        printf("January");
    }
    else if(Month == 2) {
        printf("Febuary");
    }
    else if(Month == 3) {
        printf("March");
    }
    else if(Month == 4) {
        printf("April");
    }
    else if(Month == 5) {
        printf("May");
    }
    else if(Month == 6) {
        printf("June");
    }
    else if(Month == 7) {
        printf("July");
    }
    else if(Month == 8){
        printf("August");
    }
    else if(Month == 9){
        printf("September");
    }
    else if(Month == 10){
        printf("Octuber");
    }
    else if(Month == 11){
        printf("November");
    }
    else if(Month == 12){
        printf("December");
    }
}

void week(int week) {
    if(week == 1) {
        printf("Monday");
    }
    else if(week == 2) {
        printf("Tuesday");
    }
    else if(week == 3) {
        printf("Wednesday");
    }
    else if(week == 4) {
        printf("Thrusday");
    }
    else if(week == 5) {
        printf("Friday");
    }
    else if(week == 6) {
        printf("Saturday");
    }
    else if(week == 7) {
        printf("Sunday");
    }
    else {
        printf("Invalid number entered");
    }
}

void vowal(char alp) {
    if(
        alp == 'A' &&
        alp == 'E' &&
        alp == 'I' &&
        alp == 'O' &&
        alp == 'U' &&
        alp == 'a' &&
        alp == 'e' &&
        alp == 'i' &&
        alp == 'o' &&
        alp == 'u'
    ){
        printf("Character entered is a vowel");
    }
    else {
        printf("Character entered is a constant");
    }
}

void voterid(int v) {
    if(v >= 18) {
        printf("Eligible to vote");
    }
    else {
        printf("Not eligible to vote");
    }
}