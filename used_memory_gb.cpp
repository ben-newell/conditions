#include <iostream>
int main() {
  int cmd = system("vm_stat");
  std::cout << cmd << std::endl;
  return 0; }
