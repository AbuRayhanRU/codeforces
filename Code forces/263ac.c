
#include<stdio.h>
int main()
{
    int a[5][5],i,j,r,c;
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
     for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            if(a[i][j]==1)
            {
                c=i;
                r=j;
                break;
            }


        }
    }
    if(c<=2)
        c=2-c;
    else
        c=c-2;
     if(r<=2)
        r=2-r;
    else
        r=r-2;

    printf("%d",c+r);
    return 0;
}
