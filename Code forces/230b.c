#include<stdio.h>
int main()
{
    bool a[1000000];
    int i,j;
    for(i=0;i<1000000;i++)
    {
        a[i]=true;
    }
    a[1]=false;
    for(i=2;i<1000;i++)
    {
        for(j=i*i;j<1000000;j+=i)
        {
            a[j]=false;
        }
    }
    int n;
    scanf("%d",&n);
    printf("%d",a[n]);
}
