#include "Question1.h"

Question1::Question1()
{
}


Question1::~Question1()
{
}



void Question1::printSolution()
{
	Rectangle largeArea = Rectangle(20, 20);
	Rectangle largePerimiter = Rectangle(60, 1);
	Rectangle small = Rectangle(5, 5);

	vector<Rectangle> rectArray{ largeArea, largePerimiter, small };

	PerimiterCheck perimitor = PerimiterCheck();
	AreaCheck area = AreaCheck();

	Rectangle maxRectPerim = findMax(rectArray, perimitor);
	Rectangle maxRectArea = findMax(rectArray, area);

	cout << "Dimensions of all rectangles: " << endl;
	for (int i = 0; i < rectArray.size(); ++i)
	{
		cout << "Rect " << i << ": " << rectArray[i].getLength() << "(L), " << rectArray[i].getWidth() << "(W)" << endl;
	}

	cout << endl << "The largest rectangle by area's dimensions are:  " << maxRectArea.getLength() << "(L), " << maxRectArea.getWidth() << "(W)" << endl;
	cout << "The largest rectangle by perimeter's dimensions are:  " << maxRectPerim.getLength() << "(L), " << maxRectPerim.getWidth() << "(W)" << endl;
}

// Generic findMax, with a function object, C++ style.
// Precondition: a.size( ) > 0.
template <typename Shape, typename Comparator>
Shape Question1::findMax(vector<Shape> arr, Comparator isLessThan)
{
	int maxIndex = 0;
	for (int i = 1; i < arr.size(); ++i)
		if (isLessThan(arr[maxIndex], arr[i]))
			maxIndex = i;

	return arr[maxIndex];
}

// Generic findMax, using default ordering.
#include <functional>
template <typename Shape>
Shape Question1::findMax(vector<Shape> arr)
{
	return findMax(arr, less<Shape>{ });
}