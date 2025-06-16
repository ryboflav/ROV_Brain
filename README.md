# ROV Brain

Firmware project for the ROV control board using PlatformIO and the ESP32-C3.

## Build Instructions

1. Install [PlatformIO](https://platformio.org/).
2. Clone this repository.
3. Run `pio run` from the project root or use the PlatformIO IDE to build.

PlatformIO will automatically fetch libraries listed in `platformio.ini`. The
current configuration requires the [i2cdevlib/MPU6050](https://registry.platformio.org/libraries/i2cdevlib/MPU6050) library.
