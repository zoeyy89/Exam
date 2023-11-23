#include <iostream>
#include <cmath>
using namespace std;

//NCHU110
//寫出一個名稱為「primeNumber」的function
//此function的輸入為一個正整數，輸出（return)該正整数的所有質因數。


void primeNumber(int n)
{
    if ( n == 1)
        cout << "1 不是質因數";
    else if (n < 1)
	       cout << "非1正整數才有質因數";
	   else 
   	{
        for (int i = 2; i <= n; i++)
        {
            if (n % i == 0)
            {
                cout << i << " ";
                while(n % i == 0)
			                 n = n / i;
            }
        }
   	}
}


int main() 
{
    int n = 45;
    primeNumber(n);
    return 0;
}