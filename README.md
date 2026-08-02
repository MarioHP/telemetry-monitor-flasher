# 🏎️ TELEMETRY MONITOR — Web Installer
<p align="center">
<img src="https://github.com/MarioHP/telemetry-monitor-flasher/blob/main/images/logo.png" width="400" alt="logo">
</p>  
Tento repozitář slouží k pohodlnému nahrávání (flashování) firmwaru pro projekt **TELEMETRY MONITOR** přímo z prohlížeče bez nutnosti instalace jakéhokoliv vývojového prostředí (Arduino IDE, VS Code) nebo externích nástrojů (`esptool`).

🌐 **Webový instalátor běží na adrese:**  
👉 **[mariohp.github.io/telemetry-monitor-flasher/](https://mariohp.github.io/telemetry-monitor-flasher/)**

<div align="center">
  <h3>🎥 Ukázka monitoru v reálném provozu</h3>
  <a href="https://youtu.be/QvaUA5twQTg" target="_blank">
    <img src="https://img.youtube.com/vi/QvaUA5twQTg/maxresdefault.jpg" width="550" alt="Škoda KAROQ hidden engine multipage telemetry monitor" style="border-radius: 8px; border: 1px solid #333;">
  </a>
  <p><i>Klikněte na obrázek pro přehrání videa na YouTube.</i></p>
</div>

## 🚗 Kompatibilita s motory

* **Otestováno & 100% Funkční:** motor **1.5 TSI EVO2 (DXD)** – Škoda Karoq
* **Rozšířená kompatibilita EA211 (Netestováno v provozu):** Software obsahuje parametry a obsluhu i pro ostatní motory řady EA211 (`1.0 TSI`, `1.2 TSI`, `1.4 TSI`, `1.5 TSI`).
  * 📜 **[Kompletní seznam podporovaných kódů motorů najdete ZDE](firmware/ea211-engine-codes.md)**


## 🖨️ Hardware & Podporované desky

### Ideaspark ESP32 1.9" TFT 
* **Displej:** 1.9" ST7789 TFT (170×320 px)
* **Deska:** Ideaspark ESP32 Development Board
* 🖨️ **3D Tisk & Krabička:** Pro profesionální vzhled a ochranu displeje v autě si můžete vytisknout vlastní krabičku:
  * Model ke stažení: [IdeaSpark ESP32 1.9" Display Case na Printables.com](https://www.printables.com/model/1169046-ideaspark-esp32-19-display-case)
 
---

## ✨ Klíčové funkce firmwaru v1.1.0(1)

* **🌐 Vícejazyčné rozhraní:** Volba jazyka v konfiguraci (Čeština / Slovenčina / English).
* **🏎️ Volba úvodního loga:** Možnost vybrat startovací chromové 3D logo automobilky (Škoda, SEAT, Sportline, VW, CUPRA).
  
     <p align="center">  
   <img src="https://github.com/MarioHP/telemetry-monitor-flasher/blob/main/images/loga.png" width="400" alt="logo">
   </p>  
   
* **📊 Živá telemetrie:**
  * Rychlost (`km/h`), Teplota chladicí kapaliny, Teplota oleje, Napětí ECU, Hladina oleje.
  * *EGT / OBD strana:* Napětí OBD, Krouticí moment motoru, Teplota katalyzátoru, Teplota paliva, Teplota výfukových plynů, Degradace oleje.
* **🔧 Web Config Portal:** Integrované Wi-Fi přístupové rozhraní pro spárování BT adaptéru (MAC adresa), změnu jazyka a volbu startovacího loga.

---

## 🛠️ Jak nahrát firmware a nakonfigurovat MAC adresu

### KROK 1: Nahrání firmwaru přes Web Flasher

#### Požadavky
* **Podporovaný prohlížeč:** Google Chrome, Microsoft Edge, Opera nebo Brave *(Safari a Firefox technologii Web Serial zatím nepodporují)*.
* **USB kabel:** Datový USB kabel pro propojení ESP32 s počítačem.

#### Postup instalace
1. Připojte ESP32 pomocí USB kabelu k PC.
2. Otevřete [mariohp.github.io/telemetry-monitor-flasher](https://mariohp.github.io/telemetry-monitor-flasher/).
3. Z rozevíracího seznamu zvolte správnou desku (např. *"v1.1.0 - EA211 Universal 1.5 TSI EVO2 - ŠKODA, SEAT"*).
4. Klikněte na tlačítko **Connect**, vyberte **COM port** a potvrďte.
5. Klikněte na **INSTALL** a počkejte na dokončení 100 % (cca 2 min.).

---

# 📱 Bezdrátová konfigurace a OTA aktualizace
### KROK 2: První nastavení & Spárování MAC adresy (DŮLEŽITÉ ⚠️)

Aby displej komunikoval s vaším OBD2 adaptérem v autě, musíte po flashnutí nastavit jeho Bluetooth MAC adresu:

1. **Vstup do OTA / Konfiguračního režimu:**
   * Při zapnutí napájení (nebo po restartu - spodní tlačítko EN) **podržte horní tlačítko (BOOT) na monitoru**.
   * Monitor se přepne do servisního režimu a vytvoří vlastní Wi-Fi síť a na displeji zobrazí informace o režimu **OTA / CONFIG**.
2. **Připojení k Wi-Fi:**
   * Na svém telefonu nebo notebooku otevřete seznam Wi-Fi sítí a připojte se k síti:
     * **SSID:** `Telemetry Monitor`
     * **Heslo:** `12345678`
3. **Otevření rozhraní nastavení:**
   * Otevřete webový prohlížeč a zadejte adresu:  
    👉 **`http://10.10.10.10/config`**
4. **Konfigurace parametrů:**
   * **Nová MAC adresa:** Zadejte MAC adresu vašeho Bluetooth OBD2 adaptéru (ve formátu `XX:XX:XX:XX:XX:XX`).
   * **Úvodní logo:** Vyberte preferované 3D logo při startu.  
   * **Jazyk:** Zvolte požadovaný jazyk rozhraní (Čeština, Slovenčina, English).
5. **Uložení a restart:**
   * Stiskněte tlačítko **Uložit nastavení** / **Save Settings**.
   * Zařízení restartujte spodním tlačítkem na desce pro uplatnění nových hodnot.

## 🔄 2. Nahrávání nového firmwaru přes Wi-Fi (OTA)

Pro budoucí aktualizace kódu už nepotřebujete USB kabel. Vše probíhá bezdrátově přes rozhraní **OTA (Over-The-Air)**:

1. Stáhněte si do mobilu nový soubor firmwaru s příponou **`.bin`**:

   - 👉 [v1.1.1 – EA211 Universal 1.5 TSI EVO2 – VW, CUPRA – Ideaspark 1.9 display](https://raw.githubusercontent.com/mariohp/telemetry-monitor-flasher/main/firmware/v1.1.1/firmware_v1.1.1.bin)
   - 👉 [v1.1.0 – EA211 Universal 1.5 TSI EVO2 – ŠKODA, SEAT – Ideaspark 1.9 display](https://raw.githubusercontent.com/mariohp/telemetry-monitor-flasher/main/firmware/v1.1.0/firmware_v1.1.0.bin)
   - 👉 [v1.0.0 – KAROQ Sportline 1.5 TSI EVO2 – Ideaspark 1.9 display](https://raw.githubusercontent.com/mariohp/telemetry-monitor-flasher/main/firmware/v1.0.0/firmware_v1.0.0.bin)
3. Spusťte servisní režim na monitoru (**podržením horního tlačítka** (BOOT) při zapnutí).
4. Připojte mobil k Wi-Fi síti monitoru a v prohlížeči otevřete:  
   👉 **`10.10.10.10/update`**
5. Vyberte stažený soubor `.bin` z paměti telefonu a stiskněte **Update** (Aktualizovat).
6. Během několika vteřin se nový firmware nahraje, monitor se sám restartuje a naskočí v nejnovější verzi! 🎉

---

## ❓ Řešení problémů (Troubleshooting)

### 🔍 Jak zjistit MAC adresu OBD-II adaptéru v telefonu

MAC adresa je unikátní 12místný kód (vypadá např. jako `11:22:33:AA:BB:CC`). Zde je nejrychlejší postup, jak ji zjistit:

### 📱 Android
1. Zapněte zapalování v autě a zapojte OBD-II adaptér do zásuvky.
2. V telefonu otevřete **Nastavení ⚙️ ➔ Bluetooth**.
3. Dejte **Spárovat nové zařízení** (případně vyhledejte nová zařízení).
4. Klikněte na váš OBD adaptér (často se jmenuje `OBDII`, `OBD2`, `V-GATE` nebo `ELM327`).
5. Po spárování klikněte v seznamu spárovaných zařízení na **ikonu ozubeného kolečka ⚙️** vedle názvu adaptéru.
6. Dole na obrazovce nebo v detailu zařízení uvidíte položku **MAC adresa** (nebo *Adresa zařízení*).

> 💡 **Tip pro Android:** Pokud vaše verze Androidu MAC adresu v nastavení neskrývá, stačí v Google Play zdarma stáhnout aplikaci **Serial Bluetooth Terminal** nebo **OBD Auto Doctor**, které MAC adresu připojeného adaptéru zobrazí okamžitě.
 
* **Prohlížeč nenabízí žádný COM port:**
  * Zkontrolujte instalaci ovladačů pro převodník USB-to-UART (nejčastěji **CH340** nebo **CP210x**).
  * Vyzkoušejte jiný USB kabel.
* **Zařízení píše "ZTRÁTA DAT" / "DATA LOSS":**
  * Ověřte, zda je v konfiguraci na `http://10.10.10.10/config` zadaná správná MAC adresa vašeho BT adaptéru a zda je adaptér zapojený v OBD2 zásuvce auta.
* **Instalace se zasekne na 0 %:**
  * Při stisknutí tlačítka *Install* podržte na desce ESP32 tlačítko **BOOT**, dokud se nahrávání nerozběhne.

---

<p align="center">
  <i>Created by <b>Mario</b></i>
</p>
