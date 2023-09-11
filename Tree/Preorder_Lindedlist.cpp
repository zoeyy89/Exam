    #include <iostream>
    #include <cstdlib> 
    using namespace std;
     
    class Node
    {
        public:
    		int data;
    		Node * Lchild;
    		Node * Rchild;
    };
     
    void Preorder(Node * T)
    {
        if (T != nullptr)
    	{
            cout << T -> data << endl;
    		Preorder(T -> Lchild);
    		Preorder(T -> Rchild);
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
        Preorder(a);
     
    	return 0;
    }

