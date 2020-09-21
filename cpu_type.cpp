#include <iostream>
int main() {
    int cmd = system("system_profiler SPHardwareDataType | grep 'Processor Name'");
    std::cout << cmd << std::endl;
    return 0; }
