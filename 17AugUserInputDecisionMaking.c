#include<stdio.h>


int main() {
    /*
    User input Questions
    1)
    int a;
    printf("Enter value of a: ");
    scanf("%d", &a);


    2)
    char b;
    printf("Enter a character: ");
    scanf("%s", &b);


    3)
    float num;
    printf("Enter a float value: ");
    scanf("%f", &num);


    4)
    int num1;
    float num2;
    char num3;
    printf("Enter an integer: ");
    scanf("%d", &num1);
    printf("Enter an float: ");
    scanf("%f", &num2);
    printf("Enter an character: ");
    scanf("%s", &num3);
    printf("%d %f %s", num1, num2, num3);


    5)
    int n1, n2, n3;
    printf("Enter number 1: ");
    scanf("%d", &n1);
    printf("Enter number 2: ");
    scanf("%d", &n2);
    n3 = n1 + n2;
    printf("%d", n3);


    6)
    int x, y, z;
    printf("Enter number 1: ");
    scanf("%d", &x);
    printf("Enter number 2: ");
    scanf("%d", &y);
    z = x - y;
    printf("%d", z);


    7)
    int A, B, C;
    printf("Enter the number 1: ");
    scanf("%d", &A);
    printf("Enter the number 2: ");
    scanf("%d", &B);
    C = A * B;
    printf("%d", C);


    8)
    int e, f, g;
    printf("Enter value of e: ");
    scanf("%d", &e);
    printf("Enter value of f: ");
    scanf("%d", &f);
    g = e / f;
    printf("%d", g);


    9, 10)
    int m1, m2, m3, m4, m5;
    printf("Enter value of m1: ");
    scanf("%d", &m1);
    printf("Enter value of m2: ");
    scanf("%d", &m2);
    printf("Enter value of m3: ");
    scanf("%d", &m3);
    printf("Enter value of m4: ");
    scanf("%d", &m4);
    m5 = m1+m2+m3+m4;
    printf("%d", m5);


    11)
    int m10, m20, m30, m40, m50, m60;
    printf("Enter value of m10: ");
    scanf("%d", &m10);
    printf("Enter value of m20: ");
    scanf("%d", &m20);
    printf("Enter value of m30: ");
    scanf("%d", &m30);
    printf("Enter value of m40: ");
    scanf("%d", &m40);
    printf("Enter value of m60: ");
    scanf("%d", &m60);
    m50 = m10*m20+m30/m40-m60;
    printf("%d", m50);


    12)
    float a1, a2, a3, a5;
    int a4;
    printf("Enter value of a1: ");
    scanf("%f", &a1);
    printf("Enter value of a2: ");
    scanf("%f", &a2);
    printf("Enter value of a3: ");
    scanf("%f", &a3);
    printf("Enter value of a4: ");
    scanf("%d", &a4);
    a5 = a1 * a2 - a3 / a4;
    printf("%f", a5);


    13)
    float f1, f2, f3, f4;
    int i1, i2, i3;
    printf("Enter value of f1: ");
    scanf("%f", &f1);
    printf("Enter value of i1: ");
    scanf("%d", &i1);
    printf("Enter value of i2: ");
    scanf("%d", &i2);
    printf("Enter value of i3: ");
    scanf("%d", &i3);
    printf("Enter value of f2: ");
    scanf("%f", &f2);
    printf("Enter value of f3: ");
    scanf("%f", &f3);
    f4 = f1 * (i1 - i2) / i3 + f2 - f3;
    printf("%f", f4);


    14)
    float f10, f20, f30, f40, f50;
    int i10, i20;
    printf("Enter value of f10: ");
    scanf("%f", &f10);
    printf("Enter value of f20: ");
    scanf("%f", &f20);
    printf("Enter value of i10: ");
    scanf("%d", &i10);
    printf("Enter value of i20: ");
    scanf("%d", &i20);
    printf("Enter value of f30: ");
    scanf("%f", &f30);
    printf("Enter value of f40: ");
    scanf("%f", &f40);
    f50 = f10 * f20 - (i10 / i20) - f30 + f40;
    printf("%f", f50);


    15)
    int d1, d2, d3, d4, d5, d6;
    float d7;
    printf("Enter value of d1: ");
    scanf("%d", &d1);
    printf("Enter value of d2: ");
    scanf("%d", &d2);
    printf("Enter value of d3: ");
    scanf("%d", &d3);
    printf("Enter value of d4: ");
    scanf("%d", &d4);
    printf("Enter value of d5: ");
    scanf("%d", &d5);
    printf("Enter value of d6: ");
    scanf("%d", &d6);
    d7 = d1 * d2 + (d3 - d4) / d5 + d6;
    printf("%f", d7);


    16)
    float fl1, fl2, fl3, fl4, fl5, fl6;
    int in1;
    printf("Enter value of fl1: ");
    scanf("%f", &fl1);
    printf("Enter value of fl2: ");
    scanf("%f", &fl2);
    printf("Enter value of fl3: ");
    scanf("%f", &fl3);
    printf("Enter value of fl4: ");
    scanf("%f", &fl4);
    printf("Enter value of in1: ");
    scanf("%d", &in1);
    printf("Enter value of fl5: ");
    scanf("%f", &fl5);
    fl6 = fl1 + fl2 * (fl3 - fl4) / in1 + fl5;
    printf("%f", fl6);


    Control Statements Questions
    1)
    int a;
    printf("Enter number a: ");
    scanf("%d", &a);
    if(a > 10) {
        printf("a is greater than 10");
    }
    else {
        printf("a is not greater than 10");
    }


    2)
    int b;
    printf("Enter number b: ");
    scanf("%d", &b);
    if(b > 50) {
        printf("b is greater than 10");
    }
    else {
        printf("b is not greater than 10");
    }


    3)
    int c;
    printf("Enter number c: ");
    scanf("%d", &c);
    if(c < 46) {
        printf("c is less than 46");
    }
    else {
        printf("c is not less than 46");
    }


    4)
    int d;
    printf("Enter number to check if divisible by 5: ");
    scanf("%d", &d);
    if(d % 5 == 0) {
        printf("Number entered is divisible by 5");
    }
    else {
        printf("Number entered is not divisible by 5");
    }


    5)
    int e;
    printf("Enter number to check if odd or even: ");
    scanf("%d", &e);
    if(e % 2 == 0) {
        printf("number entered is even");
    }
    else {
        printf("number entered is odd");
    }
    */


    // 6)
    int f;
    printf("Enter number to check if number +ve or -ve: ");
    scanf("%d", &f);
    if(f > 0){
        printf("Number is positive");
    }
    else {
        printf("Number is negetive");
    }
    return 0;
}
