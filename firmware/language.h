#ifndef LANGUAGE_H
#define LANGUAGE_H

#include <Arduino.h>

// Definice jazyků
enum Language {
  LANG_CZ = 0,
  LANG_SK = 1,
  LANG_EN = 2,
  TOTAL_LANGUAGES
};

// Pole textů s podporou CZ (0), SK (1), EN (2)
const AppTexts TEXTS[] = {
  // --- 0: ČEŠTINA (LANG_CZ) ---
  {
    "OTA REZIM (AKTUALIZACE)",
    "Wi-Fi: Telemetry Monitor",
    "Heslo: 12345678",
    "OTA: 10.10.10.10/update",
    "MAC: 10.10.10.10/config",
    "PRIPOJOVANI BT...",
    "POKUS: ",
    "PRIPOJENO!",
    "NASTAVUJI ECU...",
    "TELEMETRY MONITOR",
    "Konfigurace",
    "Aktuální MAC v paměti",
    "Nová MAC adresa (nepovinné)",
    "Úvodní logo",
    "Jazyk",
    "Uložit nastavení",
    "Nastavení uloženo!",
    "Restartuj zařízení tlačítkem pro uplatnění změn.",
    "Zpět na konfiguraci",
    "Vybrané logo",  
    "Výchozí",  
    "Chyba: Špatný formát MAC!",
    "Zadávejte ve formátu:", 
    
    // --- STRANA ACT ---
    "km/h",
    "ZTRATA DAT",  
    
    // --- STRANA EGT --- 
    "NAPETI OBD",
    "MOMENT MOT.",
    "TEP. KATALYZ.",
    "TEP. PALIVA",
    "TEP. VYFUKU",
    "DEG. OLEJE",     

    // --- STRANA BATTERY --- 
    "NAPETI BAT.",
    "PROUD BAT.",
    "TEP. BATERIE",
    "TEP. SENSORU",
    "ODPOR BAT.",
    "SOC | SOH"     
  },

  // --- 1: SLOVENČINA (LANG_SK) ---
  {
    "OTA REZIM (AKTUALIZACIA)",
    "Wi-Fi: Telemetry Monitor",
    "Heslo: 12345678",
    "OTA: 10.10.10.10/update",
    "MAC: 10.10.10.10/config",
    "PRIPAJANIE BT...",
    "POKUS: ",
    "PRIPOJENE!",
    "NASTAVUJEM ECU...",
    "TELEMETRY MONITOR",
    "Konfigurácia",
    "Aktuálna MAC v pamäti",
    "Nová MAC adresa (nepovinné)",
    "Úvodné logo",
    "Jazyk",
    "Uložiť nastavenia",
    "Nastavenia uložené!",
    "Restartujte zariadenie tlačidlom pre uplatnenie zmien.",
    "Späť na konfiguráciu",
    "Vybrané logo",  
    "Predvolené",  
    "Chyba: Nesprávny formát MAC!",
    "Zadávajte vo formáte:", 
    
    // --- STRANA ACT ---
    "km/h",
    "STRATA DAT",  
    
    // --- STRANA EGT --- 
    "NAPATIE OBD",
    "MOMENT MOT.",
    "TEP. KATALYZ.",
    "TEP. PALIVA",
    "TEP. VYFUKU",
    "DEG. OLEJA",  

    // --- STRANA BATTERY --- 
    "NAPATIE BAT.",
    "PRUD BATERIE",
    "TEP. BATERIE",
    "TEP. SENSORA",
    "ODPOR BAT.",
    "SOC | SOH"          
  },

  // --- 2: ANGLIČTINA (LANG_EN) ---
  {
    "OTA MODE (UPDATE)",
    "Wi-Fi: Telemetry Monitor",
    "Pass: 12345678",
    "OTA: 10.10.10.10/update",
    "MAC: 10.10.10.10/config",
    "CONNECTING BT...",
    "ATTEMPT: ",
    "CONNECTED!",
    "CONFIGURING ECU...",
    "TELEMETRY MONITOR",
    "Configuration",
    "Current MAC in memory",
    "New MAC address (optional)",
    "Boot logo",
    "Language",
    "Save settings",
    "Settings saved!",
    "Restart the device using the button to apply changes.",
    "Back to Configuration",
    "Selected logo",
    "Default", 
    "Error: Invalid MAC format!",
    "Use format:",
    
    // --- STRANA ACT ---
    "km/h",
    "DATA LOSS",   
    
    // --- STRANA EGT --- 
    "OBD VOLTAGE",
    "ENG. TORQUE",
    "CAT. TEMP.",
    "FUEL TEMP.",
    "EXH. TEMP.",
    "OIL DEG.",  

    // --- STRANA BATTERY --- 
    "BAT. VOLTAGE", 
    "BAT. CURRENT", 
    "BAT. TEMP.", 
    "SENS. TEMP.", 
    "BAT. RESIST.", 
    "SOC | SOH"         
  }
};

#endif // LANGUAGE_H
