#include <stdio.h>

int Ack(int m, int n) 
{
    if (m == 0)
    {
        return n + 1;
    }
    else if (n == 0)
    {
        return Ack(m - 1, 1);
    }
    else
    {
        return Ack(m - 1, Ack(m, n - 1));
    }
}

int main()
{
    //帶入A(2, 1) = 5
    //帶入A(1, 2) = 4
    int m = 2, n = 1;
    int x = 1, y = 2;
    printf("%d %d", Ack(m, n), Ack(x, y));
    return 0;
}
