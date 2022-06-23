#include "Queue.h"
#include <iostream>

using namespace std;

bool Queue::is_empty()
{
	return head == nullptr;
}
Node* Queue::get_head()
{
	return head;
}
void Queue::set_head(Node* node)
{
	head = node;
}
Node* Queue::get_tail()
{
	return tail;
}
void Queue::set_tail(Node* node)
{
	tail = node;
}
void Queue::enqueue(int data)
{
	Node* new_node = new Node(data);

	if (is_empty()) head = new_node;
	else tail->set_next_node(new_node);
	tail = new_node;
}
int Queue::dequeue()
{
	if (is_empty())
	{
		cout << "빈 리스트입니다.";
		return -1;
	}
	
	int temp = head->get_data();
	if(head==tail)
	{
		head = nullptr;
		tail = nullptr;
	}
	else
	{
		head = head->get_next_node();
	}
	return temp;
}


Queue& Queue::operator<<(int n)
{
	enqueue(n);
	return *this;
}

bool Queue::operator !()
{
	return is_empty();
}

Queue Queue::operator>>(int& n)
{
	n = dequeue();
	return *this;
}