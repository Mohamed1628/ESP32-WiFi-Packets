# ESP32 WiFi Packets
This program can be used to see TCP, UDP, ICMP, and other incoming packets to an ESP32 board that is connected to a WiFi network. A different color LED is also turned on when different protocol packets are received (red for ICMP, green for TCP, Blue for UDP, and yellow for others). It also outputs the source IP address of each packet. This program uses Visual Studio Code and two extensions: ESP-IDF (Espressif IoT Development Framework) and PlatformIO.

<p align="center">
  <img width="200" height="300" src="https://github.com/Mohamed1628/ESP32-WiFi-Packets/assets/98979579/f452d41c-49d1-4ce3-bad5-0468cd0d631a"><br>
  Terminal output for a ping request (4 ICMP Packets).
</p>

![esp32](https://github.com/Mohamed1628/ESP32-WiFi-Packets/assets/98979579/017948c3-cd33-46de-9356-b5997f6d9371)

## Project Structure
This project is using PlatformIO with ESP IDF in Visual Studio Code. PlatformIO is just a extra set of tools on top of ESP IDF to make it easier to build a project.

```
ESP32-WiFi-Packets
  ├───.pio
  ├───.vscode
  ├───include
  │       lwip_hooks.h
  │       README
  │
  ├───lib
  ├───src
  │       CMakeLists.txt
  │       main.c
  │
  └───test
  │   CMakeLists.txt
  │   platformio.ini
  │   sdkconfig
  │   sdkconfig.esp32dev
```

<p align="center">
  <img src="https://github.com/Mohamed1628/ESP32-WiFi-Packets/assets/98979579/9a94560f-ffd0-4317-8c33-8075d0f1301c"><br>
  Folder structure in VS Code.
</p>

## Future
- To add other communication protocols see this article and used the assigned number inside of the switch statement of get_protocol.
https://en.wikipedia.org/wiki/List_of_IP_protocol_numbers

- Can also output port numbers for each packet by looking at the `ip4.h` file inside of the LwIP (lightweight internet protocol) library.
  https://www.nongnu.org/lwip/2_0_x/ip4_8h.html

