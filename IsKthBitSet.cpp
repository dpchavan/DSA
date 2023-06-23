#include <iostream>
using namespace std;
int main() {
  int n = 0, k = 0;
  std::cout << "Enter inputs :";
  std::cin >> n >> k;
  if (n & (1 << (k - 1))) { // ( n >> (k - 1) ) & 1
    std::cout << "Yes" << endl;
  } else {
    std::cout << "No" << endl;
  }
}