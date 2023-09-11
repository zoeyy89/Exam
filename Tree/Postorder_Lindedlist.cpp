#include <iostream>
using namespace std;
 
class Node
{
    public:
        int data;
        Node * Lchild;
        Node * Rchild;
};
 
void Postorder(Node * T)
{
    if (T != nullptr)
    {
        Postorder(T -> Lchild);
        Postorder(T -> Rchild);
        cout << T -> data << endl;
    }		
}
 
int main()
{
    Node * a = new Node();
    Node * b = new Node();
    Node * c = new Node();
    a -> data = 10;
    a -> Lchild = b;
    a -> Rchild = c;
    b -> data = 60;
    b -> Lchild = nullptr;
    b -> Rchild = nullptr;
    c -> data = 80;
    c -> Lchild = nullptr;
    c -> Rchild = nullptr;
    Postorder(a);
 
    return 0;
}
 

