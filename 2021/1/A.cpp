// gcc -o main A.cpp -lstdc++

#include <iostream>

int main() {
  int prev;
  int m;
  int res = 0;
  std::cin >> prev;
  while (std::cin >> m) {
    if (prev < m) {
      res++;
    }
    prev = m;
  }
  std::cout << res << std::endl;
}
