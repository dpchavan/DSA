// find maximum consecutive ones in binary array
#include <iostream>
using namespace std;

int main() {
  int a[] = {1, 0, 1, 1, 0, 0, 1, 1, 1};
  int size = sizeof(a) / sizeof(a[0]);
  int res = 0, curr = 0;
  for (int i = 0; i < size; i++) {
    if (a[i] == 0) {
      curr = 0;
    } else {
      curr++;
      res = max(res, curr);
    }
  }
  cout << res << endl;
}