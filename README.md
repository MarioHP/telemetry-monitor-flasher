# 🏎️ Škoda KAROQ Telemetry Monitor — Web Installer

Tento repozitář slouží k pohodlnému nahrávání (flashování) firmwaru pro projekt **Telemetry Monitor** přímo z prohlížeče bez nutnosti instalace jakéhokoliv vývojového prostředí (Arduino IDE, VS Code) nebo externích nástrojů (`esptool`).

🌐 **Webový instalátor běží na adrese:**  
👉 **[mariohp.github.io/telemetry-monitor-flasher/](https://mariohp.github.io/telemetry-monitor-flasher/)**

<p align="center">
<b>🎥 VIDEO S UKÁZKOU MONITORU</b><br>
<a href="https://youtu.be/QvaUA5twQTg">
  <img src="https://img.youtube.com/vi/QvaUA5twQTg/maxresdefault.jpg" width="400" alt="Watch the video">
</a>
</p>

## 🖨️ HARDWARE

<p align="center"><img src="https://m.media-amazon.com/images/I/71fOYS7KVzL.jpg" width="250" alt="ideaspark® ESP32 Development Board"></p>
ideaspark® ESP32 Development Board 1.9 inch ST7789 170x320 TFT

## 🖨️ 3D Tisk & Krabička

Pro profesionální vzhled a ochranu displeje v autě si můžete vytisknout vlastní krabičku na 3D tiskárně:

* 📦 **Model krabičky ke stažení:**  
  👉 [IdeaSpark ESP32 1.9" Display Case na Printables.com](https://www.printables.com/model/1580661-ideaspark-esp32-19-display-case)
  
---

## 🚀 Jak nahrát firmware do zařízení

### 📋 Požadavky
* **Podporovaný prohlížeč:** Google Chrome, Microsoft Edge, Opera nebo Brave.  
  *(Safari a Firefox technologii Web Serial zatím nepodporují)*.
* **USB kabel:** Datový USB kabel pro propojení ESP32 s počítačem  
  *(Ujistěte se, že nepoužíváte pouze nabíjecí kabel bez datových vodičů)*.

---

### 🛠️ Postup instalace krok za krokem

1. **Připojení k PC**
   * Připojte vaše ESP32 zařízení pomocí USB kabelu k počítači.

2. **Otevření instalátoru**
   * Ve vašem prohlížeči otevřete stránku [mariohp.github.io/telemetry-monitor-flasher/](https://mariohp.github.io/telemetry-monitor-flasher/).

3. **Výběr verze**
   * Z rozevíracího seznamu zvolte **požadovanou verzi firmwaru** (podle kódu motoru vozidla).
   * Přečtěte si přehled změn (Changelog) pro vybranou verzi.

4. **Připojení k zařízení**
   * Klikněte na tlačítko **Connect** (Připojit).
   * V nabídce prohlížeče vybeřte správný COM port vašeho ESP32 a potvrdte kliknutím na **Připojit**.

5. **Zahájení flashování**
   * V dialogovém okně klikněte na **INSTALL TELEMETRY MONITOR**.
   * Potvrďte volbu stisknutím **INSTALL**.

6. **Dokončení**
   * Počkejte, až ukazatel průběhu dosáhne **100 %** (trvá cca 30–60 sekund).
   * Jakmile se zobrazí zpráva **Installation complete!**, klikněte na **NEXT**.
   * Zařízení se automaticky restartuje a nový firmware je okamžitě připraven k použití! 🎉

---

## ❓ Řešení problémů (Troubleshooting)

* **Prohlížeč nenabízí žádný COM port:**  
  Zkontrolujte, zda máte v počítači nainstalované ovladače pro USB převodník vašeho ESP32 (nejčastěji řada **CP210x** nebo **CH340**).
* **Instalace se zasekne na 0 % (Connecting...):**  
  Při kliknutí na tlačítko *Install* stiskněte a krátce podržte tlačítko **BOOT** přímo na desce ESP32, dokud nahrávání nezačne.
* **Po flashnutí zařízení nenaskočí:**  
  Odpojte USB kabel na 2 sekundy od počítače a znovu jej zapojte (případně zmáčkněte tlačítko **RESET** na desce).

---
---

# 📱 Bezdrátová konfigurace a OTA aktualizace

S novou verzí systému **již nemusíte zařízení připojovat k počítači** ani instalovat jakékoliv vývojářské prostředí! Veškeré nastavení i budoucí aktualizace firmwaru pohodlně vyřešíte **přímo z vašeho mobilního telefonu**.

---


## ⚙️ 1. Změna MAC adresy OBD adaptéru

Pokud si pořídíte nový OBD adaptér nebo potřebujete změnit jeho propojení, můžete MAC adresu snadno upravit přes webové rozhraní:

## 🔍 Jak zjistit MAC adresu OBD-II adaptéru v telefonu

MAC adresa je unikátní 12místný kód (vypadá např. jako `11:22:33:AA:BB:CC`). Zde je nejrychlejší postup, jak ji zjistit:

### 📱 Android
1. Zapněte zapalování v autě a zapojte OBD-II adaptér do zásuvky.
2. V telefonu otevřete **Nastavení ⚙️ ➔ Bluetooth**.
3. Dejte **Spárovat nové zařízení** (případně vyhledejte nová zařízení).
4. Klikněte na váš OBD adaptér (často se jmenuje `OBDII`, `OBD2`, `V-GATE` nebo `ELM327`).
5. Po spárování klikněte v seznamu spárovaných zařízení na **ikonu ozubeného kolečka ⚙️** vedle názvu adaptéru.
6. Dole na obrazovce nebo v detailu zařízení uvidíte položku **MAC adresa** (nebo *Adresa zařízení*).

> 💡 **Tip pro Android:** Pokud vaše verze Androidu MAC adresu v nastavení neskrývá, stačí v Google Play zdarma stáhnout aplikaci **Serial Bluetooth Terminal** nebo **OBD Auto Doctor**, které MAC adresu připojeného adaptéru zobrazí okamžitě.
 
---  

1. **Vstup do servisního režimu**
   * Při zapnutí napájení (nebo po restartu - spodní tlačítko EN) **podržte horní tlačítko (BOOT) na monitoru**.
   * Monitor se přepne do servisního režimu a vytvoří vlastní Wi-Fi síť.
   * Na displeji se zobrazí servisní obrazovka s IP adresou `10.10.10.10`.

2. **Připojení z mobilního telefonu**
   * V telefonu se připojte k Wi-Fi síti vytvořené monitorem.
   * Otevřete webový prohlížeč a zadejte adresu:  
     👉 **`10.10.10.10/config`**

3. **Uložení nové adresy**
   * Do příslušného pole zadejte **novou MAC adresu** vašeho OBD adaptéru.
   * Klikněte na tlačítko **Uložit** (Save).
   * Zadaná adresa se bezpečně uloží do trvalé paměti **NVS** (zůstane bezpečně zachována i po kompletním odpojení od autobaterie).

4. **Restart**
   * Klikněte na spodní tlačítko (EN) **Restart** (nebo zařízení krátce odpojte od napájení).
   * Monitor se po náběhu okamžitě spáruje s novým OBD adaptérem.

---

## 🔄 2. Nahrávání nového firmwaru přes Wi-Fi (OTA)

Pro budoucí aktualizace kódu už nepotřebujete USB kabel. Vše probíhá bezdrátově přes rozhraní **OTA (Over-The-Air)**:

1. Stáhněte si do mobilu nový soubor firmwaru s příponou **`.bin`**:  
   👉 [v1.0.0 - KAROQ Sportline 1.5 TSI (DXD) - Ideaspark 1.9 display](https://raw.githubusercontent.com/mariohp/telemetry-monitor-flasher/main/firmware/v1.0.0/firmware_v1.0.0.bin)
2. Spusťte servisní režim na monitoru (podržením horního tlačítka (BOOT) při zapnutí).
3. Připojte mobil k Wi-Fi síti monitoru a v prohlížeči otevřete:  
   👉 **`10.10.10.10/update`**
4. Vyberte stažený soubor `.bin` z paměti telefonu a stiskněte **Update** (Aktualizovat).
5. Během několika vteřin se nový firmware nahraje, monitor se sám restartuje a naskočí v nejnovější verzi! 🎉

---

## 📄 Licence & Podpora

Vytvořeno pro projekt **Telemetry Monitor (Škoda Karoq)**.  
Poháněno pomocí technologie [ESP Web Tools](https://esphome.github.io/esp-web-tools/).
