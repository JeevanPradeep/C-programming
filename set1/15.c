#include<stdio.h>  
int main()
{
    int s,l;
    scanf("%d",&s);
    scanf("%d",&l);
    for(int i=s+1;i<=l-1;i++)
    {
        if(i%2==0)
        {
            printf("%d ",i);
        }
    }
}
