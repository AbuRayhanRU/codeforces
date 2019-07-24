#include<stdio.h>
int main()
{
    int n,c=0,i,cp=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        int o,in;
        scanf("%d%d",&o,&in);
        cp=cp-o;
        cp=cp+in;
        if(cp>c)
        {
            c=c+cp;
            cp=c-cp;
            c=c-cp;
            cp=c;
        }

    }
   printf("%d",c);
   return 0;
}
