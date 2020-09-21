#include <iostream>
int main() {
  int cmd = system("/usr/sbin/networksetup -listnetworkserviceorder | grep 'Hardware Port: Wi-Fi'");
  std::cout << cmd << std::endl;
  return 0; }
