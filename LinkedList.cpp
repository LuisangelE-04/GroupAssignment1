#include "LinkedList.h"

void linkedList::readID(ifstream& input)
{
	string line = "";
	while (getline(input, line))
	{
		if (line != "\n" && line != "\r" && !line.empty()) {
			if (line.find("Bar") == string::npos)
			{
				cout << line << endl;
			}
		}
	}
}

// 23(234(54)346)78