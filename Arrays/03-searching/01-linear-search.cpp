// Given an array of integers return the idx if given number exists in the array
// or return -1 if it does not.
#include <iostream>
using namespace std;

int linearSearch(int arr[], int n, int key) {
  for (int i = 0; i < n; i++) {
    if (arr[i] == key) {
      return i;
    }
  }
  return -1;
}

int main() {
  int arr[6] = {10, 4, 5, 11, 6};
  int target = 11;
  int ans = linearSearch(arr, 6, target);
  if (ans == -1) {
    cout << "Element not found";
  } else {
    cout << "Element found at index " << ans;
  }
}