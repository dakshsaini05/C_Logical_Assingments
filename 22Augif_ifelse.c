#include <stdio.h>

int main()
{
    /*
    // Answer 1
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


    //Answer 2
    int Month;
    printf("Enter week day number: ");
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
        printf("August");
    }


    // Answer 3
    char n;
    printf("Enter character from (a, b, c, d): ");
    scanf("%s", &n);
    if(n == 'a') {
        printf("apple");
    }
    else if(n == 'b') {
        printf("ball");
    }
    else if(n == 'c') {
        printf("cat");
    }
    else if(n == 'd') {
        printf("dog");
    }
    else {
        printf("Invalid character");
    }


    // Answer 4
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


   //Answer 5
   char letter;
    printf("Enter any letter from a to z: ");
    scanf("%s", &letter);
    if(
        letter == 'q' ||
        letter == 'w' ||
        letter == 'e' ||
        letter == 'r' ||
        letter == 't' ||
        letter == 'y' ||
        letter == 'u' ||
        letter == 'u' ||
        letter == 'i' ||
        letter == 'o' ||
        letter == 'p'
    ) {
        printf("Upper line");
    }
    else if (
        letter == 'a' ||
        letter == 's' ||
        letter == 'd' ||
        letter == 'f' ||
        letter == 'g' ||
        letter == 'h' ||
        letter == 'j' ||
        letter == 'k' ||
        letter == 'l'
    ) {
        printf("mid line");
    }
    else if (
        letter == 'z' ||
        letter == 'x' ||
        letter == 'c' ||
        letter == 'v' ||
        letter == 'b' ||
        letter == 'n' ||
        letter == 'm'
    ) {
        printf("Lower line");
    }
    else {
        printf("Invalid character");
    }


   //Answer 5
   int check;
   printf("Enter number: ");
   scanf("%d", &check);
   if(check >=1 && check <= 10) {
    printf("this number is present between 1 to 10");
   }
   else if(check >= 11 && check <= 20) {
    printf("this number is present between 11 to 20");
   }
   else if(check >= 21 && check <= 30) {
    printf("this number is present between 21 to 30");
   }
   else {
    printf("Input is not valid");
   }


    //Answer 6
    int a, b;
    char op;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    printf("Enter operator(a, s, m, d): ");
    if(op == 'a') {
        printf("%d", a + b);
    }
    else if(op == 's') {
        printf("%d", a - b);
    }
    else if(op == 'm') {
        printf("%d", a * b);
    }
    else if(op == 'd') {
        printf("%d", a / b);
    }
    else {
        printf("input is invalid");
    }


   //Answer 7
   int l, b, p;
   printf("Enter length and breadth : ");
   scanf("%d %d", &l, &b);
   p = 2 * (l + b);
   

    // Answer 8
    int l, b, ar;
    printf("Enter length and breadth : ");
    scanf("%d %d", &l, &b);
    ar = l * b;
    printf("%d", ar);
    

   //Answer 9
   int r;
   printf("Enter radius: ");
   scanf("%d", &r);
   float area = 3.14 * r * r;
   int diameter = 2 * r;
   float circumference = 2 * 3.14 * r;
   printf("Area of the circle is %f\n", area);
   printf("Diameter of the circle is %d\n", diameter);
   printf("circumference of the circle is %f\n", circumference);
   

   //Answer 10
   int cen;
   printf("Enter the number in cantimeter: ");
   scanf("%d", &cen);
   printf("%d centimeters = %f meters\n", cen, cen * 0.01);
   printf("%d centimeter = %f kilometer\n", cen, cen * 0.00001);
   

  //Answer 11
  int a, b;
  printf("Enter two numbers to compare: ");
  scanf("%d %d", &a, &b);
  if(a > b) {
    printf("a is greater");
  }
  else {
    printf("b is greater");
  }
  
  
  //Answer 12
  int a, b, c;
  printf("Enter three numbers to compare: ");
  scanf("%d %d %d", &a, &b, &c);
  if(a > b && a > c) {
    printf("a is greater");
  }
  else if(b > a && b > c) {
    printf("b is greater");
  }
  else {
    printf("c is greater");
  }
  

  //Answer 13
  int a;
  printf("Enter numbers: ");
  scanf("%d", &a);
  if(a > 0) {
    printf("a is positive");
  }
  else if(a == 0) {
    printf("a is zero");
  }
  else {
    printf("a is negetive");
  }
  

  //Answer 14
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
  

  //Answer 15
  int emp;
  float hra, da;
  printf("Enter salary of an employee: ");
  scanf("%d", &emp);
  if(emp <= 10000) {
    hra = 10000 * 0.2;
    da = 10000 * 0.8;
    printf("HRA is %f and DA is %f", hra, da);
    printf("Gross salary is %f", emp, hra, da);
  }
  else if(emp <= 20000){
    hra = 20000 * 0.25;
    da = 20000 * 0.9;
    printf("HRA is %f and DA is %f", hra, da);
    printf("Gross salary is %f", emp, hra, da);
  }
  else if(emp > 20000) {
    hra = 10000 * 0.3;
    da = 10000 * 0.95;
    printf("HRA is %f and DA is %f", hra, da);
    printf("Gross salary is %f", emp, hra, da);
  }
  else {
    printf("Invalid salary");
  }
  */
  
  //Answer 15
  float u, total_bill;

  printf("Enter the number of units consumed: ");
  scanf("%f", &u);

  if (u <= 50) {
      total_bill = u * 0.50;
  } else if (u <= 150) {
      total_bill = 50 * 0.50 + (u - 50) * 0.75;
  } else if (u <= 250) {
      total_bill = 50 * 0.50 + 100 * 0.75 + (u - 150) * 1.20;
  } else {
      total_bill = 50 * 0.50 + 100 * 0.75 + 100 * 1.20 + (u - 250) * 1.50;
  }

  total_bill += total_bill * 0.20;

  printf("Total electricity bill: %f", total_bill);
  
    return 0;
}