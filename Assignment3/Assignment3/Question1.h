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
		//BinaryHeap(int capacity = 100);
		//BinaryHeap(const vector<Comparable> & items);
		//bool isEmpty() const;
		//const Comparable & findMin() const;
		void insert(const Comparable & x);
		//void insert(Comparable && x);
		//void deleteMin();
		//void deleteMin(Comparable & minItem);
		//void makeEmpty();
		int currentSize; // Number of elements in heap
		vector<Comparable> data; // The heap array
		//void buildHeap();
		//void percolateDown(int hole);
	};

};

