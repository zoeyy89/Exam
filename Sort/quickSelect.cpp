//quick select problem

#include <iostream>
using namespace std;

int partition(int* data, int l, int r)
{
    int x = data[r];
    int i = l - 1;
    for (int j = l; j <= r - 1; j++)
	{
	    if (data[j] <= x)
        {
            i = i + 1;
			swap (data[i], data[j]);
        }			
	}
	swap (data[i + 1], data[r]);
	return (i + 1);
}
int Select(int* data, int l, int r, int i)
{
    if (l < r)
	{
        int q = partition(data, l, r);
        int k = q - l + 1;
        if (i == k)
            return data[q];
        else if (i < k)
            return Select(data, l, q - 1, i);
        else
            return Select(data, q + 1, r, i - k); //小心，不用從頭找			
	}
}
int main()
{
	int data[] = {26, 5, 37, 1, 61, 11, 59, 15, 48, 19};
	int l = 0; // 初始化l和r
    int r = sizeof(data) / sizeof(data[0]) - 1; // 初始化l和r
	int i = 4;
	cout << "第" << i << "小: " << Select(data, l, r, i); 
	return 0;
}