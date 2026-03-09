#include <iostream>
#include <vector>
using namespace std;

// -------- Array Example --------
// Arrays decay into pointers when passed to functions.
// So modifications affect the original array.
void modifyArray(int arr[], int n) {
  arr[0] = 100;

  cout << "Inside modifyArray, arr address: " << arr << endl;
}

// -------- Vector passed by VALUE --------
// A copy of the vector is created meaning original vector is not modified.
void modifyVectorByValue(vector<int> v) {
  v[0] = 150;

  cout << "Inside modifyVectorByValue, data address: " << v.data() << endl;
}

// -------- Vector passed by REFERENCE --------
// No copy is created. Original vector is modified.
void modifyVectorByReference(vector<int> &v) {
  v[0] = 200;

  cout << "Inside modifyVectorByReference, data address: " << v.data() << endl;
}

int main() {
  // -------- Raw Array (Stack allocation) --------
  int arr[3] = {1, 2, 3};

  cout << "Array address in main: " << arr << endl;

  modifyArray(arr, 3);

  cout << "Array after function call: ";
  for (int i = 0; i < 3; i++)
    cout << arr[i] << " ";
  cout << endl;

  cout << endl;

  // -------- Vector Example --------
  vector<int> v = {1, 2, 3};

  cout << "Vector data address in main: " << v.data() << endl;

  // Passing by value (copy)
  modifyVectorByValue(v);

  cout << "Vector after modifyVectorByValue: ";
  for (int x : v)
    cout << x << " ";
  cout << endl;

  cout << endl;

  // Passing by reference
  modifyVectorByReference(v);

  cout << "Vector after modifyVectorByReference: ";
  for (int x : v)
    cout << x << " ";
  cout << endl;

  return 0;
}
