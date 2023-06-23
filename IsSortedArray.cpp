#include <iostream>
using namespace std;

int main() {
  int array[] = {4, 7, 10, 12, 100};
  size_t size = sizeof(array) / array[0];
  cout << "size is : " << size << endl;
  bool flag = true;
  for (int i = 1; i < size; i++) {
    if (array[i] < array[i - 1])
      flag = false;
  }
  cout << flag << endl;
  return 0;
}