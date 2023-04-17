/* Totals how much money will be spent on holiday gifts*/

#include <stdio.h>
int main () {
  
  float gift1, gift2, gift3, gift4, gift5; /* Variables to hold the costs */
  float total; /* Variable to hold the total amount*/

  /* Asks for the gift amount*/
  printf("How much money do you want to spend on mum?");
  scanf(" %f", &gift1);
  printf("How much money do you want to spend on your dad?");
  scanf(" %f", &gift2);
  printf("How much money do you want to spend on your sister?");
  scanf(" %f", &gift3);
  printf("How much money do you want to spend on your brother?");
  scanf(" %f", &gift4);
  printf("Hw much money do you want to spend on your favourite programming Author?");
  scanf(" %f", &gift5);

  // Calculate the total amount spent
  total=gift1+gift2+gift3+gift4+gift5;

  // Print the total amount
  printf("The total you will spend on gifts is $%.2f", total);
  
  return 0;
}