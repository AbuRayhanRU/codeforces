#include<stdio.h>
#include<string.h>
int main()
{
    int n;
    scanf("%d",&n);
    char a[n][30];
   int i,c1=0,c2=0;
    for(i=0;i<n;i++)
    {
        scanf("%s",a[i]);
        if(strcmp(a[i],a[0])==0)
            c1++;
        else
            c2++;

    }

    if(n==1)
        printf("%s",a[0]);
   else
    {
         if(c1>c2)
    {
        printf("%s",a[0]);
    }

    else
        for(i=1;i<n;i++)
    {

        if(strcmp(a[i],a[0])!=0)
        {
        printf("%s",a[i]);
                     break;

        }

    }

    }






}
