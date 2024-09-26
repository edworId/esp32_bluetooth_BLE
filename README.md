# ESP32 Bluetooth Low Energy (BLE) - Conexão com iPhone

Este projeto demonstra como configurar o **ESP32** como um servidor **Bluetooth Low Energy (BLE)**, permitindo que ele seja descoberto e conectado por dispositivos BLE, como um **iPhone**.

## Visão Geral

Neste exemplo, o **ESP32** é configurado para anunciar um serviço BLE contendo uma característica que pode ser lida e escrita por dispositivos conectados. O iPhone, ao escanear por dispositivos BLE, será capaz de detectar o ESP32 e interagir com ele usando aplicativos BLE ou via código com o framework CoreBluetooth do iOS.

## Funcionalidades

- O ESP32 atua como um **servidor BLE**.
- Anúncio de um serviço BLE com um UUID exclusivo.
- A característica dentro do serviço tem propriedades de **leitura** e **escrita**.
- Valor inicial da característica: `"Hello from ESP32"`.
- Pode ser detectado e conectado por um iPhone.

## Requisitos

### Hardware

- **ESP32**
- **Cabo USB** para carregar o código no ESP32

### Software

- **Arduino IDE** ou **PlatformIO** para programar o ESP32
- **Bibliotecas ESP32 BLE**: As bibliotecas necessárias já vêm incluídas no framework ESP32 para a Arduino IDE.

### No iPhone:

- Um aplicativo de escaneamento BLE, Bluefruit Connect
- Alternativamente, você pode criar um app iOS personalizado usando **CoreBluetooth** para se conectar e interagir com o ESP32.

## Instruções de Uso

### Passo 1: Configurar o ESP32

1. Clone ou baixe este repositório para sua máquina.
2. Abra o arquivo do código-fonte **.ino** no Arduino IDE.
3. Carregue o código no ESP32.

### Passo 2: Escanear o ESP32 no iPhone

1. Abra o **app BLE Scanner** no iPhone.
2. Certifique-se de que o **Bluetooth** está ativado no iPhone.
3. Escaneie por dispositivos BLE.
4. Você deve ver um dispositivo chamado **ESP32_BLE** na lista.
5. Conecte-se ao dispositivo e visualize suas características.
6. A característica com o valor `"Hello from ESP32"` poderá ser lida e também modificada.

O código é um exmplo de funcionamento, você pode estudar e alterar como melhor entender.
