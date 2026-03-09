
#include <iostream>
using namespace std;
int main() {

  // -------- Static Array Declaration & Initialization --------
  // Here we declare an array of size 4 and initialize it with values.
  // Array indices start from 0 and go up to size-1.
  int arr[4] = {1, 2, 3, 4};

  // Traverse the array and print each element along with its index.
  for (int i = 0; i < 4; i++) {
    cout << "Element at index " << i << " is: " << arr[i] << endl;
  }

  // -------- Array Declaration Without Initialization --------
  // Here we declare an array of size 5 but do not assign values yet.
  // The elements will be provided by the user at runtime.
  int arr2[5];

  cout << "Enter 5 elements for the array: " << endl;

  // Taking input for each index of the array.
  for (int i = 0; i < 5; i++) {
    cin >> arr2[i];
  }

  // Printing the elements stored in the array.
  cout << "Array elements are: ";
  for (int i = 0; i < 5; i++) {
    cout << arr2[i] << " ";
  }

  // fixed size array declared are stored in stack.
  // dynamic size array declared are stored in heap.

  /*
    int n;
    cin >> n;
    int arr[n];
    This is not recommended.
*/

  return 0;
}