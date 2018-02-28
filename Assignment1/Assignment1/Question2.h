#pragma once
#include <vector>
#include <iostream>

using namespace std;
class Question2
{
public:
	Question2();
	~Question2();

	void printSolution();

	template <typename Object>
	struct Matrix
	{
		Matrix(int rows, int cols) : array(rows)
		{
			for (auto & thisRow : array)
				thisRow.resize(cols);
		}
		Matrix(vector<vector<Object>> v) : array{ v }
		{ 
		}
		Matrix(vector<vector<Object>> && v) : array{ std::move(v) }
		{ 
		}
		Matrix() : array{vector<vector<Object>>()}
		{

		}

		void resize(int rows, int columns)
		{
			array.resize(rows);
			for (int i = 0; i < array.size(); ++i)
			{
				array[i].resize(columns);
			}
		}

		const vector<Object> & operator[](int row) const
		{ 
			return array[row]; 
		}
		vector<Object> & operator[](int row)
		{ 
			return array[row]; 
		}
		int numrows() const
		{ 
			return array.size(); 
		}
		int numcols() const
		{ 
			return numrows() ? array[0].size() : 0; 
		}

		private:
			vector<vector<Object>> array;
	};
};

