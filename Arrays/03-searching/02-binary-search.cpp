#include <bits/stdc++.h>
using namespace std;

int binarySearch(vector<int> &arr, int n, int target) {
  int low = 0;
  int high = n - 1;

  while (low <= high) {
    int mid = low + (high - low) / 2;
    if (arr[mid] == target) {
      return mid;
    } else if (arr[mid] > target) {
      high = mid - 1;
    } else
      low = mid + 1;
  }
  return -1;
}

int main() {
  int n;
  cin >> n;

  vector<int> arr(n);
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }
  int target;
  cin >> target;
  sort(arr.begin(), arr.end());

  int ans = binarySearch(arr, n, target);
  if (ans == -1) {
    cout << "Element not found";
  } else {
    cout << "Element found at index " << ans;
  }

  return 0;
}