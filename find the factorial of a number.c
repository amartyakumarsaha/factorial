#include<stdio.h>
long long int fact();
int main()
{
	int n;
	scanf("%d",&n);
	printf("%lld",fact(n));
}
long long int fact(int n)
{
	if(n==0)
	{
		return 1;
	}
	else
	{
		return n*fact(n-1) ;  // Recursion is used 
	}
}
