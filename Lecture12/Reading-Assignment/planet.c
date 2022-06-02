/* Checks planet names */
#include <stdio.h>
#include <string.h>

#define NUM_PLANETS 9

int main(int argc, char *argv[])
{
  char *planets[] = {"Mercury", "Venus", "Earth",
                     "Mars", "Jupiter", "Saturn",
                     "Uranus", "Neptune", "Pluto"};
  int i, j;

  /* visit each command- line argument in turn, comparing it with
  the strings in the planets array until it finds a match or reaches 
  the end of the array. */
  for (i = 1; i < argc; i++) {
    for (j = 0; j < NUM_PLANETS; j++)
      // srtcmp-takes two strings and return an integer.
      if (strcmp(argv[i], planets[j]) == 0) { 
        printf("%s is planet %d\n", argv[i], j + 1);
        break;
      }
    if (j == NUM_PLANETS)
      printf("%s is not a planet\n", argv[i]);
  }

  return 0;
}

