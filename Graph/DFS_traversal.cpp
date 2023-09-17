//Depth-First-Search_traversal
//參考https://skylinelimit.blogspot.com/2017/06/c-python-depth-first-search-part-i.html

#include <iostream>
using namespace std;

//定義Node 能指向3個Node
class Node
{
    public:
	    string data;
		Node* next[3] = {nullptr, nullptr, nullptr};
		Node(string s): data(s){
		}
};

Node* BuildTree()
{
    Node* root = new Node("red1");
    root -> next[0] = new Node("orange2");
    root -> next[1] = new Node("lime3");
	root -> next[2] = new Node("green4");
	root -> next[0] -> next[0] = new Node("yellow5");
	root -> next[2] -> next[0]= new Node("blue6");
	root -> next[2] -> next[1] = new Node("purple7");
	return root;
}

void DFS(Node* start)
{
    if (start == nullptr)
	    return;
	cout << start -> data << " visited" << endl;
	for (int i = 0; i < 3; i++)
	{
		DFS(start -> next[i]);
	}
}
int main()
{
    Node* Tree = BuildTree();
	DFS(Tree);
	return 0;	
}