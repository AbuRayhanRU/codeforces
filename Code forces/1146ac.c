#include<stdio.h>
#include<string.h>
int main()
{
    char a[50];
    gets(a);
    int i,c=0,n=strlen(a);
    for(i=0;i<n;i++)
    {
        if(a[i]=='a')
            c++;

    }
    if(c>n/2)
    printf("%d",n);
    else
        printf("%d",c+c-1);
    return 0;
}
