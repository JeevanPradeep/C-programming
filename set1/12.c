#include<stdio.h>

int main() {
  int n,rev=0,r;
  int ref=n;
  scanf("%d",&n);
  while(n>0)
  {
      r=n%10;
      rev=rev*10+r;
      n=n/10;
  }
  if(rev<=9&&rev>=-9)
  {
      printf("yes");
  }
  else{
 if(ref==rev)
 {
     printf("yes");
 }
 else
 {
     printf("no");
 }}
}
