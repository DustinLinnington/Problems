#include "Question7.h"



Question7::Question7()
{
}


Question7::~Question7()
{
}

void Question7::printAnswer()
{
	cout << "You could use a radix sort, which given an upper bound of n for the size of numbers used, can sort" << endl;
	cout << "in O(N) time. First, you would convert the fractions into numbers that were able to be ordered, then " << endl;
	cout << "you could pass that converted list through Radix sort to get a sorted list in O(N) time." << endl;
}