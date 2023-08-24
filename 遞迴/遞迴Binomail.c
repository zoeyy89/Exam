#include <stdio.h>

int Bin(int N, int M)
{
	if ((M == 0) || (N == M))
	{
		return 1;
	}
	else
	{
		return Bin(N - 1, M) + Bin(N - 1, M - 1);
	}
}
int main()
{
	int n = 5, m = 2;
	//scanf("%d %d", &n, &m);
	printf("%d", Bin(n, m));
	return 0;
}
//呼叫19次含本身
