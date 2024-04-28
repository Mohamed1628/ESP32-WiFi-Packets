# ESP32-WiFi-Packets
This program can be used to see TCP, UDP, ICMP, and other incoming packets to an ESP32 board that is connected to a WiFi network. A different color LED is also turned on when different protocol packets are received (red for ICMP, green for TCP, Blue for UDP, and yellow for others).

To add other communication protocols see this article and used the assigned number inside of the switch statement of get_protocol.
https://en.wikipedia.org/wiki/List_of_IP_protocol_numbers
