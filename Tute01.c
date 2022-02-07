/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
  int m1,m2;
  float avg;
   
   printf("Enter the mark 1 : ");
   scanf("%d",&m1);
   
   printf("Enter the mark 2 : ");
   scanf("%d",&m2);
   
   avg = (m1 + m2)/2;
   
   printf("The average of the two marks are : %f\n",avg);
   printf("/n");
   
  return 0;
}

