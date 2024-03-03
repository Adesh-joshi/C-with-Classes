#include <iostream>
#include <cmath>
#include <graphics.h>
#include <ctime>

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "C:\\Turboc3\\BGI");

    int centerX = getmaxx() / 2;
    int centerY = getmaxy() / 2;
    int radius = 100;

    while (!kbhit()) {
        cleardevice();

        // Get current time

        std::tm timeInfo = *std::localtime(&currentTime);
        int seconds = timeInfo.tm_sec;
        int minutes = timeInfo.tm_min;
        int hours = timeInfo.tm_hour % 12;

        // Draw watch face
        circle(centerX, centerY, radius);
        // Draw clock markings and numbers

        // Calculate angles for hands
        int secondAngle = (seconds * 6) - 90;  // 360° divided by 60 seconds
        int minuteAngle = (minutes * 6) - 90;  // 360° divided by 60 minutes
        int hourAngle = (hours * 30 + minutes / 2) - 90;  // 360° divided by 12 hours

        // Draw second hand
        int secondX = centerX + radius * cos(secondAngle * 3.14159265 / 180);
        int secondY = centerY + radius * sin(secondAngle * 3.14159265 / 180);
        line(centerX, centerY, secondX, secondY);

        // Draw minute hand
        int minuteX = centerX + (radius - 15) * cos(minuteAngle * 3.14159265 / 180);
        int minuteY = centerY + (radius - 15) * sin(minuteAngle * 3.14159265 / 180);
        line(centerX, centerY, minuteX, minuteY);

        // Draw hour hand
        int hourX = centerX + (radius - 30) * cos(hourAngle * 3.14159265 / 180);
        int hourY = centerY + (radius - 30) * sin(hourAngle * 3.14159265 / 180);
        line(centerX, centerY, hourX, hourY);

        delay(1000); // Delay for one second
    }

    closegraph();
    return 0

