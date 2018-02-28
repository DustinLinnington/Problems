#include "Question8.h"

Question8::Question8()
{

}


Question8::~Question8()
{

}

void Question8::printSolution()
{
	PostfixEvaluator evaluator = PostfixEvaluator();
	vector<string> postfix;
	postfix.push_back("33");
	postfix.push_back("4");
	postfix.push_back("5");
	postfix.push_back("*");
	postfix.push_back("+");
	postfix.push_back("20");
	postfix.push_back("-");


	cout << "Post fix expression = ";
	for (int i = 0; i < postfix.size(); ++i)
	{
		cout << postfix[i] << " ";
	}

	int solution = evaluator.evaluatePostfixExpression(postfix);

	cout << endl << "Solution: " << solution;
}

int Question8::PostfixEvaluator::evaluatePostfixExpression(vector<string> postfixExpression)
{
	stack<int> solutionStack = stack<int>();

	for (int i = 0; i < postfixExpression.size(); ++i)
	{
		if (checkIfInt(postfixExpression[i]))
		{
			stringstream stringConverter(postfixExpression[i]);

			int value = 0;
			stringConverter >> value;

			solutionStack.push(value);
		}
		else
		{
			if (postfixExpression[i] == "*")
			{
				int right = solutionStack.top();
				solutionStack.pop();
				int left = solutionStack.top();
				solutionStack.pop();

				int solution = right * left;
				solutionStack.push(solution);
			}
			else if (postfixExpression[i] == "+")
			{
				int right = solutionStack.top();
				solutionStack.pop();
				int left = solutionStack.top();
				solutionStack.pop();

				int solution = right + left;
				solutionStack.push(solution);
			}
			else if (postfixExpression[i] == "-")
			{
				int right = solutionStack.top();
				solutionStack.pop();
				int left = solutionStack.top();
				solutionStack.pop();

				int solution = right - left;
				solutionStack.push(solution);
			}
		}
	}

	return solutionStack.top();
}

bool Question8::PostfixEvaluator::checkIfInt(const string& s)
{
	return !s.empty() && find_if(s.begin(),
		s.end(), [](char c) { return !isdigit(c); }) == s.end();
}