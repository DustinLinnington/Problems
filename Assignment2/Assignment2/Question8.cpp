#include "Question8.h"
#include <iostream>
#include <algorithm>
#include <cstdio>
#include <ctime>

Question8::Question8()
{
}


Question8::~Question8()
{
}



void Question8::printAnswer()
{
	vector<int> inputVec (100000);
	int sumVal = 4;

	generate(inputVec.begin(), inputVec.end(), []() {
		return rand() % 100;
	});

	clock_t start;
	double durationOofN2;
	double durationOofNLogN;

	cout << "Testing O(N^2) solution with a vector of size 100000 filled with random numbers and K = 4." << endl;
	start = clock();
	vector<int> result = doesAnySumEqualInputN2(inputVec, sumVal);
	durationOofN2 = (clock() - start) / (double)CLOCKS_PER_SEC;

	if (result.empty())
	{
		cout << "The sums of any two numbers in the input vector do not add up to K." << endl;
	}
	else
	{
		cout << "The numbers " << result[0] << " and " << result[1] << " add to " << sumVal << "." << endl;
	}

	cout << "Testing 0(NlogN) solution with a vector of size 100000 filled with random numbers and K = 4." << endl;
	start = clock();
	result = doesAnySumEqualInputNlogN(inputVec, sumVal);
	durationOofNLogN = (clock() - start) / (double)CLOCKS_PER_SEC;

	if (result.empty())
	{
		cout << "The sums of any two numbers in the input vector do not add up to K." << endl;
	}
	else
	{
		cout << "The numbers " << result[0] << " and " << result[1] << " add to " << sumVal << "." << endl;
	}

	cout << endl << "Comparing the two running times:" << endl;
	cout << "The first algorithm iterates through the input vector once for every number in the vector, which ends up being " << durationOofN2 << "." << endl;
	cout << "The second algorithm sorts the vector first, then goes through the input vector one time plus logN times, which ends up being " << durationOofNLogN << "." << endl;
}

vector<int> Question8::doesAnySumEqualInputN2(vector<int> vecToSum, int input)
{
	int testSum = 0;

	for (int i = 0; i < vecToSum.size(); ++i)
	{
		for (int j = 0; j < vecToSum.size(); ++j)
		{
			testSum = vecToSum[i];
			testSum += vecToSum[j];

			if (testSum == input)
			{
				return vector<int>() = { vecToSum[i], vecToSum[j] };
			}
		}
	}

	return vector<int>();
}

vector<int> Question8::doesAnySumEqualInputNlogN(vector<int> vecToSum, int input)
{
	vector<int> sortedVec = vecToSum;
	sort(sortedVec.begin(), sortedVec.end());

	int testSum;
	for (int i = 0; i < sortedVec.size(); ++i)
	{
		for (int j = i; j < sortedVec.size(); ++j)
		{
			testSum = sortedVec[i];
			testSum += sortedVec[j];
			if (testSum == input)
			{
				return vector<int>() = { sortedVec[i], sortedVec[j] };
			}
		}
	}

	return vector<int>();
}
