#include<stdio.h>
#include<string.h>
int main()
{
    char a[100];
    gets(a);
    strlwr(a);
    a[0]=a[0]-32;
    puts(a);
    return 0;
}
