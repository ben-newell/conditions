#include <iostream>
int main() {
    int cmd = system("grep \"Kernel Panic\" /var/log/system.log");
    std::cout << cmd << std::endl;
    return 0; } 