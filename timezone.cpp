#include <iostream>
int main() {
  int cmd = system("/usr/sbin/systemsetup -gettimezone");
  std::cout << cmd << std::endl;
  return 0; }
