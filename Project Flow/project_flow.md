Power ON
    │
    ▼
Initialize ESP32
    │
    ▼
Initialize Sensors
    │
    ▼
Initialize GPS
    │
    ▼
Initialize Motors
    │
    ▼
Move Forward
    │
    ▼
Detect Obstacle
    │
    ├── No → Continue Navigation
    │
    └── Yes
          │
          ▼
     Change Direction
          │
          ▼
Read Water Sensors
          │
          ▼
Read GPS Location
          │
          ▼
Create Data Packet
          │
          ▼
Transmit to Receiver
          │
          ▼
Receiver Uploads Data
          │
          ▼
Dashboard Displays Readings
          │
          ▼
Machine Learning Predicts
Water Quality Status
