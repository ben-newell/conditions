#include <iostream>
int main() {
    int cmd = system("system_profiler SPHardwareDataType | grep 'Processor Speed'");
    std::cout << cmd << std::endl;
    return 0; }
