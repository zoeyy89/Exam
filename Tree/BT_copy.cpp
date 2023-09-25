// copy BT
#include <iostream>
using namespace std;

class Node
{
    public:
		int data;
		Node* Lchild;
		Node* Rchild;
};

Node* Copy(Node* old)
{
	Node* t = new Node(); //新建節點t
	if (old != nullptr)
	{
		t -> data = old -> data;
		t -> Lchild = Copy(old -> Lchild);
		t -> Rchild = Copy(old -> Rchild);
	}
	else //old是空的
	    t = nullptr;
		
	return t;
}

int main()
{
	//提示: 需要用到遞迴複製
	Node* old = new Node();
	Node* b = new Node();
	old -> data = 3;
	old -> Lchild = b;
	old -> Rchild = nullptr;
	b -> data = 7;
	b -> Lchild = nullptr;
	b -> Rchild = nullptr;

	Node* new_node = new Node();
	new_node = Copy(old);
	
	cout << "new_node's data:" << new_node -> data << " " ;
	if (new_node->Lchild)
    {
        cout << " L: " << new_node -> Lchild -> data << " ";
    }
    else
    {
        cout << " L: Null";
    }

    if (new_node -> Rchild)
    {
        cout << " R: " << new_node -> Rchild -> data;
    }
    else
    {
        cout << " R: Null";
    }

	return 0;
}
