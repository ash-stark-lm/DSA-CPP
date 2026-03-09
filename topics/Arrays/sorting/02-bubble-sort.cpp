#include <iostream>
#include <vector>
using namespace std;

/*
Bubble Sort:
Idea:
Repeatedly compare adjacent elements and swap them if they are
in the wrong order.

After each iteration, the largest element from the unsorted
part "bubbles up" to its correct position at the end.

The unsorted portion of the array keeps shrinking.
*/

void bubbleSort(vector<int> &arr, int n) {

  // Traverse the array multiple times
  for (int i = 0; i < n; i++) {

    // Compare adjacent elements in the unsorted portion
    for (int j = 0; j < n - i - 1; j++) {

      // Swap if elements are in the wrong order
      if (arr[j] > arr[j + 1]) {
        swap(arr[j], arr[j + 1]);
      }
    }
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

  // Perform bubble sort
  bubbleSort(arr, n);

  cout << "\nSorted array:\n";
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }

  cout << endl;

  return 0;
}