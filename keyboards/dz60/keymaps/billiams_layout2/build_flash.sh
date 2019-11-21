# dfu-programmer atmega32u4 erase --force
# dfu-programmer atmega32u4 flash /path/to/firmware.hex
# dfu-programmer atmega32u4 reset

<<<<<<< HEAD
<<<<<<< HEAD
# run this in the qmk_firmware directory
make dz60:billiams_layout2
dfu-programmer atmega32u4 erase --force && \
<<<<<<< HEAD:keyboards/dz60/keymaps/billiams/build_flash.sh
dfu-programmer atmega32u4 flash dz60_billiams.hex && \
=======
make dz60:billiams
dfu-programmer atmega32u4 erase --force && \
dfu-programmer atmega32u4 flash .build/dz60_billiams.hex && \
>>>>>>> 156fd4e96... Initial commit
=======
# run this in the qmk_firmware directory
make dz60:billiams
dfu-programmer atmega32u4 erase --force && \
dfu-programmer atmega32u4 flash dz60_billiams.hex && \
>>>>>>> cd379c69a... Modified keymap and updated readme.
dfu-programmer atmega32u4 reset
=======
dfu-programmer atmega32u4 flash dz60_billiams_layout2.hex && \
dfu-programmer atmega32u4 reset
>>>>>>> 6bcaf01c3... add layout 2 and rename existing folder to layout 4:keyboards/dz60/keymaps/billiams_layout2/build_flash.sh
