# Definição dos pinos
int pinoSensor = 2; # Pino onde o sensor de gás (MQ-2) está conectado
int pinoLED = 13; # Pino onde o LED está conectado
int pinoBuzzer = 8; # Pino onde o buzzer está conectado

void setup() { 
   pinMode (pinoSensor, INPUT); # Define o pino sensor como entrada de tensão
   pinMode (pinoLED, OUTPUT); # Define o pino LED como saída de tensão
   pinMode (pinoBuzzer, OUTPUT); # Define o pino Buzzer como saída de tensão
}

void loop() { 
   int leitura = digitalRead(pinoSensor); # Lê o estado do sensor

   if (leitura == HIGH) {
      digitalWrite(pinoLED, HIGH); # Gás detectado = LED acende
      digitalWrite(pinoBuzzer, HIGH); # Gás detectado = Buzzer apita
    } else { 
      digitalWrite(pinoLED, LOW); # Gás não é detectado = LED apagado
      digitalWrite(pinoBuzzer, LOW); # Gás não é detectado = Buzzer não apita
}

