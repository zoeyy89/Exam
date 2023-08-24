#include <stdio.h>
 
int main()
{
    int num;
    scanf("%d", &num); //input int = 3
    printf("%d", Fib(num));
    return 0;
}
 
int Fib(int N) {
    {
        //pass1 Fib(3)
        //pass2 Fib(2) + F(1)
        //pass3 Fib(1) + F(0) + F(1)
        if (N == 0)
        {
            return 0;
        }
        else if(N == 1)
        {
            return 1;
        }
        else
        {
            return Fib(N-1) + Fib(N-2);
        }
    }
}
 


