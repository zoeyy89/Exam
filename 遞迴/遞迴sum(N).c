#include <stdio.h>

int main()
{
	int num;
	scanf("%d", &num); //input int = 3
	printf("%d", sum(num));
	return 0;
}
 
int sum(int N) {
	{
		//pass1 sum(3)
		//pass2 3 + sum(2)
		//pass3 3 + 2 + sum(1)
		//pass4 3 + 2 + 1 + F(0)
		if (N == 0)
		{
			return 0;
		}
		else
		{
			return N + sum(N-1);
		}
	}
}
 

