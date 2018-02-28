#include "Question7.h"

Question7::Question7()
{
}

Question7::~Question7()
{
}

void Question7::printSolution()
{
	cout << "Creating a new vector with lazy deletion " << endl;
	LazyList<int> lazyList = LazyList<int>();
	cout << "Adding 1, 2, 3, 4, 5, 6 to vector. " << endl;
	lazyList.push_back(1);
	lazyList.push_back(2);
	lazyList.push_back(3);
	lazyList.push_back(4);
	lazyList.push_back(5);
	lazyList.push_back(6);

	cout << "Removing element 0." << endl;
	lazyList.lazyErase(0);
	cout << "Removing element 0." << endl;
	lazyList.lazyErase(0);
	cout << "Removing element 0." << endl;
	lazyList.lazyErase(0);
	cout << "Removing element 0." << endl;
	lazyList.lazyErase(0);
}