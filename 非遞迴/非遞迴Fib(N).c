#include <stdio.h>

int Fib(int N);
int main()
{
    int num;
    
    scanf("%d", &num); //input int = 3
    printf("%d", Fib(num));
    return 0;
}
 
int Fib(int N)
{
    if (N == 0)
        return 0;
    else if(N == 1)
        return 1;
    else
    {
		int c;
		int a = 0;
		int b = 1;
    	for (int i = 2; i <= N; i++)
    	{
        	c = a + b;
        	a = b;
        	b = c;
    	}
    	return c;   	
  	}
}
 
