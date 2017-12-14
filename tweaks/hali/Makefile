ARCHS = arm64
TARGET = iPhone:latest:7.0
THEOS_DEVICE_IP = localhost
THEOS_DEVICE_PORT = 2222

include $(THEOS)/makefiles/common.mk

TWEAK_NAME = hali
hali_FILES = $(wildcard src/*.m) src/Tweak.xm
hali_FRAMEWORKS = UIKit

include $(THEOS_MAKE_PATH)/tweak.mk

after-install::
	install.exec "killall -9 iAliexpress"
