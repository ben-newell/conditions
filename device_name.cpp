#include <iostream>
int main() {
    int cmd = system("hostname");
    std::cout << cmd << std::endl;
    return 0; }
