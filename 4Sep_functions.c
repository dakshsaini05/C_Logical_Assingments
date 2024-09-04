#include<stdio.h>

void add();
void sub();
void mul();
void div();
void mod();
void even();
void marksheet();
void month();
void week();
void vowal();
void voterid();

int main() {
    // add();
    // sub();
    // mul();
    // div();
    // mod();
    // even();
    // marksheet();
    // month();
    // week();
    // vowal();
    voterid();

    return 0;
}

void add() {
    int a, b, c;
    printf("Enter two numbers for addition: ");
    scanf("%d %d", &a, &b);
    c = a + b;
    printf("%d", c);
}

void sub() {
    int a, b, c;
    printf("Enter two numbers for subtraction: ");
    scanf("%d %d", &a, &b);
    c = a - b;
    printf("%d", c);
}

void mul() {
    int a, b, c;
    printf("Enter two numbers for Multiplication: ");
    scanf("%d %d", &a, &b);
    c = a * b;
    printf("%d", c);
}

void div() {
    float a, b, c;
    printf("Enter two numbers for Division: ");
    scanf("%f %f", &a, &b);
    c = a / b;
    printf("%f", c);
}

void mod() {
    int a, b, c;
    printf("Enter two numbers to find out the remainder: ");
    scanf("%d %d", &a, &b);
    c = a % b;
    printf("%d", c);
}

void even() {
    int a;
    printf("Enter a number to check even or odd: ");
    scanf("%d", &a);
    if(a%2 == 0) {
        printf("Number entered is even");
    }
    else {
        printf("The number entered is odd");
    }
}

void marksheet() {
    int phy, chem, bio, math, comp;
  printf("Enter marks of Physics: ");
  scanf("%d", &phy);
  printf("Enter marks of Chemistry: ");
  scanf("%d", &chem);
  printf("Enter marks of Biology: ");
  scanf("%d", &bio);
  printf("Enter marks of Mathematics: ");
  scanf("%d", &math);
  printf("Enter marks of Computer: ");
  scanf("%d", &comp);
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

void month() {
    int Month;
    printf("Enter month number: ");
    scanf("%d", &Month);
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

void week() {
    int week;
    printf("Enter week day number: ");
    scanf("%d", &week);
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

void vowal() {
    char alp;
    printf("Enter an alphabet: ");
    scanf("%s", &alp);
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

void voterid() {
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);
    if(age >= 18) {
        printf("Eligible to vote");
    }
    else {
        printf("Not eligible to vote");
    }
}