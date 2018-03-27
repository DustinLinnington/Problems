#pragma once
#include "Question.h"
#include <vector>
#include <math.h>
#include <iostream>

using namespace std;
class Question6 :
	public Question
{
public:
	Question6();
	~Question6();

	void printAnswer();

	struct CuckooHash
	{
		int hashTable[2][11] = { 0 };
		int max = 11;
		vector<int> keysBeingHashed = vector<int>();

		void add(int newKey)
		{
			keysBeingHashed.clear();

			int tableOneHash = hash(0, newKey);
			int tableTwoHash = hash(1, newKey);

			if (hashTable[0][tableOneHash] == newKey || hashTable[1][tableTwoHash] == newKey)
			{
				cout << newKey << " is a duplicate." << endl;
				return;
			}

			int table = rand() % 2;
			cuckoo(newKey, table, 0);
		}

	private:
		int hash(int function, int key)
		{
			switch (function)
			{
			case 0:
				return key % max;
				break;
			case 1:
				return (key/max) % max;
				break;
			}
		}

		int cuckoo(int newKey, int tableToAdd, int attempts)
		{
			if (attempts > max)
			{
				cout << "Ran into an infinite loop when trying to place number." << endl;
				return 0;
			}

			int tableHash = hash(tableToAdd, newKey);
			if (hashTable[tableToAdd][tableHash] == 0)
			{
				hashTable[tableToAdd][tableHash] = newKey;
				return 1;
			}
			else
			{
				if (tableToAdd == 0)
					tableToAdd = 1;
				else
					tableToAdd = 0;
				int replacedKey = hashTable[tableToAdd][tableHash];
				keysBeingHashed.push_back(replacedKey);
				hashTable[tableToAdd][tableHash] = newKey;
				attempts++;
				cuckoo(replacedKey, tableToAdd, attempts);
			}
		}
	};
};

