#include <iostream>
using namespace std;

class Node
{
    public:
		int data;
		Node *link; 
};

void printList(Node *head)
{
    Node *current = head;
    while (current != nullptr)
    {
        cout << current -> data << " ";
        current = current -> link;
    }
    cout << endl;
}

void invert(Node *s)
{
	Node *r, *q = NULL, *p = s; 
	// r = pre; q = current, p = next
	// Liu said *q = NULL and *p = s is the key, 
	// because you have to set up the initial value
	// *p is the pointer which point to first of the linked list
	
	while (p != NULL)
	{
		r = q;
		q = p;
		p = p -> link;
		q -> link = r;
	}
	s = q;
}

int main()
{
	Node *a = new Node();
	Node *b = new Node();
	Node *c = new Node();
	a -> data = 5; 
	a -> link = b; 
	b -> data = 10;
	b -> link = c;
	c -> data = 15;
	c -> link = nullptr;
	
	printList(a);
	invert(a);
	printList(c);
	
	return 0;
}