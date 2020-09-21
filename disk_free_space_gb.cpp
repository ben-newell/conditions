#include <iostream>
int main() {

    int free_space          = system("/usr/sbin/diskutil info / | grep 'Free Space'");

    int vol_available       = system("/usr/sbin/diskutil info / | grep 'Volume Available Space'");

    std::cout <<  free_space      << std::endl;
    std::cout <<  vol_available   << std::endl;
    
    return 0; }
