//BT height
#include <iostream>
using namespace std;

class Node
{
	public:
        Node* Lchild;
        int data;
        Node* Rchild;	
};

int CountNode(Node * T)
{
    if (T == nullptr)
	    return 0;
	else
	{
	    int NodeL = CountNode(T -> Lchild); 
        int NodeR = CountNode(T -> Rchild);
		return max(NodeL , NodeR) + 1;
	}
}	

int main()
{
    Node* a = new Node();
    Node* b = new Node();
    Node* c = new Node();
    Node* d = new Node();
	a -> data = 10;
	a -> Lchild = b;
	a -> Rchild = c;
	b -> data = 30;
	b -> Lchild = d;
	b -> Rchild = nullptr;
	c -> data = 60;
	c -> Lchild = nullptr;
	c -> Rchild = nullptr;
	d -> data = 90;
	d -> Lchild = nullptr;
	d -> Rchild = nullptr;
	cout << CountNode(a) << endl;
}