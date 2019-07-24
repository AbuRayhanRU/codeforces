#include<stdio.h>
int main()
{
    int n,o=0,i;
    scanf("%d",&n);
    char a[n];
    scanf("%s",a);
    for( i=0;i<n;i++)
    {
        if(a[i]==a[i+1])
            o++;
    }
    printf("%d",o);
}
