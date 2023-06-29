// we need to find out minimun group of flip to make binary array as same
// elements all element will be either 0 or 1 using min group of flip
//  [1,0,0,1,1,0,0,1]
//  o/o : From 1 to 2
//  From 5 to 6
#include <iostream>
using namespace std;
int main() {
  int a[] = {1, 0, 0, 1, 1, 0, 0, 1, 0};
  int size = sizeof(a) / sizeof(a[0]);
  for (auto x : a)
    cout << x << " ";
  cout << endl;
  for (int i = 1; i < size; i++) {
    if (a[i] != a[i - 1]) {
      // If it is not same as first element
      // then it is starting of the interval
      // to be flipped.
      if (a[i] != a[0])
        cout << "From " << i << " to ";
      // If it is not same as previous
      // and same as first element, then
      // previous element is end of interval
      else
        cout << (i - 1) << endl;
    }
  }
  // if last element is not same as previous then need to print last index
  if (a[size] != a[size - 1])
    cout << (size - 1) << endl;
}