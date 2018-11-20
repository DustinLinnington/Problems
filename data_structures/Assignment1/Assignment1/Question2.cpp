#include "Question2.h"

Question2::Question2()
{
}

Question2::~Question2()
{
}

void Question2::printSolution()
{
	cout << "Creating Matrix with no constructor." << endl;
	Matrix<int> mat = Matrix<int>();

	cout << "Resizing matrix to a 5x10" << endl;
	mat.resize(5, 10);

	cout << "Number of rows: " << mat.numrows() << endl;
	cout << "Number of columns: " << mat.numcols() << endl;
}