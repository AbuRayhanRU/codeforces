#include<iostream>
#include<stdio.h>
int main()
{
 using namespace std;
	long long int n1,n2,k=1,i,c;
	cin>>n1;
	cin>>n2;
	if(n1>n2)
        c=n2;
    else
        c=n1;
    for(i=1;i<=c;i++)
        k=k*i;
   cout<<k;
	return 0;
}
