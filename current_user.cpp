#include <iostream>
int main() {
    int cmd = system("ps aux 2> /dev/null | grep [l]oginwindow | cut -d ' ' -f1");
    std::cout << cmd << std::endl;
    return 0; }
