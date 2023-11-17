#include <iostream>
using namespace std;

// NCHU106
// Write a program-like pseudo codes 
// using recursive call method to compute 
// the combination formula
// n! / (k!(n-k))

int Coefficient(int n, int m)
{
	if (m == 0 || n == m)
	    return 1;
	else 
	    return (Coefficient(n - 1, m) + Coefficient(n - 1, m - 1));
}
int main() {
    int n, m;
	return 0;
}