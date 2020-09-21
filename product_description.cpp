#include <iostream>
int main() {
    int cmd = system("/usr/sbin/ioreg -l | grep IOPlatformSerialNumber");
    std::cout << cmd << std::endl;
    return 0; }
