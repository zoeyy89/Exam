//BT count_root_leaf_nodes
#include <iostream>
using namespace std;

class Node
{
	public:
        Node* Lchild;
        int data;
        Node* Rchild;	
};

int CountLeaf(Node* T)
{
    if (T == nullptr)
        return 0;
    else if (T -> Lchild == nullptr && T -> Rchild == nullptr)
        return 1; // 葉節點
    else
    {
        int NodeL = CountLeaf(T -> Lchild); // 遞迴左子樹
        int NodeR = CountLeaf(T -> Rchild); // 遞迴右子樹
        return NodeL + NodeR;
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
	cout << CountLeaf(a) << endl;
	
	return 0;
}