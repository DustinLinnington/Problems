#include "Assignment1.h"
#include "Question1.h"
#include "Question2.h"
#include "Question5.h"
#include "Question7.h"
#include "Question8.h"
#include "Question9.h"

using namespace std;
int main()
{
	cout << "===== QUESTION 1 =====" << endl;
	Question1 q1 = Question1();
	q1.printSolution();

	cout << endl << "===== QUESTION 2 =====" << endl;
	Question2 q2 = Question2();
	q2.printSolution();

	cout << endl << "===== QUESTION 3 =====" << endl;
	cout << "A and C are the correct answers." << endl;

	cout << endl << "===== QUESTION 4 =====" << endl;
	cout << "a) Horner's Method can be visualized in a table where you list the values in a function in order according to their powers." << endl;
	cout << "So our example would look like 4, 8, 0 (there is no power of 2), 1, 2." << endl;
	cout << "Next, we will take the first number (starting with the highest power) and add it to the result of our previous operation." << endl;
	cout << "Since there is no previous operation for our first number (4) we can move on to the second step which is to multiply this resul by x." << endl;
	cout << "This gives us 12." << endl;
	cout << "Now we take our next number and add it to our result, so 8 + 12 = 20. Then, we multiply it by x so 20 * 3 = 60." << endl;
	cout << "Then we take (0 + 60) * 3 = 180." << endl;
	cout << "Then (1 + 180) * 3 = 543." << endl;
	cout << "Then (2 + 543) = 545 which is our final answer." << endl;
	cout << "b) This works because we are still multiplying by x an amount equal to the power of each value. So, for example, our first number " << endl;
	cout << "is 4 times x to the power of 4, and throughout the method we end up multiplying that 4 by x 4 seperate times. This is true for all values in the expression." << endl;
	cout << "It also only works if we have the highest power values first because of this." << endl;
	cout << "c) The complexity of this algorithm is O(N)." << endl;

	cout << endl << "===== QUESTION 5 =====" << endl;
	Question5 q5 = Question5();
	q5.printSolution();

	cout << endl << "===== QUESTION 6 =====" << endl;
	cout << "It can invalidate all iterators viewing the vector because when a vector is modified it could be resized, and when they are resized " << endl;
	cout << "the vector might need to be moved to a different portion of memory. When that happens all things pointing at the previous location of" << endl;
	cout << "where the vector was will no longer be valid." << endl;

	cout << endl << "===== QUESTION 7 =====" << endl;
	cout << "a) The advantage of lazy deletion is that you don't have to reorder your tree every time you delete an element" << endl;
	cout << "The disadvantage is that we now have an extra piece of information on each element to store and look at as we are going through elements" << endl;
	cout << "and we will have to store all deleted items until they are cleaned up as well." << endl;
	cout << "b) ";
	Question7 q7 = Question7();
	q7.printSolution();

	cout << endl << "===== QUESTION 8 =====" << endl;
	Question8 q8 = Question8();
	q8.printSolution();

	cout << endl << endl << "===== QUESTION 9 =====" << endl;
	Question9 q9 = Question9();
	q9.printSolution();

	char stopChar;
	cin >> stopChar;
}

Assignment1::Assignment1()
{
}


Assignment1::~Assignment1()
{
}

