#include<stdio.h>
int main()
{
    int n,i,x=0,j;
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        char a[10];
        gets(a);
            for(j=0;a[j]!='\0';j++)
            {
                if(a[j]=='+')
                {
                    x++;
                    break;
                }
                else if(a[j]=='-')
                {
                    x--;
                    break;
                }
            }


    }
    printf("%d",x);
}
