int ledPin1 = 13; // choose the pin for the LED
int ledPin2 = 11; // choose the pin for the LED
int ledPin3 = 9; // choose the pin for the LED
int ledPin4 = 7; // choose the pin for the LED
int ledPin5 = 5; // choose the pin for the LED
int ledPin6 = 3; // choose the pin for the LED

int inPin1 = 12;   // choose the input pin (for a pushbutton)
int inPin2 = 10;   // choose the input pin (for a pushbutton)
int inPin3 = 8;   // choose the input pin (for a pushbutton)
int inPin4 = 6;   // choose the input pin (for a pushbutton)
int inPin5 = 4;   // choose the input pin (for a pushbutton)
int inPin6 = 2;   // choose the input pin (for a pushbutton)

int val1 = 0;     // variable for reading the pin status
int val2 = 0;
int val3 = 0;     // variable for reading the pin status
int val4 = 0;
int val5= 0;     // variable for reading the pin status
int val6 = 0;

int switch1 = 0;
int switch2 = 0;
int switch3= 0;
int switch4 = 0;
int switch5 = 0;
int switch6 = 0;

String rack1 = String ("Rack one:");
String rack2 = String ("Rack two:");
String rack3 = String ("Rack three:");

long time = 0;         // the last time the output pin was sampled

int debounce_count = 10; // number of millis/samples to consider before declaring a debounced input


void setup() {
  Serial.begin (9600);
  pinMode(ledPin1, OUTPUT);  // declare LED as output
  pinMode(inPin1, INPUT);    // declare pushbutton as input
  pinMode(ledPin2, OUTPUT);  // declare LED as output
  pinMode(inPin2, INPUT);    // declare pushbutton as input
  pinMode(ledPin3, OUTPUT);  // declare LED as output
  pinMode(inPin3, INPUT);    // declare pushbutton as input
  pinMode(ledPin4, OUTPUT);  // declare LED as output
  pinMode(inPin4, INPUT);    // declare pushbutton as input
  pinMode(ledPin5, OUTPUT);  // declare LED as output
  pinMode(inPin5, INPUT);    // declare pushbutton as input
  pinMode(ledPin6, OUTPUT);  // declare LED as output
  pinMode(inPin6, INPUT);    // declare pushbutton as input
}

void loop() {
  if (millis()  - 30 > time) {
    time = millis();
    val1 = digitalRead(inPin1);  // read input value
    if (val1 == HIGH) {         // check if the input is HIGH (button released)
      digitalWrite(ledPin1, LOW);  // turn LED OFF
      if (switch1 < 1)
      {
        val2 = val2 + 1;
        switch1 = 1;
        Serial.println(rack1 + val2);
      }
    } else {
      digitalWrite(ledPin1, HIGH);  // turn LED ON val = digitalRead(inPin);  // read input value
      switch1 = 0;

    }

    val1 = digitalRead(inPin2);  // read input value
    if (val1 == HIGH) {         // check if the input is HIGH (button released)
      digitalWrite(ledPin2, LOW);  // turn LED OFF
      if (switch2 < 1)
      {
        val2 = val2 - 1;
        switch2 = 1;
        Serial.println(rack1 + val2);
      }
    } else {
      digitalWrite(ledPin2, HIGH);  // turn LED ONval = digitalRead(inPin);  // read input value
      switch2 = 0;
    }
  }
   {
    time = millis();
    val3 = digitalRead(inPin3);  // read input value
    if (val3 == HIGH) {         // check if the input is HIGH (button released)
      digitalWrite(ledPin3, LOW);  // turn LED OFF
      if (switch3 < 1)
      {
        val4 = val4 + 1;
        switch3 = 1;
        Serial.println(rack2 + val4);
      }
    } else {
      digitalWrite(ledPin3, HIGH);  // turn LED ON val = digitalRead(inPin);  // read input value
      switch3 = 0;

    }

    val3 = digitalRead(inPin4);  // read input value
    if (val3 == HIGH) {         // check if the input is HIGH (button released)
      digitalWrite(ledPin4, LOW);  // turn LED OFF
      if (switch4 < 1)
      {
        val4 = val4 - 1;
        switch4 = 1;
        Serial.println(rack2 + val4);
      }
    } else {
      digitalWrite(ledPin4, HIGH);  // turn LED ONval = digitalRead(inPin);  // read input value
      switch4 = 0;
    }
  }
  {
    time = millis();
    val5 = digitalRead(inPin5);  // read input value
    if (val5 == HIGH) {         // check if the input is HIGH (button released)
      digitalWrite(ledPin5, LOW);  // turn LED OFF
      if (switch5 < 1)
      {
        val6 = val6 + 1;
        switch5 = 1;
        Serial.println(rack3 + val6);
      }
    } else {
      digitalWrite(ledPin5, HIGH);  // turn LED ON val = digitalRead(inPin);  // read input value
      switch5 = 0;

    }

    val5 = digitalRead(inPin6);  // read input value
    if (val5 == HIGH) {         // check if the input is HIGH (button released)
      digitalWrite(ledPin6, LOW);  // turn LED OFF
      if (switch6 < 1)
      {
        val6 = val6 - 1;
        switch6 = 1;
        Serial.println(rack3 + val6);
      }
    } else {
      digitalWrite(ledPin6, HIGH);  // turn LED ONval = digitalRead(inPin);  // read input value
      switch6 = 0;
    }
  }
}
