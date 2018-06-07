void setup() {

  pinMode(13,OUTPUT);       // 13 Numaralı pin çıkış olarak ayarlandı.
}

void loop() {
  
  digitalWrite(13,HIGH);    // Ledi yak.
  delay(1000);              // 1 saniye bekle.
  digitalWrite(13,LOW);     // Ledi söndür.
  delay(1000);              // 1 saniye bekle.
}
