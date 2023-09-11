//BST search a node
#include <iostream>
using namespace std;

class Node
{
    public:
		int data;
		Node * Lchild;
		Node * Rchild;
};

bool Search_node(Node* T, int x)
{
	if (T == nullptr)
	    return false;
	else
	{
		if (x < T -> data)
		    return Search_node(T -> Lchild, x);
		else if (x > T -> data)
			return Search_node(T -> Rchild, x);
		else
		    return true; //x == T -> data
	}
}

int main()
{
	Node* a = new Node();
	Node* b = new Node();
	a -> data = 8;
	a -> Lchild = b;
	a -> Rchild = nullptr;
	b -> data = 3;
	b -> Lchild = nullptr;
	b -> Rchild = nullptr;
	
	cout << Search_node(a, 4) << endl;
	cout << Search_node(a, 8) << endl;
	cout << Search_node(a, 3) << endl;
	
	return 0;
}