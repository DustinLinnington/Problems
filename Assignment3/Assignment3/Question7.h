#pragma once
#include "Question.h"
#include <vector>

using namespace std;
class Question7 :
	public Question
{
public:
	Question7();
	~Question7();

	void printAnswer();

	void beginTournament(int size);
	void playRound(vector<int> playersUnplayed, vector<vector<int>> &playedGames);
};

