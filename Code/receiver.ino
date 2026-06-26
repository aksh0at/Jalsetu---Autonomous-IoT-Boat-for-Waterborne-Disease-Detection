void loop()
{
    if(Serial2.available())
    {
        String data = Serial2.readStringUntil('\n');

        Serial.println(data);

        uploadToDashboard(data);
    }
}
