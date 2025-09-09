#ifndef MATRIX_H
#define MATRIX_H
#include <iostream>
#include <string>
using namespace std;

class Matrix {
public:
  Matrix(int r = 10, int c = 10); // Default constructor
  Matrix(const Matrix &m);        // Copy constructor
  Matrix(Matrix &&m);             // Move constructor
  ~Matrix();                      // Destructor
  int getRows() const;
  int getColumns() const;
  double getElement(int r, int c) const;
  void setElement(int r, int c, double v);
  Matrix add(const Matrix &m) const;
  Matrix subtract(const Matrix &m) const;
  Matrix multiply(const Matrix &m) const;
  Matrix transpose() const;
  ostream &printMatrix(ostream &out) const;
  Matrix &operator=(const Matrix &); // Copy assignment
  Matrix &operator=(Matrix &&);      // Move assignment
  Matrix operator+(const Matrix &other) const;
  Matrix operator-(const Matrix &other) const;
  Matrix operator*(const Matrix &other) const;
  double *operator[](int);
  static int get_matrixCount();

private:
  int rows, cols;
  double **element;
  static int matrixCount;
};

ostream &operator<<(ostream &out, Matrix);
#endif // MATRIX_H
