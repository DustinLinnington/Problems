#include "Question2.h"
#include <iostream>

using namespace std;
Question2::Question2()
{
}


Question2::~Question2()
{
}

void Question2::printAnswer()
{
	cout << "Building the child-sibling tree." << endl;
	Tree childSibTree = Tree();

	cout << "Adding nodes with values of 0, 1, 2, 3, 4, 5, and 6." << endl;
	childSibTree.addNode(0);
	childSibTree.addNode(1);
	childSibTree.addNode(2);
	childSibTree.addNode(3);
	childSibTree.addNode(4);
	childSibTree.addNode(5);
	childSibTree.addNode(6);

	childSibTree.updateNode(0, 1);
	childSibTree.updateNode(1, 3, 2);
	childSibTree.updateNode(3, -1, 4);
	childSibTree.updateNode(2, 5);
	childSibTree.updateNode(5, -1, 6);

	cout << "Printing all elements in child sibling tree: " << endl;

	cout << childSibTree.nodeTree[0].element << " ";
	childSibTree.traverse(&childSibTree.nodeTree[0]);

	//bool nodeExists = childSibTree.contains(7);
	//cout << "Checking if '7' exists in the tree, which is " << nodeExists << "." << endl;

	//nodeExists = childSibTree.contains(3);
	//cout << "Checking if '3' exists in the tree, which is " << childSibTree.contains(3) << "."  << endl;
}