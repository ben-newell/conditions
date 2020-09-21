#include <iostream>
int main() {
    int cmd = system("/usr/bin/grep -h -r --include = 'history.log.*' --include = 'backup_files.log.*' 'Completed backup to' '/Library/Logs/CrashPlan/'");
    std::cout << cmd << std::endl;
    return 0; }
