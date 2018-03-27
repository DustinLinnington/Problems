#include "Question9.h"



Question9::Question9()
{
}


Question9::~Question9()
{
}

void Question9::printAnswer()
{
	cout << "Building a graph of size 6 with edges: (5, 2), (5, 0), (4, 0), (4, 1), (2, 3), and (3, 1)." << endl;
	cout << "" << endl;
	//Graph originalGraph(8);
	//originalGraph.addEdge(0, 3);
	//originalGraph.addEdge(1, 3);
	//originalGraph.addEdge(1, 4);
	//originalGraph.addEdge(2, 4);
	//originalGraph.addEdge(2, 7);
	//originalGraph.addEdge(3, 5);
	//originalGraph.addEdge(3, 6);
	//originalGraph.addEdge(3, 7);
	//originalGraph.addEdge(4, 6);

	Graph originalGraph(6);
	originalGraph.addEdge(5, 2);
	originalGraph.addEdge(5, 0);
	originalGraph.addEdge(4, 0);
	originalGraph.addEdge(4, 1);
	originalGraph.addEdge(2, 3);
	originalGraph.addEdge(3, 1);

	cout << "Sorting graph topologically results in the following structure: " << endl;
	vector<int> sortedGraph;
	for (int j = 0; j < originalGraph.nodes.size(); ++j)
	{
		for (int i = 0; i < originalGraph.nodes.size(); ++i)
		{
			originalGraph.topologicalSort(i, sortedGraph);
		}
	}

	for (int i = 0; i < sortedGraph.size(); ++i)
	{
		cout << sortedGraph[i] << " ";
	}
}
