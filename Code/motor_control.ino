void moveForward();
void turnLeft();
void turnRight();
void stopBoat();
void reverseBoat();

void obstacleAvoidance()
{
    int distance = getDistance();

    if(distance < 30)
    {
        stopBoat();
        delay(300);

        turnRight();
        delay(600);

        moveForward();
    }
}
