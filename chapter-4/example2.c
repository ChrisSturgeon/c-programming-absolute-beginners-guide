#include <stdio.h>

int main() {
  /* These three lines how you to use the most popular Escape Sequences*/
  printf("Column A\tColumn B\tColumn C\n");
  printf("\n My Computer\'s Beep Sounds like This: \a!\n");
  printf("\"Letz\bs fix that typo and then show the backslash ");
  printf("character \\\" she said\n");

  // Conversion Strings
  printf("%d roses cost %.2f per %d\n", 24, 19.95, 12);

  printf("%s %d %f %c\n", "Sam", 14, -8.76, 'X');

  return 0;
}