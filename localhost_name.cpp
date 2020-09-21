#include <iostream>
int main() {
    int cmd = system("scutil --get LocalHostName");
    std::cout << cmd << std::endl;
    return 0; } 