/*Exercise 2 - Selection

Write a program to calculate the amount to be paid for a rented vehicle.

•	Input the distance the van has travelled
•	The first 30 km is at a rate of 50/= per km.
•	The remaining distance is calculated at the rate of 40/= per km.


e.g.

Distance -> 20
Amount = 20 x 50 = 1000


Distance -> 50
Amount = 30 x 50 + (50-30) x 40 = 2300*/

#include <stdio.h>

int main() {
  float amount,D;
  
  printf("Input the distance : \n");
  scanf("%f",&D);
  
  if(D<=30 && D>0){
    amount = (float) D*50;
  }
  else if(dis>30){
    amount = (float)(30*50) + ((D-30)*40);
  }
  
   printf("The overall amount :%.2f\n",amount);
  return 0;
}
