#ifndef MATRIX_H_
#define MATRIX_H_

#include <iomanip>
#include <iostream>
#include <ostream>

using namespace std;

class Matrix {
private:
  int row, col;
  int **data;

public:
  Matrix(int row = 10, int col = 10);   // Default constructor
  ~Matrix();                            // Destructor
  Matrix(Matrix &&other);               // move copy constructor
  Matrix(const Matrix &other);          // copy constructor
  Matrix *operator=(const Matrix &rhs); // assignment operator for 'deep copy'

  void display(ostream &out);
};

// assignment operator for 'deep copy'
Matrix *Matrix::operator=(Matrix &rhs) {
  cout << "Move = operator" << endl;
  for (int r = 0; r < row; r++) {
    delete[] data[r];
  }
  delete[] data;
  row = rhs.row;
  col = rhs.col;
  data = rhs.data;
  rhs.row = 0;
  rhs.col = 0;
  rhs.data = nullptr;

  return this;
}

// move constructor
Matrix::Matrix(Matrix &&other)
    : row(other.row), col(other.col), data(other.data) {
  cout << "Move CC" << endl;
  other.row = 0;
  other.col = 0;
  other.data = nullptr;
}

// copy constructor?
Matrix *Matrix::operator=(const Matrix &rhs) {
  cout << "Call = operator " << endl;
  if (this != &rhs) {
    for (int r = 0; r < row; r++) {
      delete[] data[r];
    }
    delete[] data;

    row = rhs.row;
    col = rhs.col;
    data = new int *[row];
    for (int r = 0; r < row; r++) {
      data[r] = new int[col];
      memcpy(data[r], rhs.data[r], 4 * col);
    }
  }
  return this;
}

// copy constructor
Matrix::Matrix(const Matrix &other) : row(other.row), col(other.col) {
  cout << "CC " << this << " " << &other << endl;
  data = new int *[row];
  for (int r = 0; r < row; r++) {
    data[r] = new int[col];
    memcpy(data[r], other.data[r], 4 * col);
  }
}

// destructor
Matrix::~Matrix() {
  cout << "destructor" << this << endl;
  for (int r = 0; r < row; r++) {
    delete[] data[r];
  }
  if (data)
    delete[] data;
  data = nullptr;
}

// constructor
Matrix::Matrix(int row, int col) : row(row), col(col) {
  cout << "const " << this << endl;
  data = new int *[row];
  for (int i = 0; i < row; i++) {
    data[i] = new int[col];
    memset(data[i], 0, 4 * col);
  }
}

void Matrix::display(ostream &out) {
  for (int r = 0; r < row; r++) {
    for (int c = 0; c < col; c++) {
      out << left << setw(4) << data[r][c];
    }
    out << endl;
  }
}

#endif /* MATRIX_H_ */
