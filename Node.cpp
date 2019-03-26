#include <iostream>
#include "Node.h"
using namespace std;

Node::Node()
{
}

Node::Node(string name)
{
	value = name;
	next_node = nullptr;
}

Node::Node(string name, Node * next)
{
	value = name;
	next_node = next;
}

Node::~Node()
{
}

Node * Node::get_next()
{
	return next_node;
}

void Node::set_next(Node * next)
{
	next_node = next;
}

