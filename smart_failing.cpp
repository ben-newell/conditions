#include <iostream>
int main() {
  int cmd = system("/usr/sbin/diskutil info disk0 | grep 'SMART Status:'");
  std::cout << cmd << std::endl;
  return 0; }
