// get maximum difference between two elements such that a[j] - a[i] where j > i
//  [2,3,10,6,4,8,1]
//  o/p : 8 (10-2)
#include <iostream>
using namespace std;

int main() {
  int a[] = {20, 10, 30, 40, 50};
  int minVal = a[0];
  int res = a[1] - a[0];
  int size = sizeof(a) / sizeof(a[0]);
  for (int i = 1; i < size; i++) {
    res = max(res, a[i] - minVal);
    minVal = min(minVal, a[i]);
  }
  cout << res << endl;
}
