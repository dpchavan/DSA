// Elements to be called leaders if all right side element is less that that
// element
#include <iostream>
using namespace std;
int main() {
  int a[] = {14, 7, 9, 2, 6, 12, 9, 6};
  int size = sizeof(a) / sizeof(a[0]);
  for (int x : a) {
    cout << x << " ";
  }
  cout << endl;
  int curr_leader = a[size - 1];
  cout << curr_leader << " ";
  for (int i = size - 1; i >= 0; i--) {
    if (curr_leader < a[i]) {
      curr_leader = a[i];
      cout << curr_leader << " ";
    }
  }
  cout << endl;
}