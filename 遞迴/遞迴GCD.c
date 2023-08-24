#include <stdio.h>

int GCD(int A, int B)
{
	if (A % B == 0)
	{
		return B;
	}
	else
	{
		return GCD(B, A % B);
	}
}
int main()
{
	int A, B;
	scanf("%d %d", &A, &B); //A = 9, B = 6;
	printf("%d", GCD(A, B));
	return 0;
}
