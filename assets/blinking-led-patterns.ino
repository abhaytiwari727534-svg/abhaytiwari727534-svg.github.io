void setup() {
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(5, OUTPUT);
}

void loop() {
  for(int i=0; i<=3; i++){
    digitalWrite(13, HIGH);
    digitalWrite(12, HIGH);
    digitalWrite(11, HIGH);
    digitalWrite(10, HIGH);
    digitalWrite(9, HIGH);
    digitalWrite(8, HIGH);
    digitalWrite(7, HIGH);
    digitalWrite(6, HIGH);
    digitalWrite(5, HIGH);
    delay(60);

    digitalWrite(13, LOW);
    digitalWrite(12, LOW);
    digitalWrite(11, LOW);
    digitalWrite(10, LOW);
    digitalWrite(9, LOW);
    digitalWrite(8, LOW);
    digitalWrite(7, LOW);
    digitalWrite(6, LOW);
    digitalWrite(5, LOW);
    delay(60);
  }
  for(int j=0; j<=1; j++){
    digitalWrite(13, HIGH);
    digitalWrite(12, HIGH);
    delay(60);

    digitalWrite(13, LOW);
    digitalWrite(11, HIGH);
    delay(60);

    digitalWrite(12, LOW);
    digitalWrite(10, HIGH);
    delay(60);

    digitalWrite(11, LOW);
    digitalWrite(9, HIGH);
    delay(60);

    digitalWrite(10, LOW);
    digitalWrite(8, HIGH);
    delay(60);

    digitalWrite(9, LOW);
    digitalWrite(7, HIGH);
    delay(60);

    digitalWrite(8, LOW);
    digitalWrite(6, HIGH);
    delay(60);

    digitalWrite(7, LOW);
    digitalWrite(5, HIGH);
    delay(60);

    digitalWrite(6, HIGH);
    delay(60);

    digitalWrite(5, LOW);
    digitalWrite(6, HIGH);
    digitalWrite(7, HIGH);
    delay(60);

    digitalWrite(6, LOW);
    digitalWrite(7, HIGH);
    digitalWrite(8, HIGH);
    delay(60);

    digitalWrite(7, LOW);
    digitalWrite(8, HIGH);
    digitalWrite(9, HIGH);
    delay(60);

    digitalWrite(8, LOW);
    digitalWrite(9, HIGH);
    digitalWrite(10, HIGH);
    delay(60);

    digitalWrite(9, LOW);
    digitalWrite(10, HIGH);
    digitalWrite(11, HIGH);
    delay(60);

    digitalWrite(10, LOW);
    digitalWrite(11, HIGH);
    digitalWrite(12, HIGH);
    delay(60);

    digitalWrite(11, LOW);
    digitalWrite(12, HIGH);
    digitalWrite(13, HIGH);
    delay(60);
     digitalWrite(12, LOW);
  digitalWrite(13, LOW);

  digitalWrite(9, HIGH);
  delay(60);

  digitalWrite(10, HIGH);
  digitalWrite(8, HIGH);
  delay(60);

  digitalWrite(11, HIGH);
  digitalWrite(7, HIGH);
  delay(60);

  digitalWrite(12, HIGH);
  digitalWrite(6, HIGH);
  delay(60);

  digitalWrite(13, HIGH);
  digitalWrite(5, HIGH);
  delay(60);
  }
  for(int k=0; k<=1; k++){
    delay(60);

    digitalWrite(13, LOW);
    digitalWrite(12, LOW);
    digitalWrite(11, LOW);
    digitalWrite(10, LOW);
    digitalWrite(9, LOW);
    digitalWrite(8, LOW);
    digitalWrite(7, LOW);
    digitalWrite(6, LOW);
    digitalWrite(5, LOW);
    delay(60);

    digitalWrite(13, HIGH);
    digitalWrite(5, HIGH);
    delay(60);

    digitalWrite(12, HIGH);
    digitalWrite(6, HIGH);
    delay(60);

    digitalWrite(11, HIGH);
    digitalWrite(7, HIGH);
    delay(60);

    digitalWrite(10, HIGH);
    digitalWrite(8, HIGH);
    delay(60);

    digitalWrite(9, HIGH);
    delay(60);
  }


  for(int repeat = 0; repeat < 3; repeat++){
    
    for(int pin = 5; pin <= 13; pin++){
      digitalWrite(pin, HIGH);
      delay(60);
      digitalWrite(pin, LOW);
    }

    for(int pin = 13; pin >= 5; pin--){
      digitalWrite(pin, HIGH);
      delay(60);
      digitalWrite(pin, LOW);
    }
  }
}