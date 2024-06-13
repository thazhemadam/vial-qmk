# MCU name
MCU = RP2040
BOOTLOADER = rp2040

# ?? More features ??
# BOOTMAGIC_ENABLE = no       # Virtual DIP switch configuration
# EXTRAKEY_ENABLE = yes       # Audio control and System control
CONSOLE_ENABLE = yes        # Console for debug
# COMMAND_ENABLE = no        # Commands for debug and configuration
# # Do not enable SLEEP_LED_ENABLE. it uses the same timer as BACKLIGHT_ENABLE
# SLEEP_LED_ENABLE = no       # Breathing sleep LED during USB suspend
# # if this doesn't work, see here: https://github.com/tmk/tmk_keyboard/wiki/FAQ#nkro-doesnt-work
# NKRO_ENABLE = no            # USB Nkey Rollover
# BACKLIGHT_ENABLE = no       # Enable keyboard backlight functionality
# Either do RGBLIGHT_ENABLE or RGB_MATRIX_ENABLE and RGB_MATRIX_DRIVER
RGBLIGHT_ENABLE ?= no
RGB_MATRIX_ENABLE ?= no      # not supported yet, but will add
RGB_MATRIX_DRIVER = ws2812

SRC += keyboards/taz/kaizen/matrix.c
CUSTOM_MATRIX = lite
SPI_DRIVER_REQUIRED = yes

# FAUXCLICKY_ENABLE = no      # Use buzzer to emulate clicky switches TODO: borrow from fingerpunch firmware

AUDIO_ENABLE ?= no
AUDIO_DRIVER = pwm_hardware

VIK_ENABLE = yes
POINTING_DEVICE_ENABLE = yes
POINTING_DEVICE_DRIVER = pmw3360

VIK_EC11_EVQWGD001 ?= no
VIK_PMW3360 ?= no
VIK_TRACKPOINT ?= no
VIK_GC9A01 ?= no
VIK_WAVESHARE_22224 ?= no
VIK_HAPTIC ?= no

include keyboards/fingerpunch/src/vik/rules.mk
