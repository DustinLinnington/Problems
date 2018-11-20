#pragma once
#include "Question.h"
#include <iostream>
#include <stdlib.h>
#include <vector>
#include <algorithm>

using namespace std;
class Question8 :
	public Question
{
public:
	Question8();
	~Question8();

	void printAnswer();

	vector<int> doesAnySumEqualInputN2(vector<int> vecToSum, int input);
	vector<int> doesAnySumEqualInputNlogN(vector<int> vecToSum, int input);

	//template<typename _FIter, typename _Generator>
	//void generate(_FIter start, _FIter end, _Generator gen);
};

