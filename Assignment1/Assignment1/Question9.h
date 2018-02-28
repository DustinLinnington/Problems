#pragma once
#include <vector>
#include <iostream>

using namespace std;
class Question9
{
public:
	Question9();
	~Question9();

	void printSolution();

	struct CircularQueue
	{
		int mSize = 10;
		int frontPos = -1;
		int backPos = -1;

		vector<int> queue;

		CircularQueue(int size)
		{
			mSize = size;
			queue = vector<int>(mSize);
		}

		void enQueue(int obj);
		int deQueue();
	};
};