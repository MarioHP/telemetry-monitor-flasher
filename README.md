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

## 📄 Licence & Podpora

Vytvořeno pro projekt **Telemetry Monitor (Škoda Karoq)**.  
Poháněno pomocí technologie [ESP Web Tools](https://esphome.github.io/esp-web-tools/).
