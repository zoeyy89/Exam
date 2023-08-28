//circular linked list  長度計算
#include <iostream>
#include <cstdlib> 
using namespace std;

class Node
{
    public:
		int data;
		Node* link; //ADT抽象化概念，*是pointer
};

int CLength(Node * c)
{
	int count = 0;
	Node *a = c;
	if (c != nullptr)
	{
	    do{
	    //cout << a->data << endl; 每個節點內容
	    a = a -> link;
		count = count + 1;	
		} while (a != c); //a = c回到初始點
	}
	return count;
}

int main()
{
	Node *a = new Node(); // 建一個新節點，pointer a 指向此節點
	Node *b = new Node();
	Node *d = new Node();
	Node *f = new Node();
	a -> data = 5; //Node a的data欄位裝5
	a -> link = b; //Node a 的 link 指向Node b //*b指向誰，a->link就指向誰
	//所以有兩個東西指向Node b, 一個是Node a 的link, 一個是*b 
	b -> data = 10;
	b -> link = d;
	d -> data = 100;
	d -> link = f;
	f -> data = 1000;
	f -> link = a;//注意是環狀所以需要接回開始位子
	
	cout << CLength(a) << endl;
	
	return 0;
}