#include <iostream>
int main() {
    int cmd = system("system_profiler SPDisplaysDataType | grep Serial | awk '{print $4}'");
    std::cout << cmd << std::endl;
    return 0; } 
    