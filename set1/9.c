#include<stdio.h>

int main()
{
 int n1,n2,sum=0,a[100];
 scanf("%d",&n1); 
 scanf("%d",&n2);
 for(int i=0;i<=n1;i++)
 {
     scanf("%d",&a[i]);
 }
 for(int i=0;i<n2;i++)
 {
     sum=sum+a[i];
 }
printf("%d",sum);
}
