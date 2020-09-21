#include <iostream>
int main() {
  int cmd = system("/usr/sbin/systemsetup getremotelogin");
  std::cout << cmd << std::endl;
  return 0; }
