#include "stdafx.h"
#include "Question6.h"


Question6::Question6()
{
}


Question6::~Question6()
{
}

void Question6::printAnswer()
{
	cout << "Creating a cuckoo hash table of size 11." << endl;
	CuckooHash cuckoo = CuckooHash();

	cout << "Adding the numbers 23 through 27 to table." << endl;
	cuckoo.add(23);
	cuckoo.add(24);
	cuckoo.add(25);
	cuckoo.add(26);
	cuckoo.add(27);
	cout << "Now adding 28 twice." << endl;

	cuckoo.add(28);
	cuckoo.add(28);

	cout << "Filling up the table with random numbers." << endl;
	cuckoo.add(29);
	cuckoo.add(38);
	cuckoo.add(48);
	cuckoo.add(58);
	cuckoo.add(68);
	cuckoo.add(78);
	cuckoo.add(88);
	cuckoo.add(98);
	cuckoo.add(107);
	cuckoo.add(117);
	cuckoo.add(399);

	cout << "Adding a number that would create an infinite loop." << endl;
	cuckoo.add(3412);

	cout << "End results:" << endl << "Table 1 values: [";
	for (int i = 0; i < 11; i++)
	{
		if (i == 10)
			cout << cuckoo.hashTable[0][i] << "]" << endl;
		else
			cout << cuckoo.hashTable[0][i] << ", ";
	}

	cout << "Table 2 values: [";
	for (int i = 0; i < 11; i++)
	{
		if (i == 10)
			cout << cuckoo.hashTable[1][i] << "]" << endl;
		else
			cout << cuckoo.hashTable[1][i] << ", ";
	}

}