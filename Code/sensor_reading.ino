float readPH();
float readTDS();
float readTurbidity();
float readTemperature();
void readGPS();

void readAllSensors()
{
    ph = readPH();
    tds = readTDS();
    turbidity = readTurbidity();
    temperature = readTemperature();

    readGPS();
}
