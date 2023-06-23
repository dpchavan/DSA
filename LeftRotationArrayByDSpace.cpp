#include <iostream>
using namespace std;

int main() {
  int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
  int size = sizeof(a) / sizeof(a[0]);
  int d = 0;
  cin >> d;
  for (int x : a) {
    cout << x << " ";
  }
  cout << endl;
  for (int i = 0; i < d; i++) {
    int temp = a[0];
    for (int j = 1; j < size; j++) {
      a[j - 1] = a[j];
    }
    a[size - 1] = temp;
  }
  for (int x : a) {
    cout << x << " ";
  }
  cout << endl;
}