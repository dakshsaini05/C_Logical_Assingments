#include<stdio.h>

int main() {

// Question 1
// Incrementing a variable using the pre-increment operator
int a = 5;
int b = ++a;
printf(a); // What is the value of 'a'?
printf(b); // What is the value of 'b'?

// Question 2
// Incrementing a variable using the post-increment operator
int a = 5;
int b = a++;
printf(a); // What is the value of 'a'?
printf(b); // What is the value of 'b'?

// Question 3
// Decrementing a variable using the pre-decrement operator
int a = 5;
int b = --a;
printf(a); // What is the value of 'a'?
printf(b); // What is the value of 'b'?

// Question 4
// Decrementing a variable using the post-decrement operator
int a = 5;
int b = a--;
printf(a); // What is the value of 'a'?
printf(b); // What is the value of 'b'?

// Question 5
// Combining pre-increment and post-increment operators
int a = 5;
int b = ++a + a++;
printf(a); // What is the value of 'a'?
printf(b); // What is the value of 'b'?

// Question 6
// Combining pre-decrement and post-decrement operators
int a = 5;
int b = --a + a--;
printf(a); // What is the value of 'a'?
printf(b); // What is the value of 'b'?

// Question 7
// Complex increment operations
int a = 5;
a = a++ + ++a;
printf(a); // What is the value of 'a'?

// Question 8
// Combining increments and arithmetic operations
int a = 5;
int b = 3;
int c = a++ + ++b + b++ + ++a;
printf(a); // What is the value of 'a'?
printf(b); // What is the value of 'b'?
printf(c); // What is the value of 'c'?

// Question 9
// Nested increment operations
int a = 1;
int b = 2;
int c = a++ + (++a * ++b);
printf(a); // What is the value of 'a'?
printf(b); // What is the value of 'b'?
printf(c); // What is the value of 'c'?

// Question 10
// Multiple pre-increments
int a = 1;
int b = ++a + ++a + ++a;
printf(a); // What is the value of 'a'?
printf(b); // What is the value of 'b'?

// Question 11
// Multiple post-increments
int a = 1;
int b = a++ + a++ + a++;
printf(a); // What is the value of 'a'?
printf(b); // What is the value of 'b'?

// Question 12
// Combining pre-decrement and pre-increment
int a = 5;
int b = 3;
int c = --a + ++b + a + b;
printf(a); // What is the value of 'a'?
printf(b); // What is the value of 'b'?
printf(c); // What is the value of 'c'?

// Question 13
// Complex decrement operations
int a = 5;
a = a-- - --a;
printf(a); // What is the value of 'a'?

// Question 14
// Increment with logical operators
int a = 1;
int b = 1;
if (++a == 2 && b++ == 1) {
    a++;
}
printf(a); // What is the value of 'a'?
printf(b); // What is the value of 'b'?

// Question 15
// Nested increments and decrements
int a = 5;
int b = 3;
int c = 0;

if (++a > b++) {
    c = a-- + b++;
} else {
    c = ++a - --b;
}

printf(a); // What is the value of 'a'?
printf(b); // What is the value of 'b'?
printf(c); // What is the value of 'c'?

// Question 16
// Increment and decrement in a nested if-else
int a = 5;
int b = 3;
int c = 0;

if (++a > 6) {
    if (--b > 2) {
        c = a++ + --b;
    } else {
        c = --a - ++b;
    }
} else {
    c = a-- + ++b;
}

printf(a); // What is the value of 'a'?
printf(b); // What is the value of 'b'?
printf(c); // What is the value of 'c'?

// // Question 17 
// Multiple pre-increments in nested conditionals
int a = 5;
int b = 3;
int c = 0;

if (++a > 6) {
    if (--b > 2) {
        c = a-- + --b;
    } else {
        c = --a - ++b;
    }
} else {
    c = a++ + ++b;
}

printf(a); // What is the value of 'a'?
printf(b); // What is the value of 'b'?
printf(c); // What is the value of 'c'?

// Question 18 
// Pre-increment and post-decrement in conditional statements
int a = 5;
if (++a > 5 && a-- < 7) {
    a++;
}
printf(a); // What is the value of 'a'?

return 0;
}