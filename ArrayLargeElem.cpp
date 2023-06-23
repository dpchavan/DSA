#include <iostream>
using namespace std;
int main() {
  int a[] = {50, 7, 32, 17, 50};
  int res = 0;
  cout << "Array :" << a[res] << " ";
  for (int i = 1; i < 5; i++) {
    cout << a[i] << " ";
    if (a[i] > a[res]) {
      res = i;
    }
  }
  cout << endl << "Largest Index :" << (res + 1) << endl;
}