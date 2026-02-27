# Arduino Light Seeking Scanner 🛰️

Ushbu loyiha Arduino va Photoresistor (LDR) yordamida atrofdagi eng yorug' nuqtani avtomatik skanerlaydi. 
Bu tizim quyosh panellarini quyoshga yo'naltirish (Solar Tracker) prototipi sifatida ishlatilishi mumkin.

## Komponentlar:
* Arduino Uno / Nano
* SG90 Servo motor
* Photoresistor (LDR)
* 10k Ohm va 330 Ohm rezistorlar
* LED indikator

## Qanday ishlaydi?
1. Servo 0° dan 180° gacha aylanadi.
2. Har bir qadamda LDR orqali yorug'lik darajasi o'lchanadi.
3. Eng yuqori qiymat topilgan burchak xotirada saqlanadi.
4. Skanerlash tugagach, servo eng yorug' nuqtaga qaytadi.
5. Agar yorug'lik manbai joyi o'zgarsa (qiymat tushib ketsa), tizim qayta skanerlashni boshlaydi.

## Ulanish sxemasi
(Bu yerga sxema rasmini yuklashingiz mumkin)
