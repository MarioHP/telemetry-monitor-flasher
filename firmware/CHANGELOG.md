# 📋 Release Notes / Changelog

---

## 🚀 Verze 1.1.0(1) (EA211 Universal)

### 🚗 Podpora motorů & HW
* **Otestováno & Potvrzeno:** Motor **1.5 TSI (DXD)** – Škoda Karoq
* **Podporovaný hardwarový modul:** Ideaspark ESP32 1.9" Display 

### ✨ Novinky a vylepšení
* **🎨 Grafika a displej:**
  * Optimalizace barev displeje.
  * Nové úvodní logo **TELEMETRY MONITOR**.
* **🏎️ Volba startovacího loga (3D Chrom):**
  * Možnost změny loga přímo v rozhraní nastavení (`/config`):
    * Škoda *(pouze logo)*
    * SEAT *(pouze logo)*
    * Škoda *(logo + text)*
    * SEAT *(logo + text)*
    * Škoda *(Sportline)*
    

  * Verze 1.1.1:
    * VW *(pouze logo)*
    * CUPRA *(pouze logo)*
    * VW *(logo + text)*
    * CUPRA *(logo + text)*
    
    
* **🌐 Multijazyčná podpora:**
  * Do nastavení přidána volba jazykové verze: **Čeština (CZ)** / **Slovenčina (SK)** / **English (EN)**.

---

## 📦 Verze 1.0.0 (Původní release)

### ✨ Základní funkce
* **🚗 Startovací obrazovka:** Logo KAROQ + Sportline při startu.
* **📊 Primární telemetrie:**
  * Rychlost (`km/h`)
  * Teplota chladicí kapaliny
  * Teplota motorového oleje
  * Napětí ECU
  * Hladina oleje
* **📈 Doplňková telemetrie (EGT / OBD):**
  * Napětí OBD
  * Krouticí moment motoru
  * Teplota katalyzátoru
  * Teplota paliva
  * Teplota výfukových plynů
  * Degradace oleje
* **OTA režim pro aktualizaci z mobilního telefonu**
* **Webserver pro nastavení monitoru**
* **🌐 Čeština**
---
## 📊 Funkční přehled zobrazovaných dat

Systém monitoruje klíčové parametry s dynamickým uzpůsobením barev.

### 1. Teplota motorového oleje (`OLEJ`)
| Barva | Stav | Význam |
| :--- | :--- | :--- |
| 🟦 **Modrá** | Studený motor | Nepoužívat plný výkon |
| 🟧 **Oranžová** | Zahřívání | Motor se blíží k provozní teplotě |
| 🟩 **Limetková** | Ideální stav | Motor je plně prohřátý |
| 🟥 **Červená** | Zvýšená zátěž | Např. dálnice nebo táhlé stoupání |

### 2. Teplota chladicí kapaliny (`KAPALINA`)
| Barva | Stav |
| :--- | :--- |
| 🟦 **Modrá** | Studená voda |
| 🟧 **Oranžová** | Zahřívání |
| 🟩 **Zelená** | Provozní teplota |
| 🟥 **Červená** | Možné přetížení chladicího systému |

### 3. Reálná rychlost (`RYCHLOST`)
Digitální údaj přímo z řídící jednotky (přesnější než tachometr). Implementována **chytrá hystereze 2 km/h** proti problikávání barev.
- ⬜ **Šedá:** Běžná rychlost.
- 🟦 **Modrá** (Limity): Signalizace pro rychlosti:
  - 54–60 km/h (Limit obec)
  - 134–140 km/h (Limit dálnice)
  - 🟥 **Červená** - nad 160 km/h! 

### 4. Palubní napětí ECU (`vlevo dole`)
Sledování inteligentního dobíjení přímo ze senzoru jednotky.
- ⬜ **Šedá:** Standardní dobíjení za jízdy.
- 🟧 **Oranžová:** Aktivní rekuperace (brzdění motorem, intenzivní dobíjení).
- 🟥 **Červená:** Baterie se vybíjí (motor vypnutý/slabý alternátor).

### 4. Hladina oleje (`vpravo dole`)
Přesné zobrazení náplně v mm - digitální měrka a výpočet množství chybějící náplně z aktuální výšky hladiny oleje, které je nutné dolít do maxima. 
Údaj se mění s teplotou oleje, k ustálení dojde po zahřátí na provozní teplotu.
- ⬜ **Šedá:** OK
- 🟧 **Oranžová:** <40 mm (Varování)
- 🟥 **Červená:** <36 mm (Dolít)

---

## 💡 Chytré funkce systému
* **Prioritizace:** Rychlost se čte 2× za sekundu, statická data (teploty/hladina) každých 5 sekund.
* **Watchdog:** Automatický restart systému při ztrátě dat nebo záseku komunikace.
* **Design:** Custom fonty a grafika inspirovaná Virtual Cockpitem.
* **Hystereze:** Zabraňuje zběsilému přepínání barev při jízdě na hranici limitu (např. stabilní barva při kolísání 53-54 km/h).
* **Smoothing (Vyhlazování):** Optimalizované čtení dat z OBD sběrnice, které nezatěžuje procesor a nezpůsobuje záseky vykreslování.
* **Periferní scannability:** Barevné schéma je navrženo tak, aby řidič nemusel číst čísla – stačí vnímat barvu v zorném poli.

---
  
## 🛠️ Rozšířená kompatibilita motorů EA211 (Netestováno)

Software obsahuje definice pro níže uvedené kódové označení motorů řady EA211. *Funkčnost na těchto motorech nebyla přímo ověřena, ale je teoreticky podporována:*

| Řada | Kódy motorů |
| :--- | :--- |
| **EA211 TSI / TFSI** | `CMBA`, `CPVA`, `CXSA`, `CXSB`, `CPVB`, `CHPA`, `CHPB`, `CZCC`, `CZCA`, `CZCB`, `CZDB`, `CZDA`, `CZTA`, `CVNA`, `CPTA`, `CZEA`, `DGXA`, `DJKA`, `DJZA`, `DJSA`, `DLEA`, `CHZA`, `CYVA`, `CYVB`, `DACA`, `DADA`, `DPCA`, `DSBA` |
