#include <iostream>
int main() {
    int cmd = system("system_profiler SPHardwareDataType | grep 'Model Name'");
    std::cout << cmd << std::endl;
    return 0; }
