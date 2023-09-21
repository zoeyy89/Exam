//selection sort
//從i-n算data中，挑出最小值，與第i筆swap
//反覆做(n - 1)回合

#include <iostream>
using namespace std;

void selectionSort(int* data, int size)
{
    for(int i = 0; i < size - 1; i++)
	{
        int min = i; //預設i是最小值
        //for (int j = i + 1; j < size - 1; j++) 錯誤
        for (int j = i + 1; j < size; j++) 
		{
			if (data[j] < data[i])  //一旦發現j < min, min = j
				min = j;
		}
		if (i != min) 
		    swap(data[i], data[min]);
	}
}
int main()
{
	int data[5] = {23, 5, 26, 77, 13};
	int size = sizeof(data)/sizeof(data[0]);
	selectionSort(data, size);
	cout << "排序順序: " ;
	for (int i = 0; i < size; i++)
	{
	cout << data[i] << " " ;	
	}
    return 0;	
}