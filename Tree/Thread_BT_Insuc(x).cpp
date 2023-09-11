//找x的中序後繼者
//當right thread 為false，將temp一直找到最後一個左兒子，此node就是x的後繼者
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
    Node *tmp = x -> Rchild; //預設tmp指向Rchild 
    if (x -> R_Thread == false) //沒有右邊的引線 //有右兒子
    {
    	while (tmp -> L_Thread == false) //不停找此時的tmp的左引線是不是false //有左兒子
    	{
    		tmp = tmp -> Lchild;//tmp一直往下走 //有左兒子
    	}
    }
    return tmp;
}

int main() {

	return 0;
}