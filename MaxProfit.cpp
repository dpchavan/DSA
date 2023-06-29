/*stock buy and sell problem
We will find out maxumum profit such that
[2,5,3,8,12]
We will buy stock as 3 and sell at 5 so profit is 5-3 = 2
Again buy at 3 and sell at 12 so profit is 12-3 = 9
Total profit is 2 + 9 = 11
*/
#include <iostream>
using namespace std;
int main() {
  int profit = 0;
  int a[] = {1, 5, 3, 8, 12};
  int size = sizeof(a) / sizeof(a[0]);
  for (int i = 1; i < size; i++) {
    if (a[i] > a[i - 1])
      profit += a[i] - a[i - 1];
  }
  cout << "Max Profit: " << profit << endl;
}