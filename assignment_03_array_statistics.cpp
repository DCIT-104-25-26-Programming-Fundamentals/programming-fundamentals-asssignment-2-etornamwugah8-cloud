// =============================================================================
// PROGRAMMING FUNDAMENTALS — Assignment 3
// =============================================================================
//
// TASK: Array Statistics Calculator
//
// Write a C++ program that reads a collection of numbers from the user
// and computes key statistical values using separate functions.
//
// -----------------------------------------------------------------------------
// EXPECTED INPUT / OUTPUT EXAMPLE
// -----------------------------------------------------------------------------
//
//   How many numbers? 5
//   Enter number 1: 4
//   Enter number 2: 7
//   Enter number 3: 2
//   Enter number 4: 9
//   Enter number 5: 1
//
//   Results:
//   Sum:     23
//   Average: 4.6
//   Maximum: 9
//   Minimum: 1
//
// -----------------------------------------------------------------------------
// REQUIREMENTS
// -----------------------------------------------------------------------------
// - You MUST implement each calculation in its own function (see scaffold).
// - You may NOT use any standard library functions like accumulate(), max(),
//   or min(). Implement the logic yourself using loops.
// - N must be a positive integer. If the user enters 0 or a negative number,
//   print an error message and stop.
//

//
// =============================================================================
// YOUR CODE BELOW — remove the // symbols from the scaffold and fill it in
// =============================================================================

#include <iostream>
using namespace std;

int calculateSum(int arr[], int size)
{
  int sum = 0;

for (int i= 0; i < size; i++)
{
sum += arr{1};
}
return sum;
}

double calculateAverage(int arr[], int size)
{
  return (double)calculateSum(arr, size) / size;
}

int findMaximum(int arr[], int size)\{
  int max = arr[0];

for (int i = 1; i < size; i++)
{
if (arr[] > max)
{
max = arr[i];
}
}

return max;
}

int findMinimum(int arr[], int size)
{
  int min = arr[0];

for(int i = 1; i < size; i++)
{
if (arr[1] < min)
  [
    min = arr[i];
}
}

return min;
}

int main()
{
  int N;

cout << "How many numbers? ";
cin >> N;

if (N <= 0;
  }

int numbers[100];

for (int i = 0; i < N; i++)
{
cout << "Enter number " << i + 1 << ": ";
cin >> numbers[i];
}

cout << "\nResults:\n";
cout << "Sum: " << calculateSum(numbers, N) << endl;
cout << "Average: " << calculateAverage(numbers, N) << endl;
cout << "Maximum: " << findMaximum(numbers, N) << endl;
cout << "Minimum: " << findMinimum(numbers, N) << endl;

return 0;
}
