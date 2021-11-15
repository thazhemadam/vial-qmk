# barobord

An ergonomic 30% keyboard

* Keyboard Maintainer: [sadekbaroudi](https://github.com/sadekbaroudi)

Barobord supports vial! Build the via keymap as shown in the commands

To build the firmware for this keyboard (after setting up your build environment), select from one of the following, depending on what features you have on your board:

    make xoiviox/barobord/ec11:vial
    make xoiviox/barobord/evq:vial
    make xoiviox/barobord/no-features:vial
    make xoiviox/barobord/oled:vial
    make xoiviox/barobord/oled-ec11:vial
    make xoiviox/barobord/oled-evq:vial
    make xoiviox/barobord/pimoroni:vial
    make xoiviox/barobord/pimoroni-ec11:vial
    make xoiviox/barobord/pimoroni-evq:vial
    make xoiviox/barobord/readme.md:vial
    make xoiviox/barobord/rgblight:vial
    make xoiviox/barobord/rgblight-oled-ec11:vial
    make xoiviox/barobord/rgblight-oled-evq:vial
    make xoiviox/barobord/rgblight-pimoroni-ec11:vial
    make xoiviox/barobord/rgblight-pimoroni-evq:vial
    make xoiviox/barobord/rgbmatrix:vial
    make xoiviox/barobord/rgbmatrix-oled-ec11:vial
    make xoiviox/barobord/rgbmatrix-oled-evq:vial
    make xoiviox/barobord/rgbmatrix-pimoroni-ec11:vial
    make xoiviox/barobord/rgbmatrix-pimoroni-evq:vial

Example of flashing this keyboard:

    make xoiviox/barobord/no-features:vial:flash


Once you have completed the build, flash it onto your keyboard. At this point, make sure you have [Vial](https://get.vial.today/) installed. You should be able to edit your keymap directly from your machine!

See the [build environment setup](https://docs.qmk.fm/#/getting_started_build_tools) and the [make instructions](https://docs.qmk.fm/#/getting_started_make_guide) for more information. Brand new to QMK? Start with our [Complete Newbs Guide](https://docs.qmk.fm/#/newbs).
