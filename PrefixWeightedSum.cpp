/*Prefix weighted sum
[2,5,3,4,8,9,5,6,7]
getSum(0,2) = 1*2 + 2*5 + 3*3 = 21
*/
#include <iostream>
using namespace std;

int main() {
  int a[] = {1, 2, 3, 4, 5, 6};
  for (auto x : a)
    cout << x << " ";
  cout << endl;
  int size = sizeof(a) / sizeof(a[0]);
  int prefixArr[size];
  prefixArr[0] = a[0];
  for (int i = 1; i < size; i++) {
    prefixArr[i] = prefixArr[i - 1] + a[i];
  }
  int prefixW[size];
  prefixW[0] = a[0];
  for (int i = 1; i < size; i++) {
    prefixW[i] = prefixW[i - 1] + ((i + 1) * a[i]);
  }
  int l, r;
  cout << "Enter index :";
  cin >> l >> r;
  if (r >= size) {
    cout << "Enter valid index" << endl;
    return 0;
  }
  for (auto x : prefixArr)
    cout << x << " ";
  cout << endl;
  for (auto x : prefixW)
    cout << x << " ";
  cout << endl;
  if (l == 0)
    cout << prefixW[r] - ((l - 1) * prefixArr[r]);
  else
    cout << (prefixW[r] - prefixArr[l - 1]) -
                ((l - 1) * (prefixW[r] - prefixArr[l - 1]));
  cout << endl;
}