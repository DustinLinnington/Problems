#pragma once
#include "Question.h"
#include <vector>
#include <iostream>

using namespace std;
class Question9 : public Question
{
public:
	Question9();
	~Question9();

	void printAnswer();

	struct Node {
		bool checked = false;
		int num;

		vector<int> outgoingConnections;
		vector<int> incomingConnections;
	};

	struct Graph {
		vector<Node> nodes;

		Graph(int graphSize)
		{
			nodes = vector<Node>(graphSize);

			for (int i = 0; i < nodes.size(); ++i)
			{
				nodes[i].num = i;
			}
		}

		void addEdge(int from, int to)
		{
			nodes[from].outgoingConnections.push_back(to);
			nodes[to].incomingConnections.push_back(from);
		}

		void topologicalSort(int nodeToCheck, vector<int> &sortedNodes)
		{
			if (nodes[nodeToCheck].checked)
			{
				return;
			}

			bool allIncomingConnectionsChecked = true;
			for (int j = 0; j < nodes[nodeToCheck].incomingConnections.size(); ++j)
			{
				if (nodes[nodes[nodeToCheck].incomingConnections[j]].checked == false)
				{
					allIncomingConnectionsChecked = false;
				}
			}
			if (allIncomingConnectionsChecked)
			{
				nodes[nodeToCheck].checked = true;
				sortedNodes.push_back(nodeToCheck);
			}



			for (int i = 0; i < nodes[nodeToCheck].outgoingConnections.size(); ++i)
			{
				topologicalSort(nodes[nodeToCheck].outgoingConnections[i], sortedNodes);
			}





			//for (int i = 0; i < nodes.size(); ++i)
			//{
			//	if (!nodes[i].checked)
			//	{
			//		topologicalSort(nodeToCheck, sortedNodes);
			//	}
			//}
		}
	};
};

