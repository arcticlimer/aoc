// gcc -o main A.cpp -lstdc++

#include <iostream>

int main() {
  int numberOfBits, gamma, epsilon;
  std::string x;
  char c;
  int bits[256] = {0};

  gamma = epsilon = 0;

  // Storing info about the bits
  while (std::cin >> x) {
    numberOfBits = x.length();

    for (int i = 0; i < numberOfBits; i++) {
      if (x[i] == '1') {
        bits[i]++;
      } else {
        bits[i]--;
      }
    }
  }

  // Building gamma and epsilon
  for (int i = 0; i < numberOfBits; i++) {
    if (bits[i] > 0) {
      gamma |= 1 << (numberOfBits - i - 1);
    } else {
      epsilon |= 1 << (numberOfBits - i - 1);
    }
  }
  std::cout << gamma * epsilon << std::endl;
}
