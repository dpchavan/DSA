// get max length even add element
//[2,3,4,6,6,10]
// o/p : 3
//[2,2,2]
// o/p : 1
#include <iostream>
using namespace std;
int main() {
  int a[] = {1, 2, 3, 4, 5, 7};
  int res = 1;
  int size = sizeof(a) / sizeof(a[0]);
  int curr = 1;
  for (int i = 1; i < size; i++) {
    if ((a[i] % 2 == 0 && a[i - 1] % 2 != 0) ||
        (a[i] % 2 != 0 && a[i - 1] % 2 == 0)) {
      curr++;
      res = max(res, curr);
    } else
      curr = 0;
  }
  cout << res << endl;
}