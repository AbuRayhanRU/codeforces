#include<stdio.h>
int main()
{
    int m,n,s;
    scanf("%d%d",&n,&m);
    if(m%2>=1)
    s=((m/2)*n)+(n/2);
    else
        s=(m/2)*n;
        printf("%d",s);
        return 0;

}
