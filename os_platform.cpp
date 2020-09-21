#include <iostream>
int main() {
    int cmd = system("uname -a");
    std::cout << cmd << std::endl;
    return 0; } 