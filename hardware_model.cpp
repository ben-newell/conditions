#include <iostream>
int main() {
    int cmd = system("/usr/sbin/sysctl hw.model");
    std::cout << cmd << std::endl;
    return 0; } 