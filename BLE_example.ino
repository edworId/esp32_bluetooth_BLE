#include <BLEDevice.h>
#include <BLEUtils.h>
#include <BLEServer.h>

// UUIDs para o serviço e a característica
#define SERVICE_UUID        "4fafc201-1fb5-459e-8fcc-c5c9c331914b"
#define CHARACTERISTIC_UUID "beb5483e-36e1-4688-b7f5-ea07361b26a8"

void setup() {
  Serial.begin(115200);
  Serial.println("Iniciando o servidor BLE...");

  // Inicializa o dispositivo BLE
  BLEDevice::init("ESP32_BLE");  // Nome que aparecerá ao escanear pelo iPhone
  
  // Cria o servidor BLE
  BLEServer *pServer = BLEDevice::createServer();

  // Cria o serviço BLE
  BLEService *pService = pServer->createService(SERVICE_UUID);

  // Cria a característica BLE (leitura e escrita)
  BLECharacteristic *pCharacteristic = pService->createCharacteristic(
                                         CHARACTERISTIC_UUID,
                                         BLECharacteristic::PROPERTY_READ |
                                         BLECharacteristic::PROPERTY_WRITE
                                       );

  // Define um valor inicial para a característica
  pCharacteristic->setValue("Hello from ESP32");

  // Inicia o serviço
  pService->start();

  // Começa a anunciar para que o dispositivo BLE seja visível
  BLEAdvertising *pAdvertising = BLEDevice::getAdvertising();
  pAdvertising->start();
  
  Serial.println("Esperando conexão via BLE...");
}

void loop() {
  // Não é necessário código no loop para este exemplo básico.
}
