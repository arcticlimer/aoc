// gcc -o main B.cpp -lstdc++

#include <deque>
#include <iostream>

int sumDequeMembers(std::deque<int> *d) {
  int res = 0;
  for (int i = 0; i < d->size(); i++) {
    res += d->at(i);
  }
  return res;
}

int main() {
  std::deque<int> window;
  int resres = 0;
  int res;
  int prev;
  int x;

  for (int i = 0; i < 3; i++) {
    std::cin >> x;
    window.push_back(x);
  }

  prev = sumDequeMembers(&window);
  window.pop_front();

  while (std::cin >> x) {
    window.push_back(x);
    res = sumDequeMembers(&window);
    window.pop_front();

    if (res > prev) {
      resres++;
    }

    prev = res;
  }

  std::cout << resres << std::endl;
}
