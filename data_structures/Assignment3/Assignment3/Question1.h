#pragma once
#include "Question.h"
#include <vector>

using namespace std;
class Question1 :
	public Question
{
public:
	Question1();
	~Question1();

	void printAnswer();

	template <typename Comparable>
	struct BinaryHeap {
		void insert(const Comparable & x);
		int currentSize; // Number of elements in heap
		vector<Comparable> data; // The heap array
	};

};

