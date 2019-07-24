#include<stdio.h>
int main()
{
    int n,a1=1,a2=1,t,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(i==a2)
        {
            printf("O");
            t=a2;
            a2=a2+a1;
            a1=t;
        }

        else
            printf("o");
    }
}
