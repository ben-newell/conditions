#include <iostream>
int main() {
    //
    int DESIGN_CAPACITY = system("/usr/sbin/ioreg -r -c 'AppleSmartBattery' | /usr/bin/grep 'DesignCapacity' | /usr/bin/awk '{print $3}'");
    int MAX_CAPACITY = system("/usr/sbin/ioreg -r -c 'AppleSmartBattery' | /usr/bin/grep 'MaxCapacity' | /usr/bin/awk '{print $3}'");
    //
    std::cout << DESIGN_CAPACITY << MAX_CAPACITY << std::endl;
    // int per = 100 - (MAX_CAPACITY*100) / DESIGN_CAPACITY;
    // std::cout << per << std::endl;
    return 0;
    }

