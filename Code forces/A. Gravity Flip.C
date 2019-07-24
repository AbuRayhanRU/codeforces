#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],j,i;
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    {
        for(j=n;j>=i;j--)
        {
            if(a[i]>a[j])
            {
                a[i]=a[i]+a[j];
                a[j]=a[i]-a[j];
                a[i]=a[i]-a[j];

            }
        }
    }
    for(i=0;i<n;i++)
        printf("%d ",a[i]);
}
