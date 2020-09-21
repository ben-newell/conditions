#include <iostream>
int main() {
    int cmd = system("/usr/libexec/ApplicationFirewall/socketfilterfw --getglobalstate");
    std::cout << cmd << std::endl;
    return 0; } 