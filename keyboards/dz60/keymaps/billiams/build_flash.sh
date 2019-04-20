# dfu-programmer atmega32u4 erase --force
# dfu-programmer atmega32u4 flash /path/to/firmware.hex
# dfu-programmer atmega32u4 reset

<<<<<<< HEAD
# run this in the qmk_firmware directory
make dz60:billiams
dfu-programmer atmega32u4 erase --force && \
dfu-programmer atmega32u4 flash dz60_billiams.hex && \
=======
make dz60:billiams
dfu-programmer atmega32u4 erase --force && \
dfu-programmer atmega32u4 flash .build/dz60_billiams.hex && \
>>>>>>> 156fd4e96... Initial commit
dfu-programmer atmega32u4 reset