#define PIN_LED 13
unsigned int count, toggle;

void setup() {
    pinMode(PIN_LED, OUTPUT);
    Serial.begin(115200); // Initialize serial port
    while (!Serial) {
        ; // wait for serial port to connect.
    }
    Serial.println("Hello World!");
    count = toggle = 0;
    digitalWrite(PIN_LED, toggle); // turn off
}

void loop() {
    Serial.println(++count);
    toggle = toggle_state(toggle); // toggle LED
    digitalWrite(PIN_LED, toggle); // update LED status.
    delay(1000); // wait for 1,000 milliseconds
}

int toggle_state(int toggle) {
    return !toggle; // Toggle the state of the LED (0 to 1 or 1 to 0)
}
