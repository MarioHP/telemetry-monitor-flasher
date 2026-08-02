# 🛠️ Seznam podporovaných motorů EA211 (TSI / TFSI)

Tento firmware primárně vychází z protokolu pro motor **1.5 TSI (DXD)**, ale obsahuje kompatibilní definice parametrů i pro ostatní motory řady EA211.

---

### 1. Hlavní otestovaný motor (100% Funkční)

| Kód motoru | Objem | Výkon | Vozidlo (Testováno) |
| :--- | :--- | :--- | :--- |
| **DXD** | 1.5 TSI Evo2 | 110 kW | Škoda Karoq |

---

### 2. Rozšířená kompatibilita EA211 (Netestováno v provozu)

Funkčnost na níže uvedených kódech motorů nebyla přímo ověřena, ale sdílejí stejné OBD/CAN adresy parametrů:

| Typ | Kódy motorů |
| :--- | :--- |
| **EA211 (1.0 / 1.2 / 1.4 / 1.5 TSI)** | `CMBA`, `CPVA`, `CXSA`, `CXSB`, `CPVB`, `CHPA`, `CHPB`, `CZCC`, `CZCA`, `CZCB`, `CZDB`, `CZDA`, `CZTA`, `CVNA`, `CPTA`, `CZEA`, `DGXA`, `DJKA`, `DJZA`, `DJSA`, `DLEA`, `CHZA`, `CYVA`, `CYVB`, `DACA`, `DADA`, `DPCA`, `DSBA` |

# EA211 – Kompatibilní motory TSI/TFSI
| Kód motoru | Objem | Typický výkon | Nejčastější modely |
|------------|-------|---------------|--------------------|
| CMBA | 1.4 TSI | 90 kW | Škoda Octavia III, VW Golf VII, Golf Sportsvan |
| CPVA | 1.4 TSI | 110 kW | VW Lavida, VW Sagitar (Čína) |
| CXSA | 1.4 TSI | 90 kW | VW Golf VII, Škoda Octavia III, SEAT Leon III |
| CXSB | 1.4 TSI | 92 kW | VW Golf VII, Audi A3 8V |
| CPVB | 1.4 TSI | 110 kW | Čínské modely VW |
| CHPA | 1.4 TSI | 103 kW | Golf VII, Octavia III, Leon III, Audi A3 |
| CHPB | 1.4 TSI | 110 kW | Golf VII, Octavia III, Leon III |
| CZCA | 1.4 TSI | 92 kW | Golf VII, Octavia III, Leon III |
| CZCB | 1.4 TSI | 81–92 kW | Golf VII, Audi A3, Octavia III |
| CZCC | 1.4 TSI | — | Regionální varianty |
| CZDA | 1.4 TSI ACT | 110 kW | Golf VII, Octavia III, Leon III, Audi A3 |
| CZDB | 1.4 TSI ACT | 103–110 kW | Golf VII, Passat B8, Octavia III |
| CZEA | 1.4 TSI G-TEC | 81–96 kW | Golf VII TGI, Octavia G-TEC |
| CZTA | 1.4 TSI | 110 kW | Tiguan II, Kodiaq, Ateca |
| CVNA | 1.4 TSI | 110 kW | Tiguan, Octavia (Rusko/Čína) |
| CPTA | 1.4 TSI | 110 kW | Jetta, Beetle, Golf (USA) |
| DGXA | 1.5 TSI EVO | 110 kW | Golf VIII, Octavia IV, Leon IV |
| DJKA | 1.5 TSI EVO2 | 110 kW | Golf VIII FL, Octavia IV FL, Karoq, Kodiaq, Tiguan III |
| DJZA | 1.5 TSI EVO2 | 110 kW | Audi A3 8Y, Golf VIII |
| DJSA | 1.5 TSI EVO2 | 110 kW | Octavia IV, Golf VIII, Leon IV |
| DLEA | 1.5 TSI EVO2 | 110 kW | Golf VIII, T-Roc, Audi A3 |
| CHZA | 1.2 TSI | 77 kW | Polo, Fabia III, Ibiza, Rapid |
| CYVA | 1.0 TSI | 70–85 kW | Polo, Fabia III, Ibiza, Golf |
| CYVB | 1.0 TSI | 70–85 kW | Fabia III/IV, Scala, Kamiq, Polo |
| DACA | 1.5 TSI EVO | 96 kW | Golf VIII, Octavia IV |
| DADA | 1.5 TSI EVO | 110 kW | Golf VII FL, Octavia III FL, Karoq, Kodiaq, Leon |
| DPCA | 1.5 TSI EVO2 | 110 kW | Golf VIII FL, Octavia IV FL, Passat B9, Tiguan III |
| DSBA | 1.5 TSI EVO2 | 110 kW | Novější modely MQB Evo |
| DXD | 1.5 TSI EVO2 | 110 kW | Nejnovější modely VW Group |

---

# EA211 – 1.5 TSI EVO2

| Kód motoru | Výkon | Převodovky | Modely |
|------------|--------|------------|---------|
| DJKA | 110 kW (150 k) | 6M, 7DSG | Škoda Octavia IV, Karoq, Kodiaq, Superb IV, VW Golf VIII, Tiguan III, T-Roc, Touran, Audi A3 8Y, Q2, SEAT Leon IV, Ateca, CUPRA Leon, Formentor |
| DJZA | 110 kW (150 k) | 6M, 7DSG | Audi A3 8Y, VW Golf VIII, Tiguan III, T-Roc |
| DJSA | 110 kW (150 k) | 7DSG | Škoda Octavia IV, VW Golf VIII, SEAT Leon IV |
| DPCA | 110 kW (150 k) | 6M, 7DSG | Golf VIII Facelift, Octavia IV Facelift, Tiguan III, Passat B9, Tayron |
| DSBA | 110 kW (150 k) | 7DSG | Novější modely MQB Evo (od 2024) |
| DXD | 110 kW (150 k) | 6M, 7DSG | Nejnovější modely VW Group (od 2025) |
| DLEA | 110 kW (150 k) | 6M, 7DSG | Golf VIII, T-Roc, Audi A3 |
