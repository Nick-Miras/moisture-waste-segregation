#include <Servo.h>

#define SERVO_PIN
#define ECHO_PIN_1
#define TRIGGER_PIN_1
#define ECHO_PIN_2
#define TRIGGER_PIN_2
#define ECHO_PIN_2
#define TRIGGER_PIN_3

#define SDA_PIN A4
#define SDL_PIN A5

#define MOISTURE_SENSOR_PIN A0
#define LED_PIN A1

Servo servo;

void display

int getTypeOfWaste() {
    int pinValue = analogRead(MOISTURE_SENSOR_PIN);
    float moistureLevel = (100 - ((pinValue/1023.00) * 100));
    Serial.print("Moisture Level: ");
    Serial.println(moistureLevel);
}

void displayTypeOfWaste(int typeOfWaste) {

}

bool isBinBiodegradableFull() {

}

bool isBinNonBiodegradableFull() {

}

bool isWastePresent() {

}

void servoWriteNonBiodegradable() {

}

void servoWriteBiodegradable() {
    
}

void setup() {
    Serial.begin(9600);
    servo.attach(SERVO_PIN);
}

void loop() {
    if (isWastePresent() == true) {

    } else {
        
    }
}