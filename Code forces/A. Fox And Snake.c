#include<stdio.h>
int main()
{
    int n,m,i,j;
    scanf("%d%d",&n,&m);
    for(i=0;i<n;i++)
    {
        if((i+1)%2!=0)
            for(j=0;j<m;j++)
        {
            printf("#");
        }
        else if((i+1)%2==0&&(i+1)%4!=0)
        {
            for(j=1;j<m;j++)
            {
                printf(".");
            }
            printf("#");
        }
        else if((i+1)%2==0&&(i+1)%4==0)
        {
            printf("#");
            for(j=1;j<m;j++)
            {
                printf(".");
            }
        }
        printf("\n");
    }
}
