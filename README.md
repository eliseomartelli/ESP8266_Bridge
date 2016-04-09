# ESP8266 Bridge

A simple bridge sketch made to send AT commands to the **ESP8266** in an easy way.

## How to use

* Clone this [repo](https://github.com/eliseomartelli/ESP8266_Bridge/archive/master.zip)
* Upload the sketch to the Arduino
* Connect the ESP8266 to the Arduino
* Open the Serial Monitor
* Enjoy! :blush:

## Wiring Diagram

Use the following diagram to connect the ESP8266 to your Arduino!

![Wiring Diagram](http://i.imgur.com/yRaq3dK.png)

## Baud Rates

If you have some problems reading the output of your ESP8266 try tweaking the baud rate.

The stock baud rates are:

* 9600
* 57600
* 115200

The most used is 115200.

#### Change the Baud Rate

To change the baud rate first figure out what's your baud rate, change it in the Arduino sketch and then issue this AT command:

```
AT+CIOBAUD=<baudrate>
```

For other commands refer to [this cheat sheet](http://www.pridopia.co.uk/pi-doc/ESP8266ATCommandsSet.pdf)!
