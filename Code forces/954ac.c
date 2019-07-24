#include<stdio.h>
#include<string.h>
int main()
{
    int n,i,c=0;
    scanf("%d",&n);
    char a[n];
    scanf("%s",a);
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]!=a[i+1])
        {
           c++;
           printf("+%d+%d,%d\n",i,i+1,c);
           i++;
        }
    }
    printf("%d",n-c);

}
