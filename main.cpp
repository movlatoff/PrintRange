#include <iostream>

template <typename Iterator>
void PrintRange(Iterator begin, Iterator end) {
  bool space = true;
  for (auto beg = begin; beg != end; ++beg) {
    if (!space) {
      std::cout << " ";
    }
    std::cout << *beg;
    space = false;
  }
  std::cout << '\n';
}

int main() {
  std::cout << "Hello, World!" << std::endl;
  return 0;
}
