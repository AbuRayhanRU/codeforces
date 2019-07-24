#include<stdio.h>
int main()
{
    int n,a,b,i,c=0;
    scanf("%d%d%d",&n,&a,&b);
    for(i=1;i<=n;i++)
    {
        if(i>a&&(n-i)<=b)
       // printf("%dg\n",i);
            c=c+1;
    }
    printf("%d",c);
    return 0;
}
