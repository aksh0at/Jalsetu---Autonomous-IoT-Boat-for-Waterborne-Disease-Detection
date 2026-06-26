void setup()
{
    initSensors();

    initGPS();

    initMotor();

    initCommunication();
}

void loop()
{
    readAllSensors();

    obstacleAvoidance();

    sendData();

    delay(3000);
}
