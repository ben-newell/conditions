#include <iostream>
int main() {
    int cmd = system("/usr/bin/fdesetup status");
    std::cout << cmd << std::endl;
    return 0; } 
