#include <iostream>
using namespace std;

int main() {
  int a[] = {2, 0, 4, 0, 0, 20, 0, 11, 21};
  int size = sizeof(a) / sizeof(a[0]);
  cout << "Array :";
  for (auto x : a) {
    cout << x << " ";
  }
  int count = 0;
  for (int i = 0; i < size; i++) {
    if (a[i] != 0) {
      int temp = a[i];
      a[i] = a[count];
      a[count] = temp;
      count++;
    }
  }
  cout << endl << "Array :";
  for (auto x : a) {
    cout << x << " ";
  }
  cout << endl;
}