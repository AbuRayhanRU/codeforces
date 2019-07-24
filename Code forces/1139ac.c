#include<stdio.h>
int main()
{
    int n,i,j,c=0;
    scanf("%d",&n);
    char a[n];
  scanf("%s",&a);
    for(i=0;a[i]!=0;i++)
    {
            for(j=i;a[j]!=0;j++)
            {
                if(a[j]%2==0)
                    c++;
            }

    }
    printf("%d",c);
    return 0;
}
