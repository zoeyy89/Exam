#include <iostream>
#include <cstdlib>  //引入標準庫中的函數

using namespace std;

int top = -1;//初始化
int n; //stack大小
int *stack;
int item;

void create(int size) {
    n = size;
    top = -1;
    stack = new int[n];  //使用 new 來分配記憶體
    cout << "目前stack的size:" << n << endl << endl;
}

bool isEmpty()
{
	return top == -1;
}

bool isFull()
{
	return top == n - 1;
}

bool push(int item)
{
	if (isFull())
	{
		cout << "isFull, " <<  item << " cannot push" << endl;
	    return false;
	}
	else
	{
		cout << "目前的top:" << top << endl;
	    top = top + 1;
	    stack[top] = item;
	    cout << "push後，目前的stack[top]:" << stack[top]  << endl;
	    return true;
	}
}
bool pop(int item)
{
	if (isEmpty())
	    return false;
	else
	{
		cout << "pop前的top:" << top << endl;
		cout << "stack[top]:" << stack[top] << endl;
		item = stack[top];
	    top = top - 1;
	    
	    cout << "pop後的top:" << top << endl;
	    cout << "pop出來的item:" << item << endl;
	    for (int i = top; i >= -1; i--)
	        cout << "印出stack內容: " << stack[i] << " " << endl;
	    return true;
	    
	}
}

int main() {
    create(5);
    isEmpty();
    isFull();
    push(10);
    push(20);
    push(30);
    push(40);
    push(50);
    push(60);
    pop(0);
    return 0;

}
