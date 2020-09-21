#include <iostream>
int main() {
    int CURRENT_CAPACITY = system("ioreg -r -c 'AppleSmartBattery' | grep -w 'CurrentCapacity' | awk '{print $3}'");
    int MAX_CAPACITY = system("ioreg -r -c 'AppleSmartBattery' | grep -w 'MaxCapacity' | awk '{print $3}'")
    std::cout << MAX_CAPACITY << std::endl;
    std::cout << CURRENT_CAPACITY << std::endl;
    return 0; }
