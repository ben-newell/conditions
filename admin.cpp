#include <iostream>
int main() {
    int cmd = system("dscl . -read /Groups/admin GroupMembership"); 
    std::cout << cmd << std::endl;
    return 0; }
