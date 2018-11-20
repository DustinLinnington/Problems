#pragma once

#include <vector>
#include <iostream>

using namespace std;
class Question1
{
public:
	Question1();
	~Question1();
	void printSolution();

	template <typename Shape, typename Comparator>
	Shape findMax(vector<Shape> arr, Comparator isLessThan);
	template <typename Shape>
	Shape findMax(vector<Shape> arr);

	struct Rectangle
	{
	private:
		int mLength = 0;
		int mWidth = 0;

	public:
		Rectangle(int length, int width)
		{
			mLength = length;
			mWidth = width;
		}

		int getLength() {
			return mLength;
		};
		int getWidth() {
			return mWidth;
		};
	};

	struct Operator
	{
		virtual bool operator() (Rectangle left, Rectangle right) = 0;
	};

	struct PerimiterCheck : public Operator
	{
		virtual bool operator() (Rectangle left, Rectangle right)
		{
			float leftPerim = (left.getLength() * 2) + (left.getWidth() * 2);
			float rightPerim = (right.getLength() * 2) + (right.getWidth() * 2);

			return true ? (leftPerim < rightPerim) : false;
		};
	};

	struct AreaCheck : public Operator
	{
		virtual bool operator() (Rectangle left, Rectangle right)
		{
			float leftArea = left.getLength() * left.getWidth();
			float rightArea = right.getLength() * right.getWidth();

			return true ? (leftArea < rightArea) : false;
		};
	};
};
