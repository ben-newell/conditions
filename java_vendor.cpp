#include <iostream>
int main() {
    int cmd = system("/usr/bin/defaults read '/Library/Internet Plug-Ins/JavaAppletPlugin.plugin/Contents/Info' CFBundleIdentifier 2>/dev/null");
    std::cout << cmd << std::endl;
    return 0; } 