/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
  int num1,num2;
  float average;

  printf("Enter number 1:");
  scanf("%d",&num1);
  printf("Enter number 2:");
  scanf("%d",&num2);
  
  average = (num1 + num2)/2.0;
  printf("The Average : %.2f",average);

  return 0;
}

