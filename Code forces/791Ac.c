#include<stdio.h>
int main()
{
    int a,b,i,c=0;
    scanf("%d%d",&a,&b);
    for(i=1;i>0;i++)
    {printf("\a");
        a=a*3;
        b=b*2;
        c++;
        if(a>b)
            break;
    }
    printf("%d",c);
}
