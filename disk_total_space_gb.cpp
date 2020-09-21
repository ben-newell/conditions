#include <iostream>
int main() {
    int cmd = system("/usr/sbin/diskutil info / | grep 'Container Total Space'");
    int cmd_two = system("/usr/sbin/diskutil info / | grep 'Container Free Space'");
    std::cout << cmd << std::endl;
    std::cout << cmd_two << std::endl;
    return 0; }
