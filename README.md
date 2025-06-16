# ROV Brain

Firmware scaffolding for an underwater remotely operated vehicle (ROV) using an ESP32-C3.

## Features
- **Three Thrusters**
  - Two horizontal thrusters for forward/reverse propulsion and differential yaw control.
  - One vertical thruster mounted at the rear for pitch adjustment.
- **Orientation Sensing**
  - Uses an MPU6050 IMU to provide basic pitch, roll and yaw information.

## Building
This project uses [PlatformIO](https://platformio.org/) for building and uploading the firmware.

```bash
# install PlatformIO command line interface
pip install --user platformio

# build the firmware
pio run

# upload to the board
pio run --target upload
```

## Directory Structure
- `src/` - source files
- `include/` - header files
- `lib/` - private libraries
- `test/` - unit test scaffold
- `docs/` - design notes and documentation

See `docs/OVERVIEW.md` for a brief summary of the hardware layout.
