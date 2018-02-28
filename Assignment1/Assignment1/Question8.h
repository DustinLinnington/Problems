#pragma once
#include <iostream>       // std::cout
#include <stack>          // std::stack
#include <vector>         // std::vector
#include <deque>          // std::deque
#include <algorithm>	  // std::find_if
#include <sstream>

using namespace std;
class Question8
{
public:
	Question8();
	~Question8();

	void printSolution();

	struct PostfixEvaluator
	{
		int evaluatePostfixExpression(vector<string> postfixExpression);
		bool checkIfInt(const string& s);
	};
};