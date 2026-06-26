<div align="center">

# 🌊 Autonomous IoT Boat for Waterborne Disease Detection
### 🚤 Smart India Hackathon (SIH) 2025

<p align="center">
An autonomous IoT-enabled boat designed to monitor floodwater quality in real time, enabling early detection of contaminated water sources and helping prevent waterborne disease outbreaks in flood-prone regions.
</p>

<p align="center">
<img src="images/banner.png" width="900">
</p>

![ESP32](https://img.shields.io/badge/ESP32-Embedded-red?style=for-the-badge)
![IoT](https://img.shields.io/badge/IoT-System-blue?style=for-the-badge)
![GPS](https://img.shields.io/badge/GPS-Tracking-success?style=for-the-badge)
![GSM](https://img.shields.io/badge/GSM-Communication-orange?style=for-the-badge)
![SIH](https://img.shields.io/badge/SIH-2025-purple?style=for-the-badge)
![License](https://img.shields.io/badge/Open%20Source-Yes-brightgreen?style=for-the-badge)

</div>

---

# 🌧️ The Story Behind This Project

Every year during the **monsoon season (June–July)**, the state of **Assam** experiences devastating floods. Rising river levels inundate villages, roads, schools, and agricultural land, leaving thousands of people stranded.

While floods cause immediate destruction, one of their most dangerous consequences appears **after the water settles**.

Floodwater mixes with:

- 🗑️ Household waste
- 🚽 Sewage
- 🏭 Industrial pollutants
- 🐄 Animal waste
- ☣️ Harmful microorganisms

This contamination creates the perfect environment for waterborne diseases such as:

- Cholera
- Typhoid
- Dysentery
- Hepatitis A
- Skin infections

Collecting water samples manually is risky because healthcare workers must travel through flooded regions using boats while being directly exposed to contaminated water.

In many remote areas, water quality information reaches authorities only after disease outbreaks have already begun.

---

# 💡 Our Solution

To address this challenge, we developed an **Autonomous IoT Boat** capable of monitoring floodwater without requiring human intervention.

The boat autonomously navigates through flood-affected areas while continuously collecting water-quality data using embedded sensors.

Instead of transmitting information directly to the internet, the collected data is sent wirelessly to a **Receiver (Base Station)** located in a safe area.

The receiver forwards the information to a centralized **Web Dashboard**, allowing healthcare workers and authorities to monitor water quality remotely and identify contamination hotspots before diseases spread.

---

# 🎯 Objectives

- 🌊 Monitor floodwater quality in real time
- 🚤 Reduce human exposure to contaminated water
- 📡 Enable remote environmental monitoring
- 📍 Track survey locations using GPS
- 🏥 Support early disease prevention
- 📊 Provide live data visualization

---

# 🚀 System Overview

<p align="center">
<img src="images/system-overview.png" width="900">
</p>

---

# 🏗️ Architecture

```text
                    🌊 Flood Water

                          │
                          ▼
                🚤 Autonomous Boat
                          │
        ┌─────────────────┼──────────────────┐
        │                 │                  │
        ▼                 ▼                  ▼
  Water Quality      GPS Module      Ultrasonic Sensor
     Sensors                          (Obstacle Detection)

                          │
                          ▼
                    ESP32 Controller
                          │
                          ▼
                 Wireless Communication
                          │
                          ▼
                 📥 Receiver Station
                          │
                          ▼
                    Web Dashboard
                          │
                          ▼
         Healthcare Workers & Authorities
```

---

# ⚙️ Working Principle

### 🚤 Step 1

The autonomous boat begins navigating through flooded areas.

---

### 🌊 Step 2

Water-quality sensors continuously measure parameters such as:

- pH
- Turbidity
- Total Dissolved Solids (TDS)

---

### 🚧 Step 3

Ultrasonic sensors detect obstacles and assist autonomous navigation.

---

### 📍 Step 4

The GPS module records the exact location where each reading is collected.

---

### 🧠 Step 5

The ESP32 processes all sensor data and prepares it for transmission.

---

### 📡 Step 6

The collected information is transmitted wirelessly to the **Receiver Station**.

---

### 📥 Step 7

The receiver collects incoming data and forwards it to the Web Dashboard.

---

### 💻 Step 8

Authorities can remotely monitor:

- Water quality
- Boat location
- Sensor readings
- Flood conditions

without entering dangerous flood zones.

---

# ✨ Features

✅ Autonomous Navigation

✅ Water Quality Monitoring

✅ GPS Location Tracking

✅ Wireless Communication

✅ Receiver Gateway

✅ Real-Time Dashboard

✅ Obstacle Detection

✅ Remote Monitoring

✅ Low Power Embedded Design

---

# 🛠 Hardware Used

| Component | Purpose |
|------------|----------|
| ESP32 | Main Controller |
| GPS Module | Live Position Tracking |
| GSM / Wireless Module | Communication |
| Receiver Unit | Receives Boat Data |
| Ultrasonic Sensor | Obstacle Detection |
| pH Sensor | Water Acidity |
| Turbidity Sensor | Water Clarity |
| TDS Sensor | Dissolved Solids |
| Battery | Power Supply |

---

# 💻 Software Stack

- Embedded C
- ESP-IDF / Arduino IDE
- HTML
- CSS
- JavaScript
- Web Dashboard
- IoT Communication Protocols

---

# 📊 Data Flow

```text
Flood Water

     │

     ▼

Water Quality Sensors

     │

     ▼

ESP32

     │

     ▼

Wireless Communication

     │

     ▼

Receiver Station

     │

     ▼

Web Dashboard

     │

     ▼

Healthcare Authorities
```

---



# 📂 Repository Structure

```text
Autonomous-IoT-Boat
│
├── Boat
│   ├── Firmware
│   ├── Navigation
│   ├── Sensors
│   └── Communication
│
├── Receiver
│   ├── Receiver Firmware
│   └── Data Forwarding
│
├── Dashboard
│   ├── HTML
│   ├── CSS
│   ├── JavaScript
│   └── Assets
│
├── Hardware
│   ├── Circuit Diagram
│   ├── PCB Design
│   └── Block Diagram
│
├── Images
│   ├── banner.png
│   ├── boat.jpg
│   ├── receiver.jpg
│   ├── dashboard.png
│   └── system-overview.png
│
└── README.md
```

---

# 📈 Impact

🌍 Reduces the need for manual water sampling.

🏥 Helps healthcare workers identify contaminated regions earlier.

⚡ Enables continuous monitoring during flood emergencies.

📊 Provides authorities with real-time environmental intelligence.

🚤 Makes monitoring safer, faster, and more efficient.

---

# 🔮 Future Scope

- ☁️ Cloud Database Integration
- 📱 Mobile Application
- 🤖 AI-Based Disease Prediction
- 🛰️ LoRaWAN Communication
- ☀️ Solar-Powered Charging
- 📍 Automatic Route Optimization
- 🧠 Machine Learning for Water Quality Classification

---

# 🤝 Contributing

Contributions are always welcome!

If you'd like to improve this project:

1. Fork the repository
2. Create a new feature branch
3. Commit your changes
4. Open a Pull Request

---

# 📜 License

This project is intended for educational and research purposes under the **MIT License**.

---

<div align="center">

## ⭐ If you found this project interesting, don't forget to leave a star!

*"Technology becomes meaningful when it protects lives. This project aims to make flood response smarter, safer, and more proactive for the communities of Assam."* 🌊❤️

</div>
