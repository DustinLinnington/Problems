#pragma once
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;
class Question7
{
public:
	void printSolution();

	Question7();
	~Question7();

	template <typename Object>
	struct LazyList : vector<Object>
	{
		vector<int> positionsToDelete = vector<int>();

		void lazyErase(int pos)
		{
			if (positionsToDelete.empty())
			{
				positionsToDelete.push_back(pos);
				return;
			}

			int realPos = pos;
			for (int i = 0; i < positionsToDelete.size(); ++i)
			{
				if (positionsToDelete[i] <= realPos)
				{
					++realPos;
				}
				else
				{
					break;
				}
			}

			if (this->size() - 1 < realPos)
			{
				return;
			}
			else
			{
				positionsToDelete.push_back(realPos);
			}

			if (positionsToDelete.size() >= this->size() / 2)
			{
				cout << "Deleted elements exceeding half of total list. Removing deleted elements." << endl;

				for (int i = 0; i < positionsToDelete.size(); ++i)
				{
					this->erase(this->begin() + i);
				}

				positionsToDelete.clear();
			}

			if (positionsToDelete.size() > 1)
			{
				sort(positionsToDelete.begin(), positionsToDelete.end());
			}
		}
	};
};

