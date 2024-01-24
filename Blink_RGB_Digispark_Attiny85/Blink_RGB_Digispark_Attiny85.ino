/*
   README for Digispark RGB Blink Program

   This Arduino sketch is designed to control an RGB LED with a common ground using a Digispark board. It will alternate between red, green, and blue colors with a fast blink.

   Installation and Setup:

   1. Arduino IDE:
      - Ensure you have the Arduino IDE installed. If not, download and install it from https://www.arduino.cc/en/software.

   2. Add Digispark URL to Arduino IDE:
      - Open Arduino IDE, go to File > Preferences.
      - In the "Additional Boards Manager URLs" field, add the following URL:
        http://digistump.com/package_digistump_index.json
      - If there are other URLs, separate this URL with a comma.

   3. Install Digistump Boards:
      - Go to Tools > Board > Boards Manager.
      - Search for "Digistump".
      - Install "Digistump AVR Boards".

   4. Selecting Digispark Board:
      - Go to Tools > Board and select "Digispark (Default - 16.5MHz)".

   5. Install Digispark Drivers (Windows Only):
      - Download drivers from https://github.com/digistump/DigistumpArduino/releases.
      - Run the `Install Drivers.exe` and follow the instructions.

   Hardware Setup:
   - Connect the Red pin of the RGB LED to Pin 0 of Digispark.
   - Connect the Green pin to Pin 1.
   - Connect the Blue pin to Pin 2.
   - Use current-limiting resistors (220-330 Ohms) for each LED pin.
   - Common ground of the RGB LED should be connected to the ground of Digispark.

   Uploading to Digispark:
   - Write or paste this program in the Arduino IDE.
   - Click on the upload button.
   - Plug in the Digispark board when the IDE prompts for it.

   Note:
   - Adjust `blinkInterval` in the code for changing the blinking speed.
   - Ensure the RGB LED and Digispark are correctly connected to prevent damage.

   Author: Brian Olasya
   License: @olasya2024
   Contact: olasyabrian@gmail.com
*/

// Define RGB LED pins
const int redPin = 0;    // Red LED connected to pin 0
const int greenPin = 1;  // Green LED connected to pin 1
const int bluePin = 2;   // Blue LED connected to pin 2

// Blinking interval in milliseconds
const int blinkInterval = 700; // Fast blink interval

void setup() {
  // Set RGB LED pins as output
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
}

void loop() {
  // Red
  setColor(HIGH, LOW, LOW); // Turn on the red LED
  delay(blinkInterval);
  
  // Green
  setColor(LOW, HIGH, LOW); // Turn on the green LED
  delay(blinkInterval);
  
  // Blue
  setColor(LOW, LOW, HIGH); // Turn on the blue LED
  delay(blinkInterval);
}

// Function to set the LED color
void setColor(bool redState, bool greenState, bool blueState) {
  digitalWrite(redPin, redState);
  digitalWrite(greenPin, greenState);
  digitalWrite(bluePin, blueState);
}
