#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],i,s=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        s=s+a[i];
    }
    if(s%4==0)
    {
       s=s/4;
    }

    else
       {
         s=(s/4)+1;
       }
printf("%d",s);
    return 0;
}
