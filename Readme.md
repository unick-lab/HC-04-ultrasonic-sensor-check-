# Ultrasonic Distance Measurement using Arduino

A simple Arduino project that measures distance using an HC-SR04 Ultrasonic Sensor and displays the measured distance in centimeters on the Serial Monitor.

---

# Features

- Real-time distance measurement
- Uses HC-SR04 ultrasonic sensor
- Serial Monitor output
- Beginner-friendly Arduino project
- Simple and lightweight code

---

# Components Required

| Component | Quantity |
|---|---|
| Arduino UNO/Nano | 1 |
| HC-SR04 Ultrasonic Sensor | 1 |
| Jumper Wires | Several |
| Breadboard | 1 |

---

# Circuit Connections

| HC-SR04 Pin | Arduino Pin |
|---|---|
| VCC | 5V |
| GND | GND |
| TRIG | A0 |
| ECHO | A1 |

# Installation

## 1. Install Arduino IDE

Download Arduino IDE:

https://www.arduino.cc/en/software

---

## 2. Connect the Hardware

Connect the HC-SR04 ultrasonic sensor according to the circuit table above.

---

## 3. Upload the Code

1. Open Arduino IDE
2. Copy the code into a new sketch
3. Select your Arduino board
4. Select the correct COM port
5. Click Upload

---

# How It Works

1. The Arduino sends a short pulse from the TRIG pin.
2. The ultrasonic sensor emits sound waves.
3. The waves bounce back after hitting an object.
4. The ECHO pin receives the reflected signal.
5. Arduino calculates the travel time.
6. Distance is computed using the speed of sound formula.

---

# Distance Formula

text Distance = (Time × Speed of Sound) / 2 

Where:

- Speed of sound = 0.034 cm/µs
- Division by 2 accounts for the round trip

---

# Example Output

text Distance: 12 cm Distance: 15 cm Distance: 14 cm 

---

# Applications

- Obstacle detection
- Distance measurement systems
- Smart parking systems
- Robotics
- Water level monitoring
- Automation projects

---

# Troubleshooting

## No Output on Serial Monitor

- Check COM port
- Verify baud rate is 9600
- Ensure wiring is correct

## Incorrect Distance Values

- Remove obstacles causing interference
- Check sensor connections
- Ensure stable power supply

## Sensor Not Detecting Objects

- Verify TRIG and ECHO pins
- Make sure the object is within sensor range

---

# Future Improvements

- Add LCD display
- Add buzzer alerts
- Wireless monitoring
- IoT integration
- OLED display support

---

# License

This project is open-source and free for educational and personal use.

---

# Author

Unick-lab