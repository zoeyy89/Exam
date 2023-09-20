//Binary search(iterative)
//O(log n)
//找中間切下去
#include <iostream>
#include <algorithm>

using namespace std;
int binarySearch(int array[], int key, int l, int u) //F為array, key為欲找值//最左下限lower, 最右上限upper
{
	while (l <= u)
	{
        int mid = (l + u)/2;
        if (array[mid] == key)
        return mid;
        else if (array[mid] > key)
	        u = mid - 1;
		else
			l = mid + 1;
	}
	return -1; // not found
}
int main() {
    int array1[5] = {40, 10, 100, 30, 80};
	int size = sizeof(array1)/sizeof(array1[0]);	
	//sort (first, last) 	對[first, last)範圍內的元素排序
	sort(array1, array1 + size);
    cout << binarySearch(array1, 30, 0, size);
	return 0;
}