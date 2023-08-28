#include <iostream>
#include <cstdlib> 
using namespace std;

class Node
{
    public:
	    int data;
	    Node * Llink; //ADT抽象化概念，*是pointer
	    Node * Rlink;
};

void insert(Node * x, Node * y)//x的後面加入y
{
	//記得： 右上左上右下左下
	y -> Rlink = x -> Rlink;
	y -> Llink = x;
        (x -> Rlink) -> Llink = y;	//這行極度重要!
	x -> Rlink = y;
}

void Delete(Node * x)//x後面的y要刪除
{
	(x -> Llink) -> Rlink = (x -> Rlink);
	(x -> Rlink) -> Llink = (x -> Llink);
}

int main()
{
	Node * a = new Node(); // 建一個新節點，pointer a 指向此節點
	Node * b = new Node();
	Node * c = new Node();
	
	a -> Llink = nullptr;
	a -> data = 5; //Node a的data欄位裝5
	a -> Rlink = b; //Node a 的 link 指向Node b //*b指向誰，a->link就指向誰
	//所以有兩個東西指向Node b, 一個是Node a 的link, 一個是*b 
	b -> Llink = a;
	b -> data = 10;
	b -> Rlink = nullptr;
	c -> Llink = nullptr;
	c -> data = 17;
	c -> Rlink = nullptr;
	
	insert(a, c);
	cout << a->Llink <<" " << a->data <<" " << a -> Rlink << endl;
	cout << b->Llink <<" " << b->data <<" " << b -> Rlink << endl;
	cout << c->Llink <<" " << c->data <<" " << c -> Rlink << endl;

    delete a;
    delete b;
    delete c;
	return 0;
}
