#include<stdio.h>

int main() {
 char n;
 scanf("%c",&n);
 if(((n>='A')&&(n<='Z'))||((n>='a')&&(n<='z')))
 {
     printf("Alphabet");
 }
 else 
 {
     printf("No");
 }

}
