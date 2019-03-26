#pragma once
#include <string>
using namespace std;

class Node
{
public:
	Node();
	Node(string name);
	Node(string name, Node *next);
	~Node();
	Node * get_next();
	void set_next(Node *next);
	string get_value() { return value; };

private:
	string value;
	Node *next_node = nullptr;
};

int LL_Length(Node* node);
Node* LL_get_last(Node *node);
void output_forward(Node* node);
void output_reverse(Node* node);
void LL_destroy(Node* node);

