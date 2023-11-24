#include <iostream>
using namespace std;

//NCHU110
//二元樹中的一個節點位置p的平衡因子
//（balance factor是指p的左子樹奥右子樹的高度差。
//請用C、Java或Python寫出一個名稱為「balanceFactor」的function(或method)
//輸入為二元樹中的某一個節點p，輸出為 p 的平衡因子。
//請注意:若右子樹比左子樹高，平衡因子則為負數。

struct Node
{
	int data;
	Node *Lchild;
	Node *Rchild;
};

int height(Node *n)
{
    if (n == nullptr)
        return 0;
    else 
    {
	    int LHeight = height(n -> Lchild);
	    int RHeight = height(n -> Rchild);
	    return max(LHeight, RHeight) + 1;
    }
}

int balanceFactor(Node *p)
{
	if (p == nullptr)
        return 0;

    int LHeight = height(p->Lchild);
    int RHeight = height(p->Rchild);
    return LHeight - RHeight;
}

int main() {
    Node* a = new Node();
    Node* b = new Node();
    Node* c = new Node();
    Node* d = new Node();
    Node* e = new Node();
    Node* f = new Node();
    Node* g = new Node();
    Node* h = new Node();
    
    //      a
    //   b     d
    //c           e
    //          f
    //        g   h
    a -> Lchild = b;
    b -> Lchild = c;
    a -> Rchild = d;
    d -> Rchild = e;
    e -> Lchild = f;
    f -> Lchild = g;
    f -> Rchild = h;
    
    cout << balanceFactor(a) << endl;
    cout << balanceFactor(f) << endl;
	return 0;
}