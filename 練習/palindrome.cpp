#include <iostream>
#include <cstdlib> 
using namespace std;

// 5 4 3 2 1 1 2 3 4 5 
//思考：
//一個從前向後、一個從後向前
char data[10] = { 5, 4, 3, 2, 1, 1, 2, 3, 4, 5};
int n = (sizeof(data) / sizeof(char));
char* stack;

bool palindrome(char *d, int n)
{
	if ( n % 2 != 0)
	{
		return false;
	}
	else
	{
        for (int i = 0; i <= (n/2) ; i ++)
		{
			if (data[i] != data[n - i - 1]
				return false;
		}
		return true;
	}		
}

int main()
{
	palindrome(data, n);
	if (palindrome(data, n) == false)
		cout << "f" << endl;
	else if (palindrome(data, n) == true)
	    cout << "t" << endl;
    return 0;
}