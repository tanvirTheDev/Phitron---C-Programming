- Explain why we need long long int data type?
  Answer : We know that in C programming language int sotore data size 4 bytes. it can store 10^9 data. If we want to calcuate more number of data so we need to use long long int data type. It can store 10^18 data. So we need to use long long data type.

- Write all the rules for naming a variable in C programming.
  Answer : 1. start with a letter or underscore, not a number

2. can contain letters, digits, underscore, but not a space
3. cannot be a keyword in C programming language

- Write a C program that will take 2 numbers from the user and then print the 2nd number first and then first number.
  Answer :

#include <stdio.h>

int main()
{
int a, b;
printf("Enter first number: ");
scanf("%d", &a);
printf("Enter second number: ");
scanf("%d", &b);
printf("Second number is: %d\n", b);
printf("First number is: %d\n", a);
return 0;
}
