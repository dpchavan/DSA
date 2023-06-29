#include <iostream>
using namespace std;

int main() {
  int array[] = {1, 4, 4, 23, 23, 32};
  int res = 1;
  size_t size = sizeof(array) / array[0];
  cout << size << endl;
  for (int x : array) {
    cout << x << " ";
  }
  for (int i = 1; i < 6; i++) {
    if (array[i] != array[res - 1]) {
      array[res] = array[i];
      res++;
    }
  }
  cout << endl << "Duplicate removed Array :" << endl;
  for (int x = 0; x < res; x++) {
    cout << array[x] << " ";
  }
  cout << endl;
  return 0;
}