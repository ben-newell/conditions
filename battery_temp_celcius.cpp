/usr/sbin/ioreg -r -n AppleSmartBattery | grep Temperature | cut -c23-
#include <iostream>
int main() {
    int cmd = system("/usr/sbin/ioreg -r -n AppleSmartBattery | grep Temperature | cut -c23-");
    std::cout << cmd << std::endl;
    return 0; }
// TODO: Convert the temperature here that gets outputted to Celsius/Fahrenheit.