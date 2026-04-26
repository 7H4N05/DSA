#include <iostream>
#include <vector>
using namespace std;

bool isValid(vector<int> &arr, int n, int m, int mid) {
  int painters = 1;
  int boardSum = 0;

  for (int i = 0; i < n; i++) {
    if (boardSum + arr[i] <= mid) {
      boardSum += arr[i];
    } else {
      painters++;
      boardSum = arr[i];
    }
  }
  if (painters > m) {
    return false;
  } else {
    return true;
  }
}

int MinTime(vector<int> &arr, int n, int m) {

  int maximum = -1, sum = 0;

  for (int i = 0; i < n; i++) {
    maximum = max(maximum, arr[i]);
  }

  for (int i = 0; i < n; i++) {
    sum += arr[i];
  }


  int start = maximum, end = sum, ans = -1;

  while (start <= end) {
    int mid = start + (end - start) / 2;

    if (isValid(arr, n, m, mid)) {
      ans = mid;
      end = mid - 1;
    } else {
      start = mid + 1;
    }
  }

  return ans;
}

int main() {

  vector<int> arr = {40, 30, 10, 20};
  int n = 4, m = 2;
  

  cout << "Minimum Time:" << MinTime(arr, n, m) << endl;

  return 0;
}