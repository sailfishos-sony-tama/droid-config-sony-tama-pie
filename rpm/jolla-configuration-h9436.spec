%include rpm/header-h9436.inc

Name: jolla-configuration-%{rpm_device}
Summary: Jolla Configuration %{rpm_device}
Version: 0.0.1
Release: 1
License: BSD-3-Clause
Source: %{name}-%{version}.tar.gz

# For multi-SIM devices
Requires: jolla-settings-networking-multisim

%include jolla-configuration-tama.inc
