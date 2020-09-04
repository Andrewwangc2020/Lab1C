// Author: Andrew Wang aqw5628@psu.edu
// Collaborator: Eric Beardslee eab6024@psu.edu
// Collaborator: Ajith Obili ako5278@psu.edu
// Coolaborator: Casey DiCampli crd5553@psu.edu

#include <stdio.h>
#include <readline/readline.h>
#include<stdlib.h>

int main(void) {
  char *tempC = readline("Enter temperature in celsius: ");
  double temp = atof(tempC);
  double tempF = temp*9/5+32;
  printf("%f° in Celsius is equivalent to %f° Fahrenheit.\n",temp,tempF);
  return 0;
}