#include<stdio.h>
int main()
{
    long long int x,y,z,n,x1,y1,n1;
    scanf("%lld%lld%lld",&x,&y,&z);
    n=(x+y)/z;
    x1=x%z;
    y1=y%z;
    if(x1<=y1)
        n1=x1;
    else
        n1=y1;
    printf("%d %d",n,n1);
}
