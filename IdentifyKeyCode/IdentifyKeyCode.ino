void setup() {
    // put your setup code here, to run once:

    // baud rate settings
    Serial.begin(115200);

    // pin setup
    // all is pullup_resistor and no need to discriminate whether is analog or digital.
    // that part are for loop and done by analogRead() & digitalRead().
    pinMode(0, INPUT_PULLUP);
    pinMode(1, INPUT_PULLUP);
    pinMode(2, INPUT_PULLUP);
    pinMode(3, INPUT_PULLUP);
    pinMode(5, INPUT_PULLUP);
    pinMode(7, INPUT_PULLUP);
    pinMode(9, INPUT_PULLUP);
    pinMode(11, INPUT_PULLUP);
    pinMode(13, INPUT_PULLUP);

    pinMode(A0, INPUT_PULLUP);
    pinMode(A1, INPUT_PULLUP);
    pinMode(A2, INPUT_PULLUP);
    pinMode(A3, INPUT_PULLUP);
    pinMode(A4, INPUT_PULLUP);
    pinMode(A5, INPUT_PULLUP);


}

void loop() {
    // put your main code here, to run repeatedly:

  // for discriminate new value.
  Serial.print("#######################\n");

  // Digital pin input.
  Serial.print("0");
  Serial.print("\t");
  Serial.print(digitalRead(0));
  Serial.print("\n");  
  Serial.print("1");
  Serial.print("\t");
  Serial.print(digitalRead(1));
  Serial.print("\n");  
  Serial.print("2");
  Serial.print("\t");
  Serial.print(digitalRead(2));
  Serial.print("\n");  
  Serial.print("3");
  Serial.print("\t");
  Serial.print(digitalRead(3));
  Serial.print("\n");
  Serial.print("5");
  Serial.print("\t");
  Serial.print(digitalRead(5));
  Serial.print("\n");
  Serial.print("7");
  Serial.print("\t");
  Serial.print(digitalRead(7));
  Serial.print("\n");
  Serial.print("9");
  Serial.print("\t");

  // We should know some digital pin can be used for analog-input.
  Serial.print(analogRead(9));
  Serial.print("\n");
  Serial.print("11");
  Serial.print("\t");
  Serial.print(digitalRead(11));
  Serial.print("\n");
  Serial.print("13");
  Serial.print("\t");
  Serial.print(digitalRead(13));
  Serial.print("\n");  

  // Analog pin input.
  Serial.print("A0");
  Serial.print("\t");
  Serial.print(analogRead(A0));
  Serial.print("\n");
  Serial.print("A1");
  Serial.print("\t");
  Serial.print(analogRead(A1));
  Serial.print("\n");
  Serial.print("A2");
  Serial.print("\t");
  Serial.print(analogRead(A2));
  Serial.print("\n");
  Serial.print("A3");
  Serial.print("\t");
  Serial.print(analogRead(A3));
  Serial.print("\n");
  Serial.print("A4");
  Serial.print("\t");
  Serial.print(analogRead(A4));
  Serial.print("\n");
  Serial.print("A5");
  Serial.print("\t");
  Serial.print(analogRead(A5));
  Serial.print("\n");

  // Becasue of fast value return, delay action for 0.5s.
  delay(500);

}
