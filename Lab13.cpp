#include <iostream>
#include <string>
#include "Node.h"
using namespace std;

int main() {

	Node *headPtr = nullptr;
	cout << endl;
	cout << "There are " << LL_Length(headPtr) << " item(s) to start" << endl;

	string name;
	do
	{

		cout << "Enter a name, or 'end' to stop ==> ";
		cin >> name;
		if (name != "end")
		{
			if (headPtr == nullptr)
			{
				headPtr = new Node(name);
			}
			else
			{
				Node *new_node = new Node(name);
				Node *getLast = LL_get_last(headPtr);
				getLast->set_next(new_node);
			}
		}

	} while (name != "end");

	cout << endl;
	cout << "You entered " << LL_Length(headPtr) << " item(s)" << endl;

	cout << endl << "The names forward is" << endl;
	output_forward(headPtr);

	cout << endl << "The names reverse is" << endl;
	output_reverse(headPtr);

	LL_destroy(headPtr);

	return 0;
}