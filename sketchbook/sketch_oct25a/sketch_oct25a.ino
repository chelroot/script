        #define LED_PIN_YELLOW   13
void setup()
{
  // открываем последовательный порт на пинах 1 и 0
  // к которому подключён модуль RS-485
  Serial.begin(9600);
  // 5 пин в режим выхода
  pinMode(LED_PIN_YELLOW, OUTPUT);
}
void loop()
{
  // если появились данные с модуля RS-485
  if (Serial.available() > 0) {
    // считываем
    char c = Serial.read();
    // если символ равен 'A'
    if (c == 'A') {
      // зажигаем светодиод
      digitalWrite(LED_PIN_YELLOW, HIGH);
      Serial.println("aOKaa");
    } else if (c == 'B') {
      // если символ равен 'B'
      // гасим светодиод
      digitalWrite(LED_PIN_YELLOW, LOW);
      Serial.println("kOKbb");
    }
  }
}
