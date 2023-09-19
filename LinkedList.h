#ifndef LINKEDLIST_H
#define LINKEDLIST_H
#include <iostream>
#include <string>
#include <fstream>
using namespace std;

struct node
{
	node* next = nullptr;
	string id = "";
	bool guilty = false;
};

class linkedList
{
private:
	node* head;
	node* tail;
public:
	linkedList()
	{
		head = nullptr;
		tail = nullptr;
	}
	// read input file
	void readID(ifstream& input);

	// checks if list is empty
	bool isEmpty();
	// print guilty then innocent
	void print(ofstream& ouput);
};

#endif