/*
 * Author: Cody George
 * Assignment Title:  Program 4
 * Assignment Description: Matrix ADT with Dynamic Memory
 * Due Date: 9/14/25
 * Date Created: 9/9/25
 * Date Last Modified: 9/10/25
 */

#include "matrix.h"

// Default Constructor
Matrix::Matrix(int, int) {}

// ~Destructor
Matrix::~Matrix() {}

// Copy Constructor
Matrix::Matrix(const Matrix &m) {}

// Move Constructor
Matrix::Matrix(Matrix &&m) {}

int Matrix::getRows() {}

int Matrix::getColumns() const;

double Matrix::getElement(int r, int c) const;

void Matrix::setElement(int r, int c, double v);

Matrix::add(const Matrix &m) const;

Matrix::subtract(const Matrix &m) const;

Matrix::multiply(const Matrix &m) const;

Matrix::transpose() const;

ostream &printMatrix(ostream &out) const;

// Copy Assignment
Matrix::&operator=(const Matrix &);

// Move Assignment
Matrix::&operator=(Matrix &&);

Matrix::operator+(const Matrix & other) const;

Matrix::operator-(const Matrix & other) const;

Matrix::operator*(const Matrix & other) const;

double Matrix::*operator[](int);

static int Matrix::get_matrixCount();
