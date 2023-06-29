// get maximum sub array
//[2,-1,1,0,-3,2]
//[2,-1,1]
// o/p = 2
#include <iostream>
using namespace std;
int main() {
  int a[] = {3, -2, 1, 6, 5, -2};
  int res = a[0];
  int maxEnding = a[0];
  int size = sizeof(a) / sizeof(a[0]);
  for (int i = 1; i < size; i++) {
    maxEnding = max(maxEnding + a[i], a[i]);
    res = max(maxEnding, res);
  }
  cout << res << endl;
}