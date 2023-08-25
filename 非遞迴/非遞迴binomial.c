#include <stdio.h>

int Bin(int n, int m)
{
	if ((m == 0) || (n == m))
	{
		return 1;
	}
	else
	{
		//思考：例如n = 5, m = 3
		//得 5! / ((3!) *(2!))
		// a! / b!*c!
		// n! / m!*(n-m)!
		//使用loop求出每個階的做法
		int a = 1, b = 1, c = 1; 
		for (int i = 1; i <= n; i ++)
			a = a * i;
		for (int i = 1; i <= m; i++)
			b = b * i;
		for (int i = 1; i <= (n - m); i++)
			c = c * i;
		return a / (b * c);
	}
}
int main()
{
	int n = 5, m = 2;
	printf("%d", Bin(n, m));
	return 0;
}