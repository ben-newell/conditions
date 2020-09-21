#include <iostream>
int main() {
    int cmd = system("/usr/sbin/ioreg -n IODisplayWrangler | /usr/bin/grep -i IOPowerManagement | perl -pe 's/^.*DevicePowerState\"=([0-9]+).*$/\\1/'");
    std::cout << cmd << std::endl;
    return 0; } // 4 is 'True'.
