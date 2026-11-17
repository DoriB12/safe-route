const int ledVerde = 23;
const int ledAmarelo = 22;
const int ledVermelho = 21;
const int buzzer = 19;
const int sensor = 34;

unsigned long tempoAnterior = 0;
int estadoAtual = 0;
const long intervalo = 3000;

void setup() {
  pinMode(ledVerde, OUTPUT);
  pinMode(ledAmarelo, OUTPUT);
  pinMode(ledVermelho, OUTPUT);
  pinMode(buzzer, OUTPUT);
  Serial.begin(115200);
}

void loop() {
  int soma = 0;
  for(int i = 0; i < 5; i++) {
    soma += analogRead(sensor);
  }
  int leituraSuavizada = soma / 5;

  unsigned long tempoAtual = millis();

  if (tempoAtual - tempoAnterior >= intervalo) {
    tempoAnterior = tempoAtual;
    estadoAtual = (estadoAtual + 1) % 3;
    Serial.print("Nivel de risco suavizado: ");
    Serial.print(leituraSuavizada);
    Serial.print(" | Estado do Totem: ");
    Serial.println(estadoAtual);
  }

  if (estadoAtual == 0) {
    digitalWrite(ledVerde, HIGH);
    digitalWrite(ledAmarelo, LOW);
    digitalWrite(ledVermelho, LOW);
    noTone(buzzer);
  } 
  else if (estadoAtual == 1) {
    digitalWrite(ledVerde, LOW);
    digitalWrite(ledAmarelo, HIGH);
    digitalWrite(ledVermelho, LOW);
    tone(buzzer, 1000, 200);
  } 
  else if (estadoAtual == 2) {
    digitalWrite(ledVerde, LOW);
    digitalWrite(ledAmarelo, LOW);
    digitalWrite(ledVermelho, HIGH);
    tone(buzzer, 2000, 500);
  }
}
