//quick sort

#include <iostream>
using namespace std;
void quickSort(int* data, int l, int r)
{
	if (l < r)
	{
        int i = l;
        int j = r + 1;
		int ck = data[l]; //第一筆當ck
		do
		{
		    do {i ++;} while (data[i] < ck); //i找比ck大//如果沒遇到比ck大的，繼續i++像右找
			do {j --;} while (data[j] > ck); //j找比ck小//如果沒遇到比ck小的，繼續j--向左找
			if (i < j)
				swap(data[i], data[j]);
		}
		while (i < j);
		swap(data[l], data[j]); //l 和 j 交換的本質：因為i原本在左，j在右，那i、j交錯時，也等於j快接近i原先出發的大小
		                        //因此和j換而非i
		quickSort(data, l, j - 1); //對左QS
		quickSort(data, j + 1, r); //對右QS
	}
}
int main()
{
	int data[] = {26, 5, 37, 1, 61, 11, 59, 15, 48, 19};
	int size = sizeof(data)/sizeof(data[0]);
	int l = 0;
	int r = size - 1;
	quickSort(data, l, r);
	cout << "排序結果: ";
	for (int i = 0; i < size; i++)
	    cout << data[i] << " ";
    return 0;	
}
