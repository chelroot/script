        #define LED_PIN_YELLOW   13
 
void setup()
{
  // открываем последовательный порт на пинах 1 и 0
  // к которому подключён модуль RS-485
  Serial.begin(4800);
  // 5 пин в режим выхода
  pinMode(LED_PIN_YELLOW, OUTPUT);
}
 
void loop()
{
  // если появились данные с модуля RS-485
  if (Serial.available() > 0) {
    // считываем
    char c = Serial.read();
    Serial.print(c);
    // если символ равен 'a'
    if (c == 'a') {
      // зажигаем светодиод
      digitalWrite(LED_PIN_YELLOW, HIGH);
    } else if (c == 'b') {
      // если символ равен 'b'
      // гасим светодиод
      digitalWrite(LED_PIN_YELLOW, LOW);
    }
  }
}
