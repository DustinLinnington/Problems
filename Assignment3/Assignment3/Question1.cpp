#include "stdafx.h"
#include "Question1.h"
#include <iostream>

Question1::Question1()
{
}


Question1::~Question1()
{
}

void Question1::printAnswer()
{
	cout << "Creating heap with size of 6 and values of [0, 1, 2, 4, 5, 6, 7]." << endl;
	BinaryHeap<int> heap = BinaryHeap<int>();
	heap.currentSize = 6;
	heap.data = { 0, 1, 2, 4, 5, 6, 7 };

	cout << "Inserting the value 3." << endl;
	heap.insert(3);

	cout << "The value stored in index 0 is now: " << heap.data[0] << endl;
	cout << "The full heap after inserting is: [";
	for (int i = 0; i < heap.data.size(); ++i)
	{
		if (i != heap.data.size() - 1)
			cout << heap.data[i] << ", ";
		else
			cout << heap.data[i] << "]" << endl;
	}
}

/**
* Insert item x, allowing duplicates.
*/
template <typename Comparable>
void Question1::BinaryHeap<Comparable>::insert(const Comparable & x)
{
	// If there's no room for another element / heap is full
	if (currentSize == data.size() - 1)
		data.resize(data.size() * 2);

	// Percolate up
	int hole = ++currentSize; // Create hole one past the very last node
	Comparable copy = x;
	data[0] = std::move(copy);

	// Go up the heap with the hole branch by branch until you find the right spot for x
	for (; x < data[hole / 2]; hole /= 2)
		data[hole] = std::move(data[hole / 2]);

	// Modifying our insert to keep a copy at index 0.
	Comparable copy2 = x;
	data[hole] = std::move(copy2);
}