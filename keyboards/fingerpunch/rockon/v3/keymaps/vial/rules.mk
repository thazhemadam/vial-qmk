VIA_ENABLE = yes
VIAL_ENABLE = yes
#VIAL_INSECURE = yes
VIAL_ENCODERS_ENABLE = no
ifeq ($(strip $(RGB_MATRIX_ENABLE)), yes)
   VIALRGB_ENABLE := yes  # not required, but enabling for mouse button keys
endif
VIALRGB_ENABLE = yes # this should be set in the feature specific rules.mk files
LTO_ENABLE = yes
QMK_SETTINGS = no

