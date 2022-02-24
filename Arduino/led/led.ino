int medida=0;
int leitura = A0;

void setup() {
  Serial.begin(9600);
}

void loop() {
  medida = analogRead(leitura);
  Serial.println(medida);
}
