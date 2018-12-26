
#include<iostream> 
using namespace std;
int fib(int n)
{
	/* Declare an array to store Fibonacci numbers. */
	int f[n + 2]; // 1 extra to handle case, n = 0 
	int i;

	/* 0th and 1st number of the series are 0 and 1*/
	f[0] = 0;
	f[1] = 1;

	for (i = 2; i <= n; i++)
	{
		/* Add the previous 2 numbers in the series
			and store it */
		f[i] = (f[i - 1] + f[i - 2])%10;
	}

	return f[n];
}

int main()
{

	unsigned long long n;
	unsigned long long a;
	unsigned long long b;
	cin>>n;
	a=(fib(n));
	cout<<a;
	return 0;
	
}


