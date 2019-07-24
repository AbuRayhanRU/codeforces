/*ALLAH VOROSHA*/
//Bissmillahirrahmanirrahim
//coded by coder RAYHAN
#include<stdio.h>
int main()
{
    int m,n,i,j,c=0,c1=0,c2=0;
    scanf("%d%d",&m,&n);
    for(i=m+1;i<n;i++)
    {c=0;
        for(j=1;j<=i;j++)
        {
            if(i%j==0)
                c++;
        }
        if(c<=2)
            c1++;
    }
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
            c2++;
    }
   // printf("%d",c2);
    if(c2<=2&&c1==0)
        printf("YES");
    else
        printf("NO");
}
