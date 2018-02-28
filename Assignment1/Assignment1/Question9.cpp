#include "Question9.h"

Question9::Question9()
{
}


Question9::~Question9()
{
}

void Question9::printSolution()
{
	CircularQueue queue = CircularQueue(5);
	cout << "Creating circular queue with a size of 5." << endl;

	cout << "Enqueueing the value of 1" << endl;
	queue.enQueue(1);
	cout << "Enqueueing the value of 2" << endl;
	queue.enQueue(2);
	cout << "Enqueueing the value of 3" << endl;
	queue.enQueue(3);
	cout << "Enqueueing the value of 4" << endl;
	queue.enQueue(4);
	cout << "Enqueueing the value of 5" << endl;
	queue.enQueue(5);
	cout << "Enqueueing the value of 6" << endl;
	queue.enQueue(6);

	cout << "Dequeueing the value " << queue.deQueue() << "." << endl;
	cout << "Dequeueing the value " << queue.deQueue() << "." << endl;

	cout << "Enqueueing the value of 6" << endl;
	queue.enQueue(6);
	cout << "Enqueueing the value of 7" << endl;
	queue.enQueue(7);

	cout << "Queue contents: " << endl;
	for (int i = 0; i < queue.mSize; ++i)
	{
		cout << queue.queue[i] << endl;
	}
}

void Question9::CircularQueue::enQueue(int addition)
{
	if ((frontPos == 0 && backPos == (mSize - 1)) || (backPos == (frontPos - 1)))
	{
		cout << "CircularQueue is full. Could not add the value of " << addition << "." << endl;
		return;
	}
	else if (frontPos == -1)
	{
		frontPos = 0;
		backPos = 0;
		queue[backPos] = addition;
	}
	else if ((backPos == (mSize - 1)) && frontPos != 0)
	{
		backPos = 0;
		queue[backPos] = addition;
	}
	else
	{
		backPos++;
		queue[backPos] = addition;
	}
}

int Question9::CircularQueue::deQueue()
{
	if (frontPos == -1)
	{
		cout << "CircularQueue is empty" << endl;
		return 0;
	}

	int data = queue[frontPos];
	queue[frontPos] = -1;
	if (frontPos == backPos)
	{
		frontPos = -1;
		backPos = -1;
	}
	else if (frontPos == (mSize - 1))
		frontPos = 0;
	else
		frontPos++;

	return data;
}