# 📋 Release Notes / Changelog

---

## 🚀 Verze 1.1.0(1) (EA211 Universal)

### 🚗 Podpora motorů & HW
* **Otestováno & Potvrzeno:** Motor **1.5 TSI (DXD)** – Škoda Karoq
* **Podporovaný hardwarový modul:** Ideaspark ESP32 1.9" Display *(příprava pro LilyGO T-Display-S3)*

### ✨ Novinky a vylepšení
* **🎨 Grafika a displej:**
  * Optimalizace barev a kontrastu displeje pro lepší čitelnost na přímém slunci.
  * Nové úvodní logo **TELEMETRY MONITOR**.
* **🏎️ Volba startovacího loga (3D Chrom):**
  * Možnost změny loga přímo v rozhraní nastavení (`/config`):
    * Škoda *(pouze logo)*
    * SEAT *(pouze logo)*
    * Škoda *(logo + text)*
    * SEAT *(logo + text)*
    * Škoda *(Sportline)*
    
* **Verze 1.1.1:**
    * VW [logo] / CUPRA [logo]*
    * VW [logo + text] / CUPRA [logo + text]*
    
    
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

## 🛠️ Rozšířená kompatibilita motorů EA211 (Netestováno)

Software obsahuje definice pro níže uvedené kódové označení motorů řady EA211. *Funkčnost na těchto motorech nebyla přímo ověřena, ale je teoreticky podporována:*

| Řada | Kódy motorů |
| :--- | :--- |
| **EA211 TSI / TFSI** | `CMBA`, `CPVA`, `CXSA`, `CXSB`, `CPVB`, `CHPA`, `CHPB`, `CZCC`, `CZCA`, `CZCB`, `CZDB`, `CZDA`, `CZTA`, `CVNA`, `CPTA`, `CZEA`, `DGXA`, `DJKA`, `DJZA`, `DJSA`, `DLEA`, `CHZA`, `CYVA`, `CYVB`, `DACA`, `DADA`, `DPCA`, `DSBA` |
