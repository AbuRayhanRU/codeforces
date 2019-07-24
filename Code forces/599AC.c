#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if((c>=a&&c>=b)&&(c<=a+b))
    {

        printf("%d",a+b+c);

    }
    else
        {
            if(a+b<c)
                printf("%d",2*(a+b));
            else if(a+c<b)
                printf("%d",2*(a+c));
            else if(b+c<a)
                printf("%d",2*(c+b));
        }
return 0;
}
