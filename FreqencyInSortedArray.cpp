#include <iostream>
using namespace std;

int main() {
  int a[] = {10, 10, 2, 2, 2, 5, 5};
  int size = sizeof(a) / sizeof(a[0]);
  int freq = 1;
  int i = 1;
  for (auto x : a) {
    cout << x << " ";
  }
  cout << endl;
  while (i < size) {
    while (i < size && a[i] == a[i - 1]) {
      freq++;
      i++;
    }
    cout << a[i - 1] << " " << freq << endl;
    i++;
    freq = 1;
  }
  if (size == 1 || a[size - 1] != a[size - 2]) {
    cout << a[size - 1] << " " << 1 << endl;
  }
}