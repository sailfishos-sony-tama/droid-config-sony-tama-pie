%define device akari
%define rpm_device h8216

# specify to match available ration of sailfish-content-graphics-z{} packages
%define pixel_ratio 1.75

Name: jolla-configuration-%{rpm_device}
Summary: Jolla Configuration %{rpm_device}
Version: 0.0.1
Release: 1
License: BSD-3-Clause
Source: %{name}-%{version}.tar.gz

%include jolla-configuration-tama.inc
