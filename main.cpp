#include <iostream>
#include <fstream>
#include "LinkedList.h"
#include "ArgumentManager.h"

int main(int argc, char* argv[])
{
	ArgumentManager am(argc, argv);

	//ifstream input(am.get("input"));
	//ofstream output(am.get("output"));
	ifstream input("input1.txt");
	ofstream output("ans.txt");

	linkedList list;

	list.readID(input);

	return 0;
}