# 🛰️ Light Seeking Scanner (Light Tracker)

English and Uzbek documentation for the Arduino-based light-seeking servo project.

---

## 🇺🇿 O'zbek tilida

### Loyiha haqida
Ushbu qurilma atrofdagi eng yorug' nuqtani topish uchun 180 daraja skanerlashni amalga oshiradi. Bu tizim quyosh panellarini avtomatik burish (Solar Tracker) prototipi sifatida ishlatilishi mumkin.

### Komponentlar
* **Arduino Uno**
* **SG90 Servo motor**
* **Photoresistor (LDR)**
* **10k Ohm rezistor** (LDR uchun)
* **LED** (Indikator sifatida)
* **330 Ohm rezistor** (LED uchun)

### Ulanish sxemasi
1. **LDR:** Bir uchi 5V ga, ikkinchisi A0 piniga. A0 pinidan 10k rezistor orqali GND ga.
2. **Servo:** Signal simi (sariq) Pin 8 ga. VCC (qizil) 5V ga, GND (jigarrang) GND ga.
3. **LED:** 330 Om rezistor orqali doimiy 5V ga (doim yonib turishi uchun) va GND ga.

---

## 🇺🇸 In English

### Project Description
This device performs a 180-degree scan to locate the brightest point in its environment. This system can be utilized as a prototype for automatic solar panel tracking (Solar Tracker).

### Components
* **Arduino Uno**
* **SG90 Servo motor**
* **Photoresistor (LDR)**
* **10k Ohm resistor** (for LDR)
* **LED** (as a power indicator)
* **330 Ohm resistor** (for LED)

### Circuit Connections
1. **LDR:** One leg to 5V, the other to pin A0. A 10k resistor connects A0 to GND.
2. **Servo:** Signal wire (yellow) to Pin 8. VCC (red) to 5V, GND (brown) to GND.
3. **LED:** Connected directly to 5V via a 330 Ohm resistor and GND (remains ON constantly).

---

## 🛠️ Code Logic / Kod mantig'i

```cpp
// Summary:
// 1. Scan from 0 to 180 degrees.
// 2. Record the angle with the highest analog value.
// 3. Move the servo to that specific angle.
// 4. Wait until the light intensity changes significantly to re-scan.
