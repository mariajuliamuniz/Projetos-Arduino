//motor DC 5V

int velocidade=200;
int motor1= 7;
int motor2= 8;

void setup() {
  Serial.begin(9600);
  pinMode(motor1,OUTPUT);
  pinMode(motor2,OUTPUT);

}

void loop() {
  horario(velocidade);
  delay(2000);
  parar();
  delay(2000);
  antihorario(velocidade);
  delay(2000);
  
}

void horario(int Speed) {
  analogWrite (motor1, Speed);
  analogWrite (motor2, 0);
  
}
void antihorario(int Speed) {
  analogWrite (motor1, 0);
  analogWrite (motor2, Speed);
  
}

void parar () {
  analogWrite (motor1, 0);
  analogWrite (motor2, 0);
    
}
