#include <iostream>
using namespace std;

int Fib(int n)
{
    if (n == 0)
        return 0;
    else if(n == 1)
        return 1;
    else
    {
		int a = 0, b = 1;
		int c;
    	for (int i = 2; i <= n; i++)
    	{
        	c = a + b;
        	a = b;
        	b = c;
    	}
    	return c;   	
  	}
}

int main()
{
	cout << "F[5]:" << Fib(5) << endl;
	cout << "F[8]:" << Fib(8) << endl;
}
