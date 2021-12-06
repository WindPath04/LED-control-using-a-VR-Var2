#define VR analogRead(A1)     // 0...1023

void setup() {
  Serial.begin(9600);
  
  pinMode(2, OUTPUT);         // led1
  pinMode(3, OUTPUT);         // led2
  pinMode(4, OUTPUT);         // led3
  pinMode(5, OUTPUT);         // led4
  pinMode(6, OUTPUT);         // led5
  pinMode(7, OUTPUT);         // led6
}

int led_control;  // 0...5

void loop() {
  led_control = VR / 204;
  Serial.println(led_control);
  
  digitalWrite(2, led_control == 0);
  digitalWrite(3, led_control == 1);
  digitalWrite(4, led_control == 2);
  digitalWrite(5, led_control == 3);
  digitalWrite(6, led_control == 4);
  digitalWrite(7, led_control == 5);

}
