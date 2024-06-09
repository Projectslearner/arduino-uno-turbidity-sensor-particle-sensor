# Turbidity Sensor with LED Indicator

#### Project Overview

This project utilizes a turbidity sensor to measure the clarity of water by detecting the presence of suspended particles. An LED is used to indicate whether the water is clean or dirty based on a predefined turbidity threshold value.

#### Components Needed

1. **Arduino Uno**
2. **Turbidity Sensor**
3. **LED**
4. **Resistor (for the LED)**
5. **Jumper Wires**

### Block Diagram



#### Pin Connections

- **Turbidity Sensor:**
  - Analog Output: Connect to analog pin A0 (turbidityPin) on the Arduino Uno.
  - VCC: Connect to Arduino 5V or 3.3V (check sensor specifications).
  - GND: Connect to Arduino GND.

- **LED:**
  - Anode (+): Connect to digital pin 13 (ledPin) on the Arduino Uno through a current-limiting resistor (e.g., 220Ω).
  - Cathode (-): Connect to Arduino GND.

#### Instructions

1. **Set Up the Circuit:**
   - Connect the analog output of the turbidity sensor to analog pin A0 (turbidityPin) on the Arduino Uno.
   - Connect the LED's anode (positive) pin to digital pin 13 (ledPin) on the Arduino Uno, and its cathode (negative) pin to GND through a current-limiting resistor.

2. **Initialize the System:**
   - Set the turbidityPin as an input and the ledPin as an output in the setup function.
   - Initialize serial communication at a baud rate of 9600.

3. **Read Turbidity Value:**
   - Continuously read the analog value from the turbidity sensor using `analogRead(turbidityPin)` in the loop function.

4. **Check Turbidity Level:**
   - Compare the turbidity value with the predefined threshold value (`threshold`).
   - If the turbidity value exceeds the threshold, turn on the LED to indicate dirty water; otherwise, turn it off to indicate clean water.

5. **Output Results:**
   - Print the turbidity value to the serial monitor for real-time monitoring.
   - Print messages indicating whether the water is clean or dirty based on the turbidity level.

6. **Adjust Threshold:**
   - Modify the `threshold` value according to the sensitivity of the turbidity sensor and the desired turbidity level for water cleanliness.

#### Applications

- **Water Quality Monitoring:** Use the setup to monitor the turbidity of water in various applications, such as aquariums, swimming pools, or environmental monitoring systems.
- **Water Treatment Systems:** Implement turbidity sensing in water treatment systems to ensure water quality standards are met.
- **Research and Education:** Utilize the project for educational purposes or research related to water quality and environmental science.

#### Notes

- Ensure proper calibration of the turbidity sensor for accurate readings.
- Adjust the delay time according to the desired frequency of turbidity measurements and LED indication responsiveness.

---

🌐 [projectslearner.com](https://projectslearner.com)  
📧 [projectslearner@gmail.com](mailto:projectslearner@gmail.com)  
📸 [Instagram](https://www.instagram.com/projectslearner/)  
📘 [Facebook](https://www.facebook.com/projectslearner)  
▶️ [YouTube](https://www.youtube.com/@ProjectsLearner)  
📘 [LinkedIn](https://www.linkedin.com/in/projectslearner)  

Made for you with ❣️ from ProjectsLearner