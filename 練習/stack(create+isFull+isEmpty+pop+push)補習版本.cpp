#include <iostream>
#include <cstdlib> 
using namespace std;

int top = -1;//初始化
int n; //stack大小
int *stack;
int item;
int x;

void create(int size) {
    n = size;
    top = -1;
    stack = new int[n];  //使用 new 來分配記憶體
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
	    return false;
	}
	else
	{
	    top = top + 1;
	    stack[top] = item;
	    return true;
	}
}

//老師說以&撰寫，意思是item為參考變數，上面有宣告int x, 那&的意義就是替x取別名
bool pop(int &item)
{
	if (isEmpty())
	    return false;
	else
	{
		item = stack[top];
	    top = top - 1;
	    return true;
	}
}

int main() {
    create(5);
    isEmpty();
	isFull();
	push(10);
	pop(x);
	return 0;
}
