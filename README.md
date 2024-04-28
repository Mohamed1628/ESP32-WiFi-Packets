# ESP32-WiFi-Packets
This program can be used to see TCP, UDP, ICMP, and other incoming packets to an ESP32 board that is connected to a WiFi network. A different color LED is also turned on when different protocol packets are received (red for ICMP, green for TCP, Blue for UDP, and yellow for others).

# Project Structure
This project is using PlatformIO with ESP IDF in Visual Studio Code. PlatformIO is just a extra set of tools on top of ESP IDF to make it easier to build a project.


To add other communication protocols see this article and used the assigned number inside of the switch statement of get_protocol.
https://en.wikipedia.org/wiki/List_of_IP_protocol_numbers

