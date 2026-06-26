void sendData()
{
    String packet =
    String(ph)+","+
    String(tds)+","+
    String(turbidity)+","+
    String(temperature)+","+
    latitude+","+
    longitude;

    Serial2.println(packet);
}
