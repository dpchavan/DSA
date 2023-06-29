// Majority element is the element which occures more than n/2 times
#include <iostream>
using namespace std;
int main() {
  int a[] = {2, 6, 1, 8, 8, 8, 7, 8, 8};
  int candidate = -1, votes = 0;
  int size = sizeof(a) / sizeof(a[0]);
  cout << "[";
  for (auto x : a)
    cout << x << " ";
  cout << "]";
  cout << endl;
  // finding out candidate
  for (int i = 0; i < size; i++) {
    if (votes == 0) {
      candidate = a[i];
      votes = 1;
    } else {
      if (a[i] == candidate)
        votes++;
      else
        votes--;
    }
  }
  // check if majority element accours more that n/2 time or not
  int count = 0;
  for (int i = 0; i < size; i++) {
    if (a[i] == candidate)
      count++;
  }
  if (count > (size / 2))
    cout << candidate << endl;
  else
    cout << -1 << endl;
  return 0;
}