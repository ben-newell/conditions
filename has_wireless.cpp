#include <iostream>
int main() {
    int cmd = system("networksetup -listallhardwareports | grep -E '(Wi-Fi|AirPort)' -A 1 | grep -o en.");
    std::cout << cmd << std::endl;
    return 0; } 