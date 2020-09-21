#include <iostream>
int main() {
  int cmd = system("/usr/sbin/sysctl kern.boottime");
  std::cout << cmd << std::endl;
  return 0; }
