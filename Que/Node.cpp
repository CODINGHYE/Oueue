#include "Node.h"

int Node::get_data()
{
	return data;
}
void Node::set_data(int val)
{
	data = val;
}
Node* Node:: get_next_node()
{
	return next_node;
}
void Node::set_next_node(Node* next)
{
	next_node = next;
}
bool Node:: has_next_node()
{
	return next_node != nullptr;
}