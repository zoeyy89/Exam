//non sential
//O(n)
#include <iostream>
using namespace std;
int nonSential(int F[], int n, int k) //F是array, n是array size, k是尋找的值
{
	int i = 1;
	while (i <= n)
	{
		if (F[i] == k)
		    return i;
		else
		    i = i + 1;
	}
	return -1; //not found
}
int main() {
	int array1[5] = {20, 40, 60, 80, 100};
	cout << nonSential(array1, sizeof(array1), 100) << endl;
	cout << nonSential(array1, sizeof(array1), 19) << endl;
	return 0;
}