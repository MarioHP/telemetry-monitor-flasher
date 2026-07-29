# 🏎️ Telemetry Monitor — Web Installer

Tento repozitář slouží k pohodlnému nahrávání (flashování) firmwaru pro projekt **Telemetry Monitor** přímo z prohlížeče bez nutnosti instalace jakéhokoliv vývojového prostředí (Arduino IDE, VS Code) nebo externích nástrojů (`esptool`).

🌐 **Webový instalátor běží na adrese:**  
👉 **[mariohp.github.io/telemetry-monitor-flasher/](https://mariohp.github.io/telemetry-monitor-flasher/)**

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
   * Z rozevíracího seznamu zvolte **požadovanou verzi firmwaru** (doporučujeme vždy nejnovější verzi).
   * Přečtěte si přehled změn (Changelog) pro vybranou verzi.

4. **Připojení k zařízení**
   * Klikněte na tlačítko **Connect** (Připojit).
   * V nabídce prohlížeče vybeřte správný COM port vašeho ESP32 a potvrdte kliknutím na **Připojit**.

5. **Zahájení flashování**
   * V dialogovém okně klikněte na **INSTALL TELEMETRY MONITOR**.
   * Potvrďte volbu stisknutím **INSTALL**.
   * *(Volitelné)* Pokud chcete zařízení kompletně vyčistit od starých dat a nastavení, zaškrtněte možnost *Erase device*.

6. **Dokončení**
   * Počkejte, až ukazatel průběhu dosáhne **100 %** (trvá cca 30–60 sekund).
   * Jakmile se zobrazí zpráva **Installation complete!**, klikněte na **NEXT**.
   * Zařízení se automaticky restartuje a nový firmware je okamžitě připraven k použití! 🎉

---

## ❓ Řešení problémů (Troubleshooting)

* **Prohlížeč nenabízí žádný COM port:**  
  Zkontrolujte, zda máte v počítači nainstalované ovladače pro USB převodník vašeho ESP32 (nejčastěji řada **CP210x** nebo **CH340**).
* **Instalace se zasekne na 0 % (Connecting...):**  
  Při kliknutí na tlačítko *Install* stiskněte a krátce podržte tlačítko **BOOT** (případně **IO0**) přímo na desce ESP32, dokud nahrávání nezačne.
* **Po flashnutí zařízení nenaskočí:**  
  Odpojte USB kabel na 2 sekundy od počítače a znovu jej zapojte (případně zmáčkněte tlačítko **RESET** na desce).

---

# 📱 Bezdrátová konfigurace a OTA aktualizace

S novou verzí systému **již nemusíte zařízení připojovat k počítači** ani instalovat jakékoliv vývojářské prostředí! Veškeré nastavení i budoucí aktualizace firmwaru pohodlně vyřešíte **přímo z vašeho mobilního telefonu**.

---

## ⚙️ 1. Změna MAC adresy OBD adaptéru

Pokud si pořídíte nový OBD adaptér nebo potřebujete změnit jeho propojení, můžete MAC adresu snadno upravit přes webové rozhraní:

1. **Vstup do servisního režimu**
   * Při zapnutí napájení (nebo po restartu) **podržte tlačítko na monitoru**.
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
   * Klikněte na tlačítko **Restart** (nebo zařízení krátce odpojte od napájení).
   * Monitor se po náběhu okamžitě spáruje s novým OBD adaptérem.

---

## 🔄 2. Nahrávání nového firmwaru přes Wi-Fi (OTA)

Pro budoucí aktualizace kódu už nepotřebujete USB kabel. Vše probíhá bezdrátově přes rozhraní **OTA (Over-The-Air)**:

1. Stáhněte si do mobilu nový soubor firmwaru s příponou **`.bin`** (např. z GitHub Releases).
2. Spusťte servisní režim na monitoru (podržením tlačítka při zapnutí).
3. Připojte mobil k Wi-Fi síti monitoru a v prohlížeči otevřete:  
   👉 **`10.10.10.10/update`**
4. Vyberte stažený soubor `.bin` z paměti telefonu a stiskněte **Update** (Aktualizovat).
5. Během několika vteřin se nový firmware nahraje, monitor se sám restartuje a naskočí v nejnovější verzi! 🎉

---

## 📄 Licence & Podpora

Vytvořeno pro projekt **Telemetry Monitor (Škoda Karoq)**.  
Poháněno pomocí technologie [ESP Web Tools](https://esphome.github.io/esp-web-tools/).
