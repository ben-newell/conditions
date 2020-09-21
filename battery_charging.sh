#!/usr/bin/env bash

# This is and can be confusing to run and read the output of. If you use your computer everyday like
# me then you will always have it plugged in. That however will surely keep the battery at 100% all
# the time. This will cause a "No" and can be confusing.
/usr/sbin/ioreg -r -c 'AppleSmartBattery' | /usr/bin/grep -w 'IsCharging' | /usr/bin/awk '{print $3}'
