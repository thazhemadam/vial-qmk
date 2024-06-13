#pragma once

#ifdef VIK_ENABLE
#include "keyboards/fingerpunch/src/config_pre.h"
#endif

#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_TIMEOUT 220U

#define SPI_DRIVER SPID0
#define SPI_SCK_PIN GP2
#define SPI_MOSI_PIN GP3
#define SPI_MISO_PIN GP4

#define SPI_LATCH_PIN GP5
#define SPI_MODE 3
#define SPI_lsbFirst false
#define SPI_DIVISOR 8

#define COLS {0x0001, 0x0002, 0x0004, 0x0008, 0x0010, 0x0020, 0x0040, 0x0080}

#define I2C_DRIVER I2CD0
#define I2C0_SDA_PIN GP0
#define I2C0_SCL_PIN GP1

#define POINTING_DEVICE_CS_PIN GP9

// TODO: Add RGB support
// #define WS2812_DI_PIN GP13

#ifdef VIK_ENABLE
#define VIK_SPI_DRIVER    SPID0
#define VIK_SPI_SCK_PIN   GP2
#define VIK_SPI_MOSI_PIN  GP3
#define VIK_SPI_MISO_PIN  GP4
#define VIK_SPI_CS        GP9
#define VIK_I2C_DRIVER    I2CD0
#define VIK_I2C_SDA_PIN   GP0
#define VIK_I2C_SCL_PIN   GP1
#define VIK_GPIO_1        GP28
#define VIK_GPIO_2        GP29
#define VIK_WS2812_DI_PIN GP13

#ifdef VIK_EC11_EVQWGD001
#define ENCODERS_PAD_A { GP28 }
#define ENCODERS_PAD_B { GP29 }
#endif

#endif



/*
FINGERPUNCH AUDIO FEATURE - https://github.com/sadekbaroudi/qmk_firmware/blob/c6ac077baf2ab88b55f3fd53c840394ba0dc0cbe/keyboards/fingerpunch/vulpes_minora/rp2040zero/config.h
#ifdef AUDIO_ENABLE
    #define AUDIO_VOICES
    #define AUDIO_PIN GP10
    #define AUDIO_PWM_DRIVER PWMD6
    #define AUDIO_PWM_CHANNEL RP2040_PWM_CHANNEL_A
    #define AUDIO_ENABLE_TONE_MULTIPLEXING
    #define AUDIO_TONE_MULTIPLEXING_RATE_DEFAULT 10
    #define FP_AUDIO_MOUSE_BUTTONS
    #define FP_AUDIO_CUT_COPY_PASTE
    #define FP_AUDIO_SAVE
    #define FP_STARTUP_DARK  HALF_DOT_NOTE(_B5), QUARTER_NOTE(_B5), HALF_NOTE(_E6), HALF_NOTE(_REST), QUARTER_NOTE(_C6), QUARTER_NOTE(_REST), QUARTER_NOTE(_G5), QUARTER_NOTE(_E5), QUARTER_NOTE(_F5), QUARTER_NOTE(_GS5), QUARTER_NOTE(_G5), QUARTER_NOTE(_F5), WHOLE_NOTE(_G5),
    #define STARTUP_SONG SONG(FP_STARTUP_DARK)
    #define DEFAULT_LAYER_SONGS \
        { SONG(QWERTY_SOUND), SONG(COLEMAK_SOUND) }
#endif

*/

#ifdef VIK_ENABLE
#include "keyboards/fingerpunch/src/config_post.h"
#endif
