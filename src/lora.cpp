#include <SPI.h>
#include <LoRa.h>
#include <string.h>
#include "lora.h"

int val(){

    Serial.begin(9600);
    while (!Serial);
    Serial.println("LoRa Receiver");
    String message = "";
    int smokeval;

    if (!LoRa.begin(433E6)) {
        Serial.println("Starting LoRa failed!");
        while (1)
    }

    while (LoRa.available()) {
        message += (char)LoRa.read();
        smokeval = stoi (message);

    }
    return smokeval;
}

