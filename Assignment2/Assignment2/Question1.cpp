#include "Question1.h"
#include "BinarySearchTree.h"

Question1::Question1()
{

}

Question1::~Question1()
{

}

void Question1::printAnswer()
{
	cout << "Building a new tree." << endl;
	BinarySearchTree<int> tree = BinarySearchTree<int>();
	cout << "Inserting 1, 2, 3, 4, 5 into tree." << endl;
	tree.insert(1);
	tree.insert(2);
	tree.insert(3);
	tree.insert(4);
	tree.insert(5);
	cout << "Now removing 3 and 1." << endl;
	tree.remove(1);
	tree.remove(3);
	cout << "Reinsterting 3." << endl;
	tree.insert(3);
	cout << "Printing tree: " << endl;
	tree.printTree();
}