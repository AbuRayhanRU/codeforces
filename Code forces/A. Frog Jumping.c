#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        long long int x=0,a,b,k;
        scanf("%lld%lld%lld",&a,&b,&k);
        if(k%2==0)
        {
            x=(a*(k/2))-(b*(k/2));
        }
        else
        {
            x=(a*((k/2)+1))-(b*(k/2));
        }
        printf("%lld\n",x);
    }
}
