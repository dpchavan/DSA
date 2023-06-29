/*get maximum water
[3,0,2,1,5]  __
    3  1  2 |  | Total = 3+1+2 = 6
 __ ........|  |
|  |.. __ ..|  |
|  |..|  |__|  |
|__|__|__|__|__|
*/
#include <iostream>
using namespace std;
int main() {
  int res = 0;
  int a[] = {1, 2, 4};
  int size = sizeof(a) / sizeof(a[0]);
  int lmax[size], rmax[size];
  // first get all left max start from left to right
  lmax[0] = a[0];
  for (int i = 1; i < size; i++) {
    lmax[i] = max(a[i], lmax[i - 1]);
  }
  rmax[size - 1] = a[size - 1];
  for (int i = size - 2; i >= 0; i--) {
    rmax[i] = max(a[i], rmax[i + 1]);
  }
  for (int i = 0; i < size; i++) {
    res = res + (min(lmax[i], rmax[i]) - a[i]);
  }
  cout << res << endl;
}