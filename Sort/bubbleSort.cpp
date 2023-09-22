//bubble sort
//兩兩相比，最大的被推到最後面
#include <iostream>
using namespace std;

void bubbleSort(int* data, int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        bool flag = false; //預設沒有交換
		//for (int j = 0; j < size - 1; j++)//錯誤!要小心
	    for (int j = 0; j < size - i - 1; j++)//所以下一輪排序時，不需再比最後一個
		{
			if (data[j] > data[j+1])
			{
			    swap (data[j], data[j+1]);
			    flag = true;
			}
		}
		if (flag == false)//若過程都沒換，表示排好了
			break;
    }		
}
int main()
{
    int data[5] = {26, 5, 33, 17, 2};
	int size = sizeof(data)/sizeof(data[0]);
	bubbleSort(data, size);
	cout << "排序結果: " ;
	for (int i = 0; i < size; i++)
		cout << data[i] << " ";
    return 0;	
}

