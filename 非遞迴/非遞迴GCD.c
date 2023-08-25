#include <stdio.h>

int GCD(int a, int b)
{
    // 思考：
    // 12 9          
    // pass 1：		12		9
    // pass 2：		3		
    // pass 3：				0

    while ((a != 0)&&(b != 0))
    {
	if (a > b)
	    a = a % b;
	else
	    b = b % a;
    }
    if (a == 0)
	return b;
    else 
	return a;

}
int main()
{
    int a = 12, b = 9;
    printf("%d", GCD(a, b));
    return 0;
}
