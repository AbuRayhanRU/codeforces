
#include <stdio.h>
#include <string.h>

int main()
{
    int i=0,n,j,s1=0,s2=0,s3=0;
    char a[100],t;
    gets(a);
   n=strlen(a);
   for(i=0;a[i]!='\0';i++)
   {
       if(a[i]==49)
        s1++;
        else if(a[i]==50)
            s2++;
        else if(a[i]==51)
            s3++;

   }if(s1!=0)
   {
       printf("1");
   for(i=1;i<s1;i++)
   printf("+1");
    for(i=1;i<=s2;i++)
   printf("+2");
    for(i=1;i<=s3;i++)
   printf("+3");
   }
   else if(s2!=0)
   {
           printf("2");
    for(i=1;i<s2;i++)
   printf("+2");
    for(i=1;i<=s3;i++)
   printf("+3");
   }
     else if(s3!=0)
   {
           printf("3");
    for(i=1;i<s3;i++)
   printf("+3");
   }



  return 0;
}
