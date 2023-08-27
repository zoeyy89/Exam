#include <iostream>
#include <cstdlib> 
using namespace std;

class Node
{
    public:
		int data;
		Node* link; //ADT抽象化概念，*是pointer
};

void insert(Node* x, Node* y) //y指向的Node會插入在x指向的Node之後(x -> y)
{
	//想把c插入在a之後
	y -> link = x ->link;
	x -> link = y;
}

void Delete(Node *x, Node * y)
{
	x -> link = y -> link ;
	delete y;
}

void printList(Node* head)
{
    Node* current = head;
    while (current != nullptr)
    {
        cout << current -> data << " ";
        current = current -> link;
    }
    cout << endl;
}


int main()
{
	Node *a = new Node(); // 建一個新節點，pointer a 指向此節點
	Node *b = new Node();
	a -> data = 5; //Node a的data欄位裝5
	a -> link = b; //Node a 的 link 指向Node b //*b指向誰，a->link就指向誰
	//所以有兩個東西指向Node b, 一個是Node a 的link, 一個是*b 
	b -> data = 10;
	b -> link = nullptr;
	
	//=================================================
	Node *c = new Node();
	c -> data = 45;
	Node *d = new Node();
	d -> data = 20;
	Node *e = new Node();
	e -> data = 30;
	insert(a, c);
	insert(c, d);
	insert(a, e);
	
	//=================================================
	Delete(d, b);
	printList(a);
	//5 30 45 20
	
	return 0;
}