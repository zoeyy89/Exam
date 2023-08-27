#include <iostream>
#include <cstdlib> 
using namespace std;

class Node
{
    public:
		int data;
		Node* link; //ADT抽象化概念，*是pointer
};

int main()
{
	Node *a = new Node(); // 建一個新節點，pointer a 指向此節點
	Node *b = new Node();
	a -> data = 5; //Node a的data欄位裝5
	a -> link = b; //Node a 的 link 指向Node b //*b指向誰，a->link就指向誰
	//所以有兩個東西指向Node b, 一個是Node a 的link, 一個是*b 
	b -> data = 10;
	b -> link = nullptr;
	
	return 0;
}