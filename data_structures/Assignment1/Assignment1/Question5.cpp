#include "Question5.h"


Question5::Question5()
{
}

Question5::~Question5()
{
}

void Question5::printSolution()
{
	cout << "a) Creating a Josephus Problem with N = 5, M = 1." << endl;
	josephusProblem(5, 1);

	cout << "b) The running time is O(M*N) (not including speed of built-in Vector erase)." << endl;
	cout << "c) If M = 1 then the running time is O(N) (not including speed of built-in Vector erase)." << endl;
	cout << "The performance decrease would be based mainly on the effeciency of the Vector erase function." << endl;
}

void Question5::josephusProblem(int numParticipants, int bombTimer)
{
	vector<int> deadParticipants = vector<int>();
	vector<int> participantsLeft = vector<int>(numParticipants);

	for (int i = 0; i < participantsLeft.size(); ++i)
	{
		participantsLeft[i] = i + 1;
	}

	int bombTimeRemaining = bombTimer;
	int bombPosition = 0;
	while (participantsLeft.size() > 1)
	{
		// Bomb blows up and kills someone!
		if (bombTimeRemaining == 0)
		{
			deadParticipants.push_back(participantsLeft[bombPosition]);
			participantsLeft.erase(participantsLeft.begin() + bombPosition);
			bombTimeRemaining = bombTimer;
			continue;
		}
		bombTimeRemaining--;

		bombPosition++;
		if (bombPosition == participantsLeft.size())
		{
			bombPosition = 0;
		}
	}

	cout << "The last person to have the bomb was participant " << participantsLeft[0] << "." << endl;
	cout << "The order of the dead was: ";
	for (int i = 0; i < deadParticipants.size(); ++i)
	{
		cout << deadParticipants[i];
		if (i != deadParticipants.size() - 1)
		{
			cout << ", ";
		}
		else
		{
			cout << endl;
		}
	}
}