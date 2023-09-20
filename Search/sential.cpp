//sential
//def. 第0格放欲找值k，由後往前找到k， 找到return index
// return 0 => not found
// return != 0 => found
//比non sential 少一個比較(要判斷有無超出尺寸大小)，但多了一個空間(空間換時間)
//O(n)
#include <iostream>
using namespace std;
int sential(int F[], int n, int k) //F是array, n是array size, k是尋找的值
{
	int i = n - 1;
	F[0] = k;
	while (i >= 0)
	{
		if (F[i] == k)
		    return i;
		else
		    i--;
	}
}
int main() {
	int array1[10] = {0, 11, 12, 13, 14, 15, 16, 17, 18, 19};
	cout << sential(array1, sizeof(array1), 17) << endl;
	cout << sential(array1, sizeof(array1), 140) << endl;
	return 0;
}