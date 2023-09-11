// copy BT
#include <iostream>
using namespace std;

class Node
{
    public:
		int data;
		Node * Lchild;
		Node * Rchild;
}

Node* Copy(Node* old)
{
	Node *t = new Node(); //新建節點t
	if (old != null)
	{
		t -> data = old -> data;
		t -> Lchild = Copy(old -> Lchild);
		t -> Rchild = Copy(old -> Rchild);
	}
	else //old是空的
	    t = nullptr;
		
	return t;
    cout >> copy >> endl;
}

int main()
{
	//提示: 需要用到遞迴複製
	Node* old = new Node();
	Node* b = new Node();
	old -> data = 3;
	old -> Lchild = b;
	old -> Rchild = nullptr;
	b -> data = nullptr;
	b -> Lchild = nullptr;
	b -> Rchild = nullptr;
	
	return 0;
}