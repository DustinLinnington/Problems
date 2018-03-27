#pragma once
#include "Question.h"
#include <vector>
#include <iostream>

using namespace std;
class Question2 :
	public Question
{
public:
	Question2();
	~Question2();

	void printAnswer();

	template<typename Comparable>
	struct ChildSibNode
	{
		Comparable element;
		ChildSibNode<Comparable> *child;
		ChildSibNode<Comparable> *sib;
	};

	struct Tree
	{
		vector<ChildSibNode<int>> nodeTree;

		void addNode(int nodeVal, int child = -1, int sibling = -1)
		{
			ChildSibNode<int> newNode = ChildSibNode<int>();
			newNode.element = nodeVal;

			if (child != -1)
			{
				newNode.child = &nodeTree[child];
			}
			if (sibling != -1)
			{
				newNode.sib = &nodeTree[sibling];
			}

			nodeTree.push_back(newNode);
		}

		void updateNode(int nodeIndex, int newChild = -1, int newSibling = -1)
		{
			ChildSibNode<int> *nodeToChange = &nodeTree[nodeIndex];

			if (newChild != -1)
			{
				nodeToChange->child = &nodeTree[newChild];
			}
			if (newSibling != -1)
			{
				nodeToChange->sib = &nodeTree[newSibling];
			}
		}


		//void traverse(ChildSibNode<int> *parentNode)
		//{
		//	cout << parentNode->element;

		//	bool printedSiblings = false;
		//	// traverse all nodes that belong to the parent
		//	for (ChildSibNode<int> *node = parentNode->sib; node != NULL; node = node->sib)
		//	{
		//		if (!printedSiblings)
		//		{
		//			cout << "Siblings (";
		//			printedSiblings = true;
		//		}

		//		// print node information
		//		cout << node->element;

		//		if (node->sib != NULL)
		//		{
		//			cout << ", ";
		//		}
		//	}
		//	if (printedSiblings)
		//	{
		//		cout << ")";
		//	}
		//	for (ChildSibNode<int> *node = parentNode->child; node != NULL; node = node->sib)
		//	{
		//		// traverse children
		//		traverse(node);
		//	}
		//}

		void traverse(ChildSibNode<int> *parentNode) 
		{
			// traverse all nodes that belong to the parent
			for (ChildSibNode<int> *node = parentNode->child; node != NULL; node = node->sib)
			{
				// print node information
				cout << node->element << " ";

				traverse(node);
			}
		}

		bool contains(int numToFind)
		{
			ChildSibNode<int> nodeToCheck = nodeTree[0];

			while (true)
			{
				if (nodeToCheck.element != numToFind)
				{
					if (numToFind > nodeToCheck.element)
					{
						if (nodeToCheck.sib != NULL)
						{
							nodeToCheck = *nodeToCheck.sib;
						}
						else if (nodeToCheck.child != NULL)
						{
							nodeToCheck = *nodeToCheck.child;
						}
						else
						{
							return false;
						}
					}
					else
					{
						if (nodeToCheck.child == NULL)
						{
							return false;
						}
						else
						{
						}
					}
				}
				else
				{
					return true;
				}
			}
		};
	};
};