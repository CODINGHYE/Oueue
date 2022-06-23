#include "Node.h"
class Queue
{
	Node* head=nullptr;
	Node* tail=nullptr;
public:
	bool is_empty();
	Node* get_head();
	void set_head(Node* node);
	Node* get_tail();
	void set_tail(Node* node);
	void enqueue(int data);
	int dequeue();
	Queue& operator << (int n);
	bool operator !();
	Queue operator >> (int& n);
};
