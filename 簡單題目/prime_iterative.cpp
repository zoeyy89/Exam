#include <iostream> 
using namespace std; 

int Prime(int n)
{
	if (n == 1)
	    return false;
	else if (n == 2)
	    return true;
	else 
	{
		for (int i = 2; i < (n/2); i++)
		{
			if ((n % i) == 0)
			    return false;
			else 
			    return true;
		}
	}
}
int main() { 
    int n = 100;
    int m = 13;
    cout << Prime(n) << endl;
    cout << Prime(m) << endl;
    return 0; 
}