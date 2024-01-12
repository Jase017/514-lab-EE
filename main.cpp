#include<Arduino.h>

const int analogPin = D0;

void setup() {
  Serial.begin(9600); // 初始化串口通信，波特率为9600
}

void loop() {
  int sensorValue = analogRead(analogPin); // 读取模拟信号值
  float voltage = sensorValue * (5.0 / 4095.0); // 将模拟值转换为电压值（假设使用的是5V Arduino）

  Serial.print("analogRead: ");
  Serial.print(sensorValue);
  Serial.print(" Voltage: ");
  Serial.println(voltage);

  delay(1000); // 延时1秒，可以根据需要调整
}