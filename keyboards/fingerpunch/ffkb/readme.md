# ffkb

An ergonomic 30% keyboard

* Keyboard Maintainer: [sadekbaroudi](https://github.com/sadekbaroudi)

Faux fox keyboard (ffkb) supports vial!

Once you have completed the build, flash it onto your keyboard. At this point, make sure you have [Vial](https://get.vial.today/) installed. You should be able to edit your keymap directly from your machine without having to re-flash it!

IMPORTANT: If you are using anything that is not rgbmatrix from the list below, you will need to edit keymaps/vial/vial.json and remove the line shown below:
```
     "matrix": {"rows": 4, "cols": 12},
 --> "lighting": "vialrgb",
     "layouts": {
```

Make example for this keyboard (after setting up your build environment):

    make fingerpunch/ffkb/ec11:vial
    make fingerpunch/ffkb/ec11_evq:vial
    make fingerpunch/ffkb/evq:vial
    make fingerpunch/ffkb/no_features:vial
    make fingerpunch/ffkb/oled:vial
    make fingerpunch/ffkb/oled_ec11:vial
    make fingerpunch/ffkb/oled_evq:vial
    make fingerpunch/ffkb/pimoroni:vial
    make fingerpunch/ffkb/pimoroni_ec11:vial
    make fingerpunch/ffkb/pimoroni_evq:vial
    make fingerpunch/ffkb/rgblight:vial
    make fingerpunch/ffkb/rgblight_ec11:vial
    make fingerpunch/ffkb/rgblight_ec11_evq:vial
    make fingerpunch/ffkb/rgblight_evq:vial
    make fingerpunch/ffkb/rgblight_oled:vial
    make fingerpunch/ffkb/rgblight_oled_ec11:vial
    make fingerpunch/ffkb/rgblight_oled_evq:vial
    make fingerpunch/ffkb/rgblight_pimoroni:vial
    make fingerpunch/ffkb/rgblight_pimoroni_ec11:vial
    make fingerpunch/ffkb/rgblight_pimoroni_evq:vial
    make fingerpunch/ffkb/rgbmatrix:vial
    make fingerpunch/ffkb/rgbmatrix_ec11:vial
    make fingerpunch/ffkb/rgbmatrix_ec11_evq:vial
    make fingerpunch/ffkb/rgbmatrix_evq:vial
    make fingerpunch/ffkb/rgbmatrix_oled:vial
    make fingerpunch/ffkb/rgbmatrix_oled_ec11:vial
    make fingerpunch/ffkb/rgbmatrix_oled_evq:vial
    make fingerpunch/ffkb/rgbmatrix_pimoroni:vial
    make fingerpunch/ffkb/rgbmatrix_pimoroni_ec11:vial
    make fingerpunch/ffkb/rgbmatrix_pimoroni_evq:vial

Example of flashing this keyboard:

    make fingerpunch/ffkb/rgblight_oled_ec11:vial:flash

See the [build environment setup](https://docs.qmk.fm/#/getting_started_build_tools) and the [make instructions](https://docs.qmk.fm/#/getting_started_make_guide) for more information. Brand new to QMK? Start with our [Complete Newbs Guide](https://docs.qmk.fm/#/newbs).
