#include <iostream>
int main() {
    int cmd = system("/usr/sbin/spctl --status");
    std::cout << cmd << std::endl;
    return 0; } 