#!/bin/sh

# Copy backup partition (vendor_a) to vendor_b
dd if=/dev/block/sda41 of=/dev/block/sda51 bs=1M

