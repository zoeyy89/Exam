#include <stdio.h>

int main() {
	int n;
	int count = 0;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++)
	{
		count = count + i;
	}
	printf("%d", count);
	return 0;
}
