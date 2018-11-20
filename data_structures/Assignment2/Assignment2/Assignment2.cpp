#include "Assignment2.h"
#include "Question1.h"
#include "Question2.h"
#include "Question7.h"
#include "Question8.h"
#include "Question9.h"


#include <iostream>
using namespace std;

Assignment2::Assignment2()
{

}

Assignment2::~Assignment2()
{

}

int main()
{
	cout << "=====QUESTION 1=====" << endl;
	Question1 q1 = Question1();
	q1.printAnswer();

	cout << endl << "=====QUESTION 2=====" << endl;
	Question2 q2 = Question2();
	q2.printAnswer();

	cout << endl << endl << "=====QUESTION 3=====" << endl;
	cout << "To find the kth smallest element in a binary search tree in O(logN) time, we'd modify the tree to be self-balancing." << endl;
	cout << "Once done, we could start by looking at the number of elements in total that are left of the root node. " << endl;
	cout << "Since all elements to the left of a node are smaller than it, then (given the amount of elements left of the " << endl;
	cout << "root are less than our k) we will find our k by going down to the left child node. At the next node, we do" << endl;
	cout << "the same operation, checking to see how many child nodes are in the left side of the tree at this new node." << endl;
	cout << "We keep doing this operation until we run into a node where the number of children to the left of the node" << endl;
	cout << "are equal to k; in which case, this would then be our node. If the number of children left of the node we" << endl;
	cout << "are checking is LARGER than k, then we subtract that number from k to get our new k then go to the node to" << endl;
	cout << "the right of our previous node and continue in our loop until we find the node with k number of child elements." << endl;


	cout << endl << "=====QUESTION 4=====" << endl;
	cout << "The running time of mergesort for:" << endl;
	cout << "a) Sorted Input = O(NlogN)" << endl;
	cout << "b) Reverse-ordered Input = O(NlogN)" << endl;
	cout << "c) Random Input = O(NlogN)" << endl;

	cout << endl << "=====QUESTION 5=====" << endl;
	cout << "The running time of quicksort for:" << endl;
	cout << "a) Sorted Input = O(N^2)" << endl;
	cout << "b) Reverse-ordered Input = O(NlogN)" << endl;
	cout << "c) Random Input = O(N^2)" << endl;

	cout << endl << "=====QUESTION 6=====" << endl;
	cout << "Mergesort is a stable algorthm because if an element is to the left of another element on input and both are sorted," << endl;
	cout << "then they will maintain that order even after being put through the mergesort algorithm (because mergesort never " << endl;
	cout << "swaps an elements place if it's already sorted when it's broken down and then merged back together.)" << endl;
	cout << "Quicksort, however, is unstable due to the repeated pivoting and swapping of elements. By the end of the algortithm" << endl;
	cout << "elements places can easily be completely swapped, no matter what order they came in." << endl;

	cout << endl << "=====QUESTION 7=====" << endl;
	Question7 q7 = Question7();
	q7.printAnswer();

	cout << endl << "=====QUESTION 8=====" << endl;
	Question8 q8 = Question8();
	q8.printAnswer();

	cout << endl << "=====QUESTION 9=====" << endl;
	Question9 q9 = Question9();
	q9.printAnswer();

	cout << endl << endl << "=====QUESTION 10=====" << endl;
	cout << "First, we must describe how the graph will look. The 'currencies' (X, Y, Z) will be the vertices on the graph, " << endl;
	cout << "and the 'exchange rates' will be represented by the edges of the graph that connect the vertices. The graph is directed, " << endl;
	cout << "with the connections and directions between two vertices representing the cost to exchange those currencies. So: " << endl;
	cout << "X->Y = -2, Y->Z = -2, X->Z = -3. Conversely, transferring currencies the other way is flipped so: Y->X = 2, Z->Y = 2, Z->X = 3." << endl;
	cout << "Looking at this as a graph gives us the idea for an algorithm to calculates if there's some kind of infinite profit loop." << endl;
	cout << "The alogirthm would function like Dijkstra's, except it would check all routes twice. At the end of the second run through, " << endl;
	cout << "if the second time the cost was lower than the first time through any path then we know we have an infinite loop." << endl;
	cout << "In this case, we could check distance between X->Z and find that the first run through would give us a lowest cost of -4 from X->Y->Z." << endl;
	cout << "We would then run through all paths again, checking our stored length for all paths we've previously checked. In this case, Z->X->Y->Z" << endl;
	cout << "would give us a second time cost of -5, telling us that this is an infinite loop." << endl;

	char blockChar;
	cin >> blockChar;
}