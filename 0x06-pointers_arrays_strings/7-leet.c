#include "main.h"
#include <stdio.h>

char *leet(char *string) {

int i;
char alphabets[52] = "aAeEoOtTlL";
char leet_speak[52] = "43460171";

for(i = 0; string[i] != '\0'; i++) {
	if (string[i] >= 'a' && string[i] <= 'z') {

  int j;
  for(j = 0; j <= 10; j+=2) {
    if(string[i] == alphabets[j]) {
      string[i] = leet_speak[j];
    }
  }

} else if (string[i] >= 'A' && string[i] <= 'Z') {

  int j;
  for(j = 1; j <= 10; j+=2) {
    if(string[i] == alphabets[j]) {
       string[i] = leet_speak[j];
    }
  }

}
}

return (string);

}
