#include <iostream>
int main() {
  int cmd = system("du -sm /private/tmp");
  std::cout << cmd << std::endl;
  return 0; }
