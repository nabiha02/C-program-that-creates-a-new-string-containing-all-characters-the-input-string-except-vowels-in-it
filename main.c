/*Write a C program that reads a string, create a new string containing
all the characters the input string except the vowels in it, and then
prints the new string
*/

#include <stdio.h>
#include <string.h>

int main(void){

  char str[100], output[100], ch;
  int i,vowels;

  printf("Input your string: ");
  gets(str);

  i=vowels=0;

  while((ch=str[i])!= '\0'){

     if(ch != 'a' && ch != 'e' && ch != 'i' && ch != 'o' && ch != 'u' && ch != 'A' && ch != 'E' && ch != 'I' && ch != 'O' && ch != 'U'){

     output[vowels] = ch;
     vowels++;

     }

   i++;

  }

  output[vowels] = '\0';

  printf("The output expect the vowels is : %s", output);

 return 0;
}


