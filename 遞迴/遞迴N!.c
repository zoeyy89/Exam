#include <stdio.h>

int main()
{
	int num;
	scanf("%d", &num); //input int = 3
	printf("%d", F(num));
	return 0;
}

int F(int N) {
	{
		//pass1 F(3)
		//pass2 3 * F(2)
		//pass3 3 * 2 * F(1)
		//pass4 3 * 2 * 1 * F(0)
		//共呼叫4次(含F(3)本身)
		if (N == 0)
		{
			return 1;
		}
		else
		{
			return N*F(N-1);
		}
	}
}
