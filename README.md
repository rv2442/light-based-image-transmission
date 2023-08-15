# Light-based Image Transmission

This project involves using two Arduino boards to transmit data using light signals. One Arduino sends binary data to another Arduino via a torch. The receiving Arduino decodes the light signals and reconstructs the original data, which is then converted back into an image using a Python script.

## Table of Contents
- [Components](#components)
- [Setup](#setup)
- [Usage](#usage)
- [Contributing](#contributing)
- [License](#license)

## Components
- 2 x Arduino Boards (Uno, Nano, etc.)
- 1 x Torch (LED)
- 1 x Light Dependent Resistor (LDR)
- 1 x Computer with Python 3.x installed

## Setup
1. **Hardware Setup**:
   - Connect the components as shown in the circuit diagrams provided in the `arduino_sender.ino` and `arduino_receiver.ino` files.
   - Ensure the torch is appropriately connected to the sender Arduino.
   - Place the LDR in a location where it can detect the light signals from the torch and connect it to the receiver Arduino.

2. **Arduino Code**:
   - Upload the `arduino_sender.ino` code to one Arduino.
   - Upload the `arduino_receiver.ino` code to the other Arduino.

3. **Python Script**:
   - Install the required Python libraries by running: `pip install pyserial pillow`.
   - Replace `'COMX'` in the `python_receiver.py` script with the actual COM port where the receiver Arduino is connected.
   - Run the Python script using `python python_receiver.py`.

## Usage
1. Power on both Arduino boards.
2. Run the Python script on your computer.
3. Press the button on the sender Arduino to start transmitting the base64-encoded image data via light signals.
4. The receiver Arduino will detect the light signals and reconstruct the data.
5. The Python script will decode the received data and display the image.

## Demo
[![image](https://github.com/rv2442/light-based-image-transmission/assets/69571769/cc9fc5f9-9a99-4ca3-b6c3-47ece84beb3d)](https://youtu.be/5WTtBRAi60c)


## Contributing
Contributions to this project are welcome! If you find any issues or improvements, please feel free to open an issue or submit a pull request.

## License
This project is licensed under the [MIT License](LICENSE).

---

**Note**: This project is designed for educational and experimental purposes. The reliability and performance of the data transmission may vary based on environmental conditions and hardware components. Use this project at your own risk.
