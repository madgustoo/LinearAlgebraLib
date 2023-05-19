#pragma once

/*
	Class which represents a 2-diminsional matrix
*/
template <class T>
class Matrix2D
{
	public:
		// Constructors
		Matrix2D();
		Matrix2D(int nbRows, int nbCols);
		Matrix2D(int nbRows, int nbCols, const T *inputData);
		Matrix2D(const Matrix2D<T>& inputMatrix);

		// Descructor
		~Matrix2D();

		bool resize(int nbRows, int nbCols);

		T GetElement(int row, int col);
		bool SetElement(int row, int col, T elementValue);;
		int GetNumRows();
		int GetNumCols();

		// Overload operators
		bool operator== (const Matrix2D& matrix);

		template <class U> friend Matrix2D operator+(const Matrix2D<U>& firstMatrix, const Matrix2D<U>& secondMatrix);
		template <class U> friend Matrix2D operator+(const U& scalar, const Matrix2D<U>& matrix);
		template <class U> friend Matrix2D operator+(const Matrix2D<U>& matrix, const U& scalar);

		template <class U> friend Matrix2D operator-(const Matrix2D<U>& firstMatrix, const Matrix2D<U>& secondMatrix);
		template <class U> friend Matrix2D operator-(const U& scalar, const Matrix2D<U>& matrix);
		template <class U> friend Matrix2D operator-(const Matrix2D<U>& matrix, const U& scalar);

		template <class U> friend Matrix2D operator*(const Matrix2D<U>& firstMatrix, const Matrix2D<U>& secondMatrix);
		template <class U> friend Matrix2D operator*(const U& scalar, const Matrix2D<U>& matrix);
		template <class U> friend Matrix2D operator*(const Matrix2D<U>& matrix, const U& scalar);

	private:
		int Sub2Ind(int row, int col);

	private:
		T* m_matrixData;
		int m_nRows, m_nCols, int m_nElements;
};