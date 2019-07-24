
#include<stdio.h>
int main()
{

	long long int n1,n2,k=1,i,c;
	scanf("%lld%lld",&n1,&n2);
	if(n1>n2)
        c=n2;
    else
        c=n1;
    for(i=1;i<=c;i++)
        k=k*i;
    printf("%d",k);
	return 0;
}
