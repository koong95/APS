//============================================================================
// Name        : BFS_Ű����.cpp
// Author      : koong
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================
#include <iostream>
#include <vector>
using namespace std;

vector<int> node[100];

int main() {
	cout << "Sorting Algorithm" << endl; // prints Sorting Algorithm
	int N = 6;

	node[1].push_back(5);
	node[3].push_back(4);
	node[5].push_back(4);
	node[4].push_back(2);
	node[4].push_back(6);
	node[5].push_back(2);


	return 0;
}
