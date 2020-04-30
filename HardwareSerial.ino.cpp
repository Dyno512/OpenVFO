// set this to the hardware serial port you wish to use
#define HWSERIAL Serial1

void setup() {
  Serial.begin(9600);
        HWSERIAL.begin(9600, SERIAL_8N1);
}

void loop() {
        int incomingByte;
        
  if (Serial.available() > 0) {
    incomingByte = Serial.read();
    Serial.print("USB received: ");
    Serial.println(incomingByte, "string");
                HWSERIAL.print("USB received:");
                HWSERIAL.println(incomingByte, "string");
  }
  if (HWSERIAL.available() > 0) {
    incomingByte = HWSERIAL.read();
    Serial.print("UART received: ");
    Serial.println(incomingByte, "string");
                HWSERIAL.print("UART received:");
                HWSERIAL.println(incomingByte, "string");
  }
}
