Requires: droid-config-%{rpm_device}-sailfish
Requires: droid-config-%{rpm_device}-pulseaudio-settings
Requires: droid-config-%{rpm_device}-policy-settings
Requires: droid-config-%{rpm_device}-preinit-plugin
Requires: droid-config-%{rpm_device}-flashing
Requires: droid-config-%{rpm_device}-bluez5
Requires: droid-hal-version-%{rpm_device}

Requires: sailfish-content-graphics-z%{pixel_ratio}

Requires: droid-hal-%{device}
Requires: droid-hal-%{device}-img-boot
Requires: droid-hal-%{device}-img-dtbo
Requires: droid-hal-%{device}-img-recovery
Requires: droid-hal-%{device}-tools

# Common packages

# Hybris packages
Requires: libhybris-libEGL
Requires: libhybris-libGLESv2
Requires: libhybris-libwayland-egl
Requires: libhybris-libOpenCL
Requires: libhybris-libvibrator

# Bluetooth
Requires: bluebinder

# Telephony
Requires: ofono-ril-binder-plugin

# NFC
Requires: nfcd-binder-plugin

# Sensors
Requires: hybris-libsensorfw-qt5

# Vibra
Requires: ngfd-plugin-native-vibrator
Requires: qt5-feedback-haptics-native-vibrator

# Needed for /dev/touchscreen symlink
Requires: qt5-plugin-generic-evdev

Requires: pulseaudio-modules-droid
Requires: pulseaudio-modules-droid-hidl
# for audio recording to work:
Requires: qt5-qtmultimedia-plugin-mediaservice-gstmediacapture

# These need to be per-device due to differing backends (fbdev, eglfs, hwc, ..?)
Requires: qt5-qtwayland-wayland_egl
Requires: qt5-qpa-hwcomposer-plugin
Requires: qtscenegraph-adaptation

# Add GStreamer v1.0 as standard
Requires: gstreamer1.0
Requires: gstreamer1.0-plugins-good
Requires: gstreamer1.0-plugins-base
Requires: gstreamer1.0-plugins-bad
Requires: nemo-gstreamer1.0-interfaces
# For devices with droidmedia and gst-droid built, see HADK pdf for more information
Requires: gstreamer1.0-droid

# either LD_PRELOAD libcameraservice is required or this (for camera):
Requires: audioflingerglue

# This is needed for notification LEDs
Requires: mce-plugin-libhybris

## USB mode controller
# Enables mode selector upon plugging USB cable:
Requires: usb-moded

# hammerhead, grouper, and maguro use this in scripts, so include for all
Requires: rfkill

# enable device lock and allow to select untrusted software
Requires: jolla-devicelock-daemon-encsfa

## Enable home encryption
#Requires: sailfish-device-encryption

# For GPS
Requires: geoclue-provider-hybris

# For suspend to work with enabled Wi-Fi on newer Qualcomm devices
Requires: sailfish-connman-plugin-suspend

# general patterns
Requires: patterns-sailfish-applications
Requires: patterns-sailfish-ui
Requires: patterns-sailfish-cellular-apps

Requires: jolla-settings-system-nfc
Requires: jolla-settings-system-flashlight

Requires: geoclue-provider-mlsdb
Requires: csd
Requires: mapplauncherd-booster-silica-qt5-media

Requires: patterns-sailfish-consumer-generic

# Early stages of porting benefit from these:
# On the basis of sailfish-porter-tools
Requires: jolla-developer-mode
Requires: sailfishsilica-qt5-demos
Requires: busybox-static
Requires: net-tools
Requires: openssh-clients
Requires: openssh-server
Requires: vim-enhanced
Requires: zypper
Requires: strace
Requires: jolla-rnd-device
Requires: libhybris-tests
# End sailfish-porter-tools

# 3rd party accounts like Twitter, VK, cloud services, etc
Requires: jolla-settings-accounts-extensions-3rd-party-all

## SELinux related
#Requires: libselinux-utils
#Requires: libselinux-utils-extra
#Requires: setools
#Requires: policycoreutils

%description
Meta package to install packages for %{rpm_device} configurations
%files
