#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n-1],b1,b2;
    int i;
    for(i=0;i<n-1;i++)
    {
        scanf("%d",&a[i]);
    }

        scanf("%d%d",&b1,&b2);

    int s=0;
    for(i=b1-1;i<b2-1;i++)
    {
        s=s+a[i];
    }
    printf("%d",s);
    return 0;
}
