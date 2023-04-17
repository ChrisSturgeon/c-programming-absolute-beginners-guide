#include <stdio.h>

int main() {
  /* Here is some more code to help you with printf(), Escape Sequences and Conversion Characters*/

  printf("Quantity\tCost\tTotal\n");
  printf("%d\t\t%.2f\t$%.2f\n", 3, 9.99, 29.97);
  printf("Too many spaces    \b\b\b\b can be fixed with the ");
  printf("\\%c Escape character \n", 'b');
  printf("%s, %c.", "You are kicking butt learning", 'C');
  printf("You just finished chapter %d.\nYou have finished ", 4);
  printf("%.1f%c of the book.\n", 12.500, '%');

  return 0;
}