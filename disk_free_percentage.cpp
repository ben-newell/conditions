#include <iostream>
int main() {

    int free_space       = system("/usr/sbin/diskutil info / | grep 'Container Free Space'");

    int vol_available    = system("/usr/sbin/diskutil info / | grep 'Volume Available Space'");

    int disk_size        = system("/usr/sbin/diskutil info / | grep 'Disk Size'");

    int container_total = system("/usr/sbin/diskutil info / | grep 'Container Total Space'");

    std::cout <<  free_space      << std::endl;
    std::cout <<  vol_available   << std::endl;
    std::cout <<  disk_size       << std::endl;
    std::cout <<  container_total << std::endl;
    return 0; }
