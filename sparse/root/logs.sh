#!/bin/sh

journalctl -b > /root/journal.$1.log
df -a -h > /root/df.$1.log
/usr/libexec/droid-hybris/system/bin/logcat -d -b all > /root/logcat.$1.log
dmesg > /root/dmesg.$1.log
#ls -lR /config > /root/ls-lR.config.$1.log
#ls -lR /sys > /root/ls-lR.sys.$1.log
#ls -lR /dev > /root/ls-lR.dev.$1.log
#ls /proc > /root/ls.proc.$1.log
