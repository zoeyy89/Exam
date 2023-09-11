//找x的中序前者
#include <iostream>
using namespace std;

class Node
{
    public:
        // L_Thread    Lchild   data    Rchild    R_Thread
		int data;
		Node * Lchild;
		Node * Rchild;
		bool L_Thread;
		bool R_Thread;
};

Node* Insuc(Node *x)
{
	//true:thread false:link
    Node *tmp = x -> Lchild; //預設tmp指向Lchild 
    if (x -> L_Thread == false) //有左兒子
    {
    	while (tmp -> R_Thread == false) //有右兒子
    	{
    		tmp = tmp -> Rchild;//tmp一直往下走，找右兒子
    	}
    }
    return tmp; //預設tmp指向Lchild
}

int main() {

	return 0;
}