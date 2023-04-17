// This programme pairs three kids with their favourite superhero

#include <stdio.h>
#include <string.h>

int main() {
    // Kid 1 can hold an 11-character name
  char Kid1[12];

  // Kid 2 will be 7 characters (Maddie plus null 0)
  char Kid2[] = "Maddie";

  // Kid 3 also 7 characters but specifically defined
  char Kid3[7] = "Andrew";
  
  // Hero1 will be 7 characters (adding null 0)
  char Hero1[] = "Batman";

  // Hero2 will have extra room just incase
  char Hero2[34] = "Spiderman";
  char Hero3[25];

  // Define Kid1 character-by-character just for practice
  // Make sure to remember the null 0 so that C knows where the string ends
  Kid1[0] = 'K';
  Kid1[1] = 'a';
  Kid1[2] = 't';
  Kid1[3] = 'i';
  Kid1[4] = 'e';
  Kid1[5] = '\0';

  // Use string copy to assign a string to Hero3 variable
  strcpy(Hero3, "The Incredible Hulk");

  // Print the results
  printf("%s\'s favourite hero is %s.\n", Kid1, Hero1);
  printf("%s\'s favourite hero is %s.\n", Kid2, Hero2);
  printf("%s\'s favourite hero is %s.\n", Kid3, Hero3);

  return 0;
}