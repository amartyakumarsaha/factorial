#include<stdio.h>
int fact();
int main()
{
	int n;
	scanf("%d",&n);
	printf("%d",fact(n));
}
int fact(int n)
{
	if(n==0)	// Because 0!=1 . 
	{
		return 1;
	}
	else
	{
		return n*fact(n-1) ;  // Recursion has used 
	}
}
