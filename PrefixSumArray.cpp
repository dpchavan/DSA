/*get prefix sum array of given index
[2,3,0,9,6,8]
getSum(0,2) = 5
getSum(2,5) = 23
*/
#include <iostream>
using namespace std;
int main() {
  int a[] = {2, 7, 0, 3, 9, 4, 1};
  for (auto x : a)
    cout << x << " ";
  cout << endl;
  int size = sizeof(a) / sizeof(a[0]);
  int prefixArr[size];
  prefixArr[0] = a[0];
  for (int i = 1; i < size; i++) {
    prefixArr[i] = prefixArr[i - 1] + a[i];
  }
  int l, r;
  cout << "Enter index :";
  cin >> l >> r;
  if (r >= size) {
    cout << "Enter valid index" << endl;
    return 0;
  }
  if (l == 0)
    cout << prefixArr[r] << endl;
  else
    cout << (prefixArr[r] - prefixArr[l - 1]) << endl;
}