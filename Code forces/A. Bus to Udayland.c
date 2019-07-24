#include<stdio.h>
int main()
{
    int n,i,j,c=0;
    scanf("%d",&n);
     char a[n][6];
    for(i=0;i<n+1;i++)
    {
        gets(a[i]);
    }
    for(i=0;i<n+1;i++)
    {
        if(a[i][0]=='O'&&a[i][1]=='O')
        {
            printf("YES");
             a[i][0]='+';
             a[i][1]='+';
             for(j=0;j<n+1;j++)
    {
        puts(a[j]);
    }
             break;
        }
        else if(a[i][3]=='O'&&a[i][4]=='O')
            {
            printf("YES");
             a[i][3]='+';
             a[i][4]='+';
              for(j=0;j<n+1;j++)
    {
        puts(a[j]);
    }
             break;
            }
            else
            c++;

    }
    if(c==n+1)
        printf("NO");


}
