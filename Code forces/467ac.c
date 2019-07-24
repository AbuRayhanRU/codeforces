#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n][2],i,c=0;
    for(i=0;i<n;i++)
    {
        scanf("%d%d",&a[i][0],&a[i][1]);
        if((a[i][1]-a[i][0])>=2)
            c++;
    }
    printf("%d",c);
    return 0;
}
