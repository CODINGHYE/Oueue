class Node
{
	int data;
	Node* next_node;
public:
	Node(int new_data)
	{
		data = new_data;
		next_node = nullptr;
	}
	int get_data();
	void set_data(int val);
	Node* get_next_node();
	void set_next_node(Node* next);
	bool has_next_node();
};