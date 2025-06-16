# ROV Brain


This project uses PlatformIO with the Arduino framework to control an ROV. A
`ThrusterController` library is provided to manage a pair of thrusters.

## ThrusterController

The controller is initialised with the pins connected to the left and right
thruster ESCs:

```cpp
#include <ThrusterController.h>

ThrusterController thrusters(leftPin, rightPin);
```

Call `begin()` in `setup()` and then provide separate left and right thrust
values with `setThrust(left, right)`.

A convenience function `setThrustYaw(thrust, yaw)` can be used when you want to
specify a forward thrust along with a yaw component. The controller will compute
individual thruster values from these parameters.

Both `thrust` and `yaw` (and the left/right values) are expected to be in the
range `[-1.0, 1.0]`. Internally these values are mapped to the PWM duty cycle on
the configured pins.

## Building

To build the firmware run:

```bash
pio run
```

PlatformIO will automatically build the library from the `lib` directory.

