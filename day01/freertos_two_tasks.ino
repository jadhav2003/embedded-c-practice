void taskA(void *pvParameters) {
  while (true) {
    Serial.println("Task A: slow job (1 s)");
    vTaskDelay(1000 / portTICK_PERIOD_MS);
  }
}

void taskB(void *pvParameters) {
  while (true) {
    Serial.println("Task B: fast job (0.5 s)");
    vTaskDelay(500 / portTICK_PERIOD_MS);
  }
}

void setup() {
  Serial.begin(115200);
  xTaskCreate(taskA, "TaskA", 2048, NULL, 1, NULL);
  xTaskCreate(taskB, "TaskB", 2048, NULL, 1, NULL);
}

void loop() {
}