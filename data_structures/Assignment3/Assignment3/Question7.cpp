#include "stdafx.h"
#include "Question7.h"
#include <algorithm>
#include <numeric>
#include <iostream>

Question7::Question7()
{
}


Question7::~Question7()
{
}

void Question7::printAnswer()
{
	beginTournament(8);

}

void Question7::beginTournament(int size)
{
	vector<vector<int>> playedGames = vector<vector<int>>(size);
	//iota(begin(playedGames), end(playedGames), 0);

	for (int i = 0; i < size - 1; ++i)
	{
		cout << "==ROUND " << i << "==" << endl;

		// Create a vector and fill it with our players
		vector<int> playersUnplayed = vector<int>(size);
		iota(begin(playersUnplayed), end(playersUnplayed), 0);
		playRound(playersUnplayed, playedGames);
	}
}

void Question7::playRound(vector<int> playersUnplayed, vector<vector<int>> &playedGames)
{
	if (playersUnplayed.size() == 0)
		return;

	int playerPlayed = 0;
	for (int i = 1; i < playersUnplayed.size(); ++i)
	{
		if (playedGames[playersUnplayed[0]].size() != 0 &&
			find(playedGames[playersUnplayed[0]].begin(), playedGames[playersUnplayed[0]].end(), playersUnplayed[i]) == playedGames[playersUnplayed[0]].end())
		{
			playerPlayed = i;
			cout << "Players " << playersUnplayed[0] << " and " << playersUnplayed[i] << " have just played a game." << endl;
			playedGames[playersUnplayed[0]].push_back(playersUnplayed[i]);
			playedGames[playersUnplayed[i]].push_back(playersUnplayed[0]);
			break;
		}
		else if (playedGames[playersUnplayed[0]].size() == 0)
		{
			playerPlayed = i;
			cout << "Players " << playersUnplayed[0] << " and " << playersUnplayed[i] << " have just played a game." << endl;
			playedGames[playersUnplayed[0]].push_back(playersUnplayed[i]);
			playedGames[playersUnplayed[i]].push_back(playersUnplayed[0]);
			break;
		}
	}

	playersUnplayed.erase(playersUnplayed.begin() + playerPlayed);
	playersUnplayed.erase(playersUnplayed.begin());

	return playRound(playersUnplayed, playedGames);
}
