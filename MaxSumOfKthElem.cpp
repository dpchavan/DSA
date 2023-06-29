// Slidding window problem
// We need to find maximun sum of kth consecutive elements
#include <iostream>
using namespace std;
int main() {
  int a[] = {1, 4, -3, 5, 2, 8, 3, 2, 1};
  for (auto x : a) {
    cout << x << " ";
  }
  cout << endl;
  int size = sizeof(a) / sizeof(a[0]);
  int curr = 0;
  int k = 4;
  for (int i = 0; i < k; i++)
    curr += a[i];
  int res = curr;
  for (int i = k; i < size; i++) {
    curr = curr + a[i] - a[i - k];
    res = max(res, curr);
  }
  cout << "Max sum of " << k << " element is :" << res << endl;
}