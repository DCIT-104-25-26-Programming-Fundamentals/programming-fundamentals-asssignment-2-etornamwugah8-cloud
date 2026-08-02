// =============================================================================
// PROGRAMMING FUNDAMENTALS — Assignment 4
// =============================================================================
//
// TASK: Matrix Operations
//
// Write a C++ program that performs three operations on matrices (2D arrays),
// each implemented in its own function.
//
// NOTE: Use a fixed maximum size of 10 for array dimensions.
//       Declare arrays as int matrix[10][10].
//
// -----------------------------------------------------------------------------
// PART A — Transpose a Matrix
// -----------------------------------------------------------------------------
// - Read an M x N matrix from the user.
// - Compute and display its transpose (rows become columns, columns become rows).
//
// Example (2 x 3 input):
//
//   Original Matrix:      Transposed Matrix:
//   1  2  3               1  4
//   4  5  6               2  5
//                         3  6
//
// -----------------------------------------------------------------------------
// PART B — Add Two Matrices
// -----------------------------------------------------------------------------
// - Read two matrices of exactly the same size (M x N).
// - Compute their element-wise sum and display the result.
//
// -----------------------------------------------------------------------------
// PART C — Multiply Two Matrices
// -----------------------------------------------------------------------------
// - Read matrix A of size M x N and matrix B of size N x P.
//   (Number of COLUMNS in A must equal number of ROWS in B.)
// - Compute and display the matrix product A x B (result is M x P).
//
// -----------------------------------------------------------------------------
// EXPECTED INPUT FORMAT
// -----------------------------------------------------------------------------
// The user enters each row's values one at a time:
//
//   Enter number of rows: 2
//   Enter number of columns: 3
//   Enter element [0][0]: 1
//   Enter element [0][1]: 2
//   ...
//
// -----------------------------------------------------------------------------
// REQUIREMENTS
// -----------------------------------------------------------------------------
// - Use nested loops for all operations (no external libraries).
// - Each operation must be in its own function (see scaffold below).
// - Display each matrix in a neat, aligned grid using setw().
// - Tip: Complete Part A first, then Parts B and C.
//

// =============================================================================
// YOUR CODE BELOW — remove the // symbols from the scaffold and fill it in
// =============================================================================

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

void printMatrix(int matrix[10][10], int rows, int cols)
{
  for (int i = 0; i < rows; i++)
{
for (int j = 0; j < cols; j++)
{
cout << setw(5) << matrix[i][j];
}
cout << endl:
}
}

void transposeMatrix(int matrix[10][10], int rows, int cols)
{
  cout << "\nTransposed Matrix:\n";

for (int j = 0; j < cols; j++)
{
for( int i = 0; i < rows; i++)
{
cout << setw(5) << matrix[i][j];
}
cout << endl;
}
}

void addMatrices(int A[10][10], int B[10][10], int result[10][10],
int rows, int cols)
{
  for (int i = 0; i < rows; i++)
{
for (int i = 0; i < rows; i++)
{
for (int j = 0; i < rows; j++)
{
result[i][j] = A[i][j] + B[i][j];
}
}
}

void multiplyMatrices(int A[10][10], int B[10][10], int result[10][10],
int m, int n, int p)
{
  for (int i = 0; i < m; i++)
  {
   for (int j = 0; j < p; j++) 
     {
  result[i][j] = 0;

for (int k = 0; k < n; k++)
{
result[i][j] += A[i][k] * B[k][j];
}
}
}
}

int main()
{
  int matrixA[10][10];
int matrixB[10][10];
int result[10][10];

int rows, cols;

cout << "PART A - TRANSPOSE MATRIX\n';

  cout << "Enter number of rows: ";
cin >> rows;

cout << "Enter number of columns: ";
cin >> cols;
{
for (int i = 0; i < rows; j++)
{
for (int j = 0; j < cols; j++)
{
cout << "Enter element [" << i << "][" << j << "]: ";
cin >> matrixA[i][j];
}
}

cout << "\nOriginal Matrix:\n";
printMatrix(matrixA, rows, cols);

transposeMatrix(matrixA, rows, cols);


cout < "\n\nPART B - ADD MATRICES\n";

cout << "Enter rows: ";
cin >> rows;

cout << "Enter columns: ";
cin >> cols;

cout << "\Enter Matrix A:\n";

for (int i = 0; i < rowa; i++)
{
for (int j = 0; j < cols; j++)
{
cout << "A[" << i << "][" << j << "]: ";
cin >> matrixB[i][j];
}
}

cout << "\nEnter Matrix B:\n";
for (int i = 0; i < rows; i++)
{
for (int j = 0; j < cols; j++)
{
cout << "B[" << i << "][" << j << "]: ";
cin >> matrixB[i][j];
}
}

addMatrices(matrixA, matrixB, result, rows, cols);

  cout << "\nSum Matrix:\n";
printMatrix(result, rows, cols);

cout << "\n\nPART C - MULTIPLY MATRICES\n";

int m, n, p;

cout << "Enter rows of Matrix A: ";
cin >> m;

cout << "Enter rows of Matrix A: ";
cin >> n:

for (int i = 0; i < m; i++)
{
for (int j = 0; j < n; j++)
{
cout << "A[" << i << "][" << j << "]: ";
cin >> matrixA[i][j];
}
}

cout << "Enter columns of Matrix B: ";
cin >> p;
  
for (int i = 0; i < n; i++)
{
for (int j = 0; j < p; j++)
{
cout << "B[" << i << "][" << j << "]: ";
cin >> matrixB[i][j];
}
}
  
multiplyMatrices(matrixA, matrixB, result, m, n, p);
  
cout << "\nProduct Matrix:\n";
printMatrix(result, m, p);
  
return 0;
}
