#include<stdio.h>
int main()
{
    int n,i,c=0,b=0,b1=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);

    }
    for(i=0;i<n;i=i+3)
    {
        c=c+a[i];
        if(i+1<n)
        b=b+a[i+1];
        if(i+2<n)
        b1=b1+a[i+2];
    }
    if(c>b&&c>b1)
        printf("chest");
    else if(b>b1)
               printf("biceps");
    else
 printf("back");
    return 0;


}
