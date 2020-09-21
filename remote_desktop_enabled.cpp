#include <iostream>
int main() {
    int cmd = system("ps ax | grep -v grep | grep ARDAgent");
    std::cout << cmd << std::endl;
    return 0; }
