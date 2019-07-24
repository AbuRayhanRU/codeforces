#include<stdio.h>
int main()
{
    int i,c=0;
    char a[2],b[5][2];
    gets(a);
    for(i=0;i<5;i++)
    {
        scanf("%s",b[i]);
        if(a[0]==b[i][0]||a[1]==b[i][1])
            c++;
    }
    if(c>0)
    printf("YES");
    else
        printf("NO");
}
