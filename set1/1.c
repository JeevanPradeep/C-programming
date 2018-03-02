#include<stdio.h>

int main() {
 int n;
 scanf("%d",&n);
 if(n>0)
 {
     printf("POSITIVE");
 }
 else if(n<0)
 {
     printf("NEGATIVE");
 }
 else if(n==0)
 {
     printf("ZERO");
 }
}
