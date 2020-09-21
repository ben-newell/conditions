#include <iostream>
int main() {
  int cmd = system("system_profiler SPSoftwareDataType | grep 'System Version'");
  std::cout << cmd << std::endl;
  return 0; }
