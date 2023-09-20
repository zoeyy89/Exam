//Binary search(recursive)
//O(n)
//找中間切下去
#include <iostream>
#include <algorithm>

using namespace std;
int bs(int F[], int k, int l, int u) //F為array, k為欲找值//最左下限l, 最右上限u
{
	if (l <= u)
	{
		int mid = (l + u)/2;
	    if (F[mid] == k)
			return mid;
		else if (F[mid] > k) //k比中央點小
			return bs(F, k, l, mid - 1); //upper變成mid-1
		else //k比中央點大
			return bs(F, k , mid + 1, u); //lower變成mid+1
	}
	else
		return -1; // not found
}
int main() {
    int array1[5] = {40, 10, 100, 30, 80};
	int size = sizeof(array1)/sizeof(array1[0]);	
	//sort (first, last) 	對[first, last)範圍內的元素排序
	sort(array1, array1 + size);
    cout << bs(array1, 30, 0, size);
	return 0;
}