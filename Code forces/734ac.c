#include<stdio.h>
int main()
{
    int n,i,d=0,a=0;
    scanf("%d",&n);
    char g[n];
    scanf("%s",g);
    for(i=0;i<n;i++)
    {
        if(g[i]=='A')
            a++;
        else
            d++;
    }
    if(a>d)
        printf("Anton");
    else if(d>a)
        printf("Danik");
    else
        printf("Friendship");
    return 0;
}
