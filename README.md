Empowering Independence Through Intelligent Obstacle Detection & Real-Time Feedback.
<br> </br>
<img width="1480" height="2100" alt="zine" src="https://github.com/user-attachments/assets/aff96d2d-918c-4570-a108-2287b14d7b2a" />


<h1>WHAT Is BlindNav?</h1>
Blindnav is a smart assistive blind stick designed to enhance the mobility, safety and independence of visually impaired individuals. Unlike traditional white canes that rely on physical contact to detect obstacles, BlindNav uses an ESP32-C3 microcontroller and multiple sensors to identify hazards and environmental conditions in real time. 
<br></br>
The system provides both haptic(vibration) and audio feedback, enabling users to navigate their surroundings more confidently. With integrated GPS tracking, emergency alerts, and automatic night visibility fe
atures, BlindNav acts as an intelligent companion for safer daily mobility.


<h1>WHY BlindNav?</h1>
Traditional white canes are effective for detecting obstacles on the ground but cannot identify many hazards before physical contract occurs. BlindNav is developed to bridge this gap by providing an electronic safety net that extends the user's awareness of their surroundings.

**Key Benefits**
* **Proactive Obstacle Detection:** Uses ultrasonic sensors to detect obstacles before contact occurs, helping users avoid collisions.

* Dual-Level Protection: Identifies both ground-level hazards (puddles, uneven surfaces, stairs) and head-level obstacles (tree branvhes, signboards, poles).

* Intelligent Feedback System: Communicate alerts through:
    * Haptic Feedback: A vibration motor that increases intensity as obstacles get closer.
    * Audio Alerts: Voice or buzzer notification for specific hazards such as water detection.

* Emergency Lifeline: An integrated SOS button and GPS module allow the user to instantly share their live location with a trusted contact during emergencies.

* Environmental Awareness: It includes an LDR (Light Dependent Resistor) that automatically turns on Night Visibility LEDs, making the user visible to vehicles and pedestrians in low-light conditions.





<h1>Features</h1>

| Feature | Description |
| ------- | ----------- |
| 🦯 Triple Obstacle Detection | 3x HC-SR04 sensors at head , mid and ground for obstacle detection |
| 📳 Haptic & Audio Feedback | Dual Vibration motors provide distance-based pulses; DFPlayer provides voice alerts. |
| ⚠️ Fall & Tilt Detection | MPU6050 IMU detects sudden falls or if the stick is dropped, triggering an alert. |
| 💧 Puddle & Water Sensing | Base-mounted sensor detects conductive surfaces to warn of water or mud. |
| 🆘 Emergency SOS System | One-press button sends GPS coordinates (via NEO-6M) to family over Wi-Fi/LTE. |
| 💡 High-Visibility Safety | LDR-activated Safety LED Strip for 360° visibility at night. |

<h1>Components</h1>

| Component | Purpose|
| --------- | ------- |
| ESP 32-C3| Main microcontroller with Bluetooth for logic and emergency alerts. |
| HC-SR04 (x3) | Obstacle detection - head , middle , stair case level |
| MPU 6050 | 6-axis Accelerometer for fall detection and motion tracking. |
| DfPlayer Mini + SD Card | Stores and plays high-quality MP 3 voice instructions. |
| NEO-6M GPS Module | Provides real-time latitude/longitude for SOS functionality. |
| Vibration Motor (x2) | Dual zone haptic feedback for intuitive distance sensing. |
| PAM 8403 Amplifier | Drives the speaker for clear audio feedback in noisy environments. |
| Water Sensor Module | Detects moisture/puddles at the base of the stick. |
| LDR + Neon Light | Automated night safety lighting system. |
| TP 4056 + 18650 Cells | Managed Charging and power delivery ( x4 batteries for long life). |
| 3.3V Voltage Regulator | Ensures clean, stable power to the ESP 32-C3 and sensitive sensors. |

<h1>Physical Component Layout</h1>
To ensure practical assembly and balanced weight distribution, BlindNav uses a moduelar internal layout.

* Top Handle Section
   * SOS Button
   * Vibration Module
   * Volume up/down
   * Amplifier
   * Light Detection Module (LDR)
   * Speaker
   * Ultrasonic Sensor
   * Power Button

* Midddle Section
   * Accelerometer
   * GPSModule
   * ESP32 C3
   * 3.3v Voltage Regulator
   * MPU 6050
   * Ultrasonic Sensor

* Lower Section
   * TP4056 Charging Module
   * Battery
   * Ultrasonic Sensor
   * Water Sensor

* External Sensor Placement
   * Head-Level Ultrasonic Sensor (for branches and signboards).
   * Font Obstacle Sensor (for walls and objects)
   * Stair Dection Sensor (for drops and staircase edges)

This arrangement improves weight distribution, simplifies maintenance, allows future upgrades without redesigning the entire stick


<h1>CAD</h1>

<img width="800" height="1500" alt="CAD" src="https://github.com/user-attachments/assets/597a6717-c0dd-4575-9727-78d753682fb3" />

<img width="1200" height="700" alt="Stick" src="https://github.com/user-attachments/assets/727ba505-169a-493e-9fe3-bbc2af17360e" />

<img width="1200" height="700" alt="Handle" src="https://github.com/user-attachments/assets/090fb764-f731-4008-8413-9e5bfb0daa04" />



<h1>PCB</h1>
<img width="1200" height="700" alt="BlindNav_SCH_Schematic" src="https://github.com/user-attachments/assets/10419893-dc96-46cf-a17a-af723d9f3d7e" />



<h1>Wiring Diagram</h1>
<img width="600" height="800" alt="Wiring_Diagram" src="https://github.com/user-attachments/assets/8777a499-3e3d-4094-9235-4c0c089fab21" />



<h1>BOM List</h1>

|Item|Purpose|Quantity|Unit Price (USD)|Total Price (USD)|Source|Link|
|------|--------|--------|----------------|-------------|--------|------|
|ESP32 C3|Main microcontroller|1|$ 4.70|$ 4.70|Amazon|https://amzn.in/d/0a4KutVx|
|HC-SR04 Ultrasonic Sensor|Obstacle Detection (head & bottom & stair case level)|3|$ 1.04|$ 3.12|Amazon|https://amzn.in/d/045kcxsp|
|Vibration Motor|Haptic alert feedback|2|$ 0.26|$ 0.52 |Amazon|https://amzn.in/d/0doxoT5u|
|Speaker|Audio Alerts|1|$ 1.15|$ 1.15|Amazon|https://amzn.in/d/04mXR18p|
|Digital Amplifier Module with Volume Control Potentiometer|Audio Amplification|1|$ 2.47|$ 2.47|Amazon|https://amzn.in/d/0gJkSwCg|
|Water Sensor Module|Detects Puddles At Base|1|$ 0.47|$ 0.47|Amazon|https://amzn.in/d/0027NZvA|
|GPS Module (NEO-6M)|Location Tracking|1|$ 4.33|$ 4.33|Amazon|https://amzn.in/d/0b3qNDnb|
|MPU 6050|Motion Tracking|1|$ 2.61|$ 2.61|Amazon|https://amzn.in/d/01GiuhjM|
|Light Sensor (LDR)|Auto Night LED Control|1|$ 0.87 |$ 0.87|Amazon|https://amzn.in/d/056LfmlJ|
|Li-ion Battery (18650)|Power Supply|4|$ 2.08 |$ 4.16|Amazon|https://amzn.in/d/06IEj43l|
|Li-ion Battery (18650) Holder|Holding the Battery|1|||3d Printer||
|TP4056 Charging Module|Battery Charging & Protection|1|$ 0.58|$ 0.58|Amazon|https://amzn.in/d/08qRZF8B|
|3.3v Voltage Regulator|Regulating Voltage|1|$ 0.17|$ 0.17|Amazon|https://amzn.in/d/0iC7ZcRH|
|DFPlayer Mini MP 3 Module|Voice Feedback System|1|$ 2.72|$ 2.72|Amazon|https://amzn.in/d/01TV4Z7P|
|Switch (Power)|Turn device ON/OFF|1|$ 0.12|$ 0.12|Amazon|https://amzn.in/d/0dWL1L79|
|Micro SD Card|Storage|4 Gb|$ 1.87|$ 1.87|Amazon|https://amzn.in/d/0cj7eLT4|
|USB to Micro USB Cable|Charging Batteries and Transferring Data|1|$ 0.62|$ 0.62|Amazon|https://amzn.in/d/0ivAUE8Z|
|Male to Male Jumper Wires|Circuit Prototyping|1 Set (40Pc)|$ 1.04|$ 1.04|Amazon|https://amzn.in/d/06kV8bPE|
|Male to Female Jumper Wires|Component Bridging|1 Set (40Pc)|$ 0.72|$ 0.72|Amazon|https://amzn.in/d/08pESkNX| 
|Female to Female Jumper Wires|Circuit Prototyping|1 Set (40Pc)|$ 0.71|$ 0.71|Amazon|https://amzn.in/d/0bVLYfWm|
|Breadboard 830 Points|Component Connection|1 Set|$ 1.04|$ 1.04|Amazon|https://amzn.in/d/06VyBYyV|
|Resistor 220/330/1K/2K ohm|Limit Circuit|15|$ 1.05|$ 1.05|Owned||
|Safety Light|For User Safety|1 meter|$ 2.08|$ 2.08|Amazon|https://amzn.in/d/0cTXC8uM|
|Red LED| Visual Indicator|1|$ 0.03|$ 0.03|Amazon|https://amzn.in/d/0bdBQflw|
|SOS Button|Emergency alert trigger|1|$ 0.21|$ 0.21|Owned||
|Stick Body|Holds All Components|1|||3d Printer||
|ITEM PRICE||||$ 37.36||
|SHIPPING PRICE||||$ 2.64||
|GRAND TOTAL||||$ 40||


<h1>How It Works</h1>

```cpp

loop() {
    distance_front = ultrasonic.read(FRONT_SENSOR);
    distance_head  = ultrasonic.read(HEAD_SENSOR);

    if (distance_front < 30 || distance_head < 30) {
        vibrate(FAST);
    } else if (distance_front < 80) {
        vibrate(SLOW);
    }

    if (waterSensor.detected()) {
        alert("WATER");
    }

    if (sosButton.pressed()) {
        sendAlert(gps.getLocation());
    }
}
```

<h1>How To Build & Use It</h1>

<h2>1. Hardware Assembly</h2>

The physical structure consists of custom 3D-printed components.
   * Secure the ESP32-C3, GPS module, battery pack, vibration motor, buzzer/speaker and other electronic components inside the main enclosure. 
   * Mount the HC-SR04 ultrasonic sensor at a forward-facing angle to detect obstacles ahead.
   * Position the water sensor at the bottom tip of the stick to ensure immediate contact with wet surfaces. 
   * Calibrate the upper obstacle sensor to approximately a 45 degree upward angle for detecting head-level hazards.
   * Install the LDR and visibility LEDs in appropriate locations for automatic night-time illumination.
<br></br>


<h2>2. Software Setup</h2>

i. Clone this repository: git clone https://github.com/Rishabhjoshi-09/BlindNav.git
<br></br>
ii. Open the project .ino file in the Arduino IDE.
<br></br>
iii. Install all required libraries (such as NewPing, TinyGPS++ and other dependencies).
<br></br>
iv. Connect the ESP32-C3 to your computer and upload the firmware.
<br></br>

<h2>3. Basic Operation</h2>

* **Powering On**

Turn on the main power switch. The ESP32-C3 will initialize all sensors and establish a GPS connection.


* **Navigation**

Walk normally while holding the stick. The ultrasonic sensors continuously scan the path ahead and monitor for obstacles.

* **Understanding Alerts**
   * **Obstacle Detection:** The closer an obstacle is, the faster the vibration motor pulses.

   * **Water Hazard:** Detection of water or moisture triggers an audio alert, warning the user to avoid the area.

   * **Low Light Mode:** The LEDs automatically turn on in dark or low-light areas, making the user more visible and to improve safety.

   * **Emergency SOS:** Press and hold the SOS button to send an emergency alert along with the user's live GPS location to a family member.
