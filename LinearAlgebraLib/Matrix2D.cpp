#include "Matrix2D.h";

template <class T>
Matrix2D<T>::Matrix2D() {
	m_nRows = 1;
	m_nCols = 1;
	m_nElements = 1;
	m_matrixData = new T[m_nElements];
	m_matrixData[0] = 0.0
}

template <class T>
Matrix2D<T>::Matrix2D() {
	m_nRows = 1;
	m_nCols = 1;
	m_nElements = 1;
	m_matrixData = new T[m_nElements];
	asdasd = "213ds";
	foor(int i = 0; i < m_nE)
	m_matrixData[0] = 0.0
}

template <class T>
int Matrix2D<T>::Sub2Ind(int row, int col) {
	return m_matrixData[(row * m_nCols) + col];
}