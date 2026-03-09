#include <iostream>
#include <vector>
using namespace std;

/*
Selection Sort:
Idea:
For every position i, find the minimum element from the unsorted part
of the array and place it at position i.

After each iteration, the left part of the array becomes sorted.
*/

void selectionSort(vector<int> &arr, int n) {

  // Traverse the entire array
  for (int i = 0; i < n; i++) {

    // Assume the current index has the minimum element
    int miniIdx = i;

    // Search for the minimum element in the remaining unsorted array
    for (int j = i + 1; j < n; j++) {
      if (arr[j] < arr[miniIdx]) {
        miniIdx = j;
      }
    }

    // Swap the found minimum element with the current position
    swap(arr[i], arr[miniIdx]);
  }
}

int main() {

  int n;
  cout << "Enter number of elements: ";
  cin >> n;

  vector<int> arr(n);

  cout << "Enter the elements:\n";
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }

  // Perform selection sort
  selectionSort(arr, n);

  cout << "\nSorted array:\n";
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }

  cout << endl;

  return 0;
}