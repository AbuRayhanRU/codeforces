#include<stdio.h>
int main()
{
    int n,m,c;
    scanf("%d%d",&n,&m);
   while(n!=0&&m!=0)
   {
       n=n-1;
       m=m-1;
       c++;
   }
   if(c%2==0)
   printf("Malvika");
   else
    printf("Akshat");
}
