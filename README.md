# Rozšírenie schopností robota Lienka pomocou WiFi (Using WiFi to teach Lienka robot new tricks)

## Popis

Lienka je 3D tlačený robot pre deti inšpirovaný známym robotom Bee-Bot. Je
založený na ESP8266 wifi čipe a tak ponúka ďalšie možnosti interakcie s ním.
Aktuálna verzia softvéru však ponúka iba veľmi jednouché možnosti interakcie
a nevyužíva naplno jej potenciál. Rovnako aj hardvér momentálne neobsahuje
žiadne senzory, ktoré by umožňovali s robotom vykonávať zložitejšie úlohy.
Prepojenie s počítačom alebo tabletom by umožňovalo nielen vizualizáciu
a editovanie programu na počítači, ale aj možnosť použiť zariadenia tabletu/
počítača, ako napríklad kamera, na rozšírenie schopností robota.

## Ciele
Implementovať (jazyk C) komunikáciu cez wifi (vrátane konfigurácie a pod.)
a následne desktopovú alebo mobilnú aplikáciu (preferované webapp riešenie,
ktoré funguje na oboch platformách) ktorá s ním komunikuje.

## Progres
- Lienka funguje ako server (dá sa na jej Wifi sieť pripojiť)
- Po zadaní adresy 192.168.4.1 sa otvorí web stránka, ktorá beží na ESP čipe, ktorý je v Lienke.
- Z web stránky si vieme zvoliť Wifi sieť, na ktorú sa chceme pripojiť
- Po pripojení na Wifi sieť zadáme lokálnu IP adresu Lienky a otvorí sa nám webstránka, z ktorej vieme riadiť Lienku.

## Ďalšie informácie
**Meno a priezvisko študenta:** Bc. Adam Halász

**Vedúci:** RNDr. Jozef Šiška, PhD.

## Odkazy
**Webová aplikácia - Github:** [https://github.com/adamhala007/lienka.git](https://github.com/adamhala007/lienka.git)

**Webstránka aplikácie:** [https://lienka-iijzubasag.now.sh/](https://lienka-iijzubasag.now.sh/)
 
