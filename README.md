<div align="center">

# APS Lectures

### Algoritmi e Problem Solving — Unimore 2025/2026

Soluzioni in **C** agli esercizi del corso tenuto dal **Prof. Matteo Cavaliere**,
con focus su tecniche di progettazione algoritmica, strutture dati e analisi della complessità.

Italiano · [English](README_EN.md)

</div>

## Indice

- [Filosofia della repository](#filosofia-della-repository)
- [Struttura dei file](#struttura-dei-file)
- [Compilazione ed esecuzione](#compilazione-ed-esecuzione)
- [Catalogo degli esercizi](#catalogo-degli-esercizi)
- [Come studiare con questa repo](#come-studiare-con-questa-repo)
- [Riassunto — Strutture Dati](#riassunto--strutture-dati)
- [Riassunto — Algoritmi](#riassunto--algoritmi)
- [Licenza](#licenza)

---

## Filosofia della repository

L'obiettivo non è avere un unico programma finale, ma **tracciare il percorso di miglioramento** di ogni soluzione. Per molti problemi troverai più versioni dello stesso esercizio:

| Versione | Cosa rappresenta |
|---|---|
| `XX-nome.c` | Soluzione iniziale, spesso naïve ma corretta |
| `XX.1-nome.c` | Prima ottimizzazione (struttura dati o tecnica diversa) |
| `XX.2-nome.c` | Ulteriore raffinamento o confronto di approcci |
| `XX-nomeprof.c` | Versione di riferimento vicina al materiale del docente |

> **Il vero studio è nel confronto tra versioni**: capire *perché* la soluzione 1 esplode e *come* la soluzione 2 risolve il collo di bottiglia è il cuore del corso.

---

## Struttura dei file

```
APS_Lectures/
├── 01-FoodLines.c          ← esercizi principali (01–21)
├── 02-Snowflakes.c
│   ...
├── 21-Yokan.c
├── x1-ExactlyElectrical.c  ← esercizi extra (x1, x2...)
├── x2-SpellingCheck.c
├── makefile
└── *.pdf                   ← enunciati originali degli esercizi
```

**Convenzioni sui nomi:**
- `01` → `21` : progressione degli esercizi principali del corso
- `x1`, `x2` : esercizi aggiuntivi o di supporto
- `.1`, `.2` : varianti dello stesso esercizio con tecniche o ottimizzazioni diverse
- suffisso `prof` : versione di riferimento più vicina al materiale del docente

---

## Compilazione ed esecuzione

Il `makefile` in root compila tutti i sorgenti `.c` e genera un eseguibile per ciascuno.

```bash
make        # compila tutti i target
make clean  # rimuove oggetti ed eseguibili
```

Ogni sorgente produce un binario con lo stesso nome, senza estensione:

```bash
./21-Yokan
```

> Alcuni esercizi richiedono gestione particolare del target o non rientrano nel target `all`. In quei casi controlla la regola dedicata nel `makefile`.

---

## Catalogo degli esercizi

| File | Tema / esercizio | Tecnica principale |
|---|---|---|
| `01-FoodLines.c` | Scelta della coda più corta | Scansione lineare, ricerca del minimo |
| `02-Snowflakes.c` | Confronto e gestione di fiocchi equivalenti | Hashing, chaining, gestione collisioni |
| `03-LoginMayhem.c` | Login/password con vincoli prestazionali | Hashing, lookup rapido su grandi volumi |
| `03.1-loginmaryPOLhash.c` | Variante ottimizzata del login | Hashing polinomiale, tuning costanti |
| `04-Halloween.c` | Analisi su albero binario | Ricorsione su alberi, conteggio proprietà |
| `04.1-Halloween.c` | Variante Halloween | Parsing ricorsivo, revisione implementazione |
| `05-DescendantTree.c` | Albero genealogico / discendenza | Lista di adiacenza, ricorsione, ordinamento |
| `05.1-Descendantree.c` | Variante descendant tree | Rappresentazione alternativa |
| `06-Homersimpson.c` | Riempimento ottimale con due misure | Ricorsione, ricerca esaustiva |
| `06.1-Homersimpson.c` | Versione con cache | Memoization, DP top-down |
| `06.2-Homersimpson.c` | Versione iterativa | DP bottom-up |
| `07-Buyingapples.c` | Acquisto minimo con promozioni | Strutture dati custom, ricerca del minimo |
| `07.1-Buyingapples.c` | Variante promozioni | Gestione liste di promo, ragionamento sui costi |
| `07.2-Buyingapples.c` | Altra variante | Confronto di approcci |
| `08-HockeyRivals.c` | Confronto risultati due squadre | DP su sequenze |
| `08.1-HockeyRivals.c` | Versione memoizzata | Memoization su due parametri |
| `08.2-HockeyRivals.c` | Versione completa | DP bidimensionale |
| `09-Jumping.c` | Salto minimo / costo minimo | Ricorsione con caso base |
| `09.1-Jumping.c` | Variante jumping | Limiti numerici più robusti |
| `09.2-prof1.c` | Soluzione di riferimento | Backward DP |
| `09.3-prof2Jumping.c` | Soluzione alternativa | Forward DP |
| `10-kight.c` | Cavallo su scacchiera | BFS su griglia implicita |
| `11-crazyjumping.c` | Salti con ricorsione problematica | Esplorazione ricorsiva, cicli |
| `11.1-crazyjumpingAIvisited.c` | Fix con visited locali | Pruning, controllo visitati |
| `11.2-crazyjumpingBFS.c` | Versione BFS | BFS nello spazio degli stati |
| `11.3-crazyjumpingbfs01.c` | BFS ottimizzata | BFS 0-1, transizioni a costo 0/1 |
| `12-mice.c` | Topi/uscite in grafo orientato | Dijkstra multi-sorgente |
| `12.1-miceprof.c` | Riferimento mice | Lista di adiacenza, Dijkstra classico |
| `13-cookingnonna.c` | Percorsi minimi con stati | Dijkstra su grafo a stati duplicati |
| `14-ants.c` | Formiche / raggiungibilità su albero | Binary search + feasibility check |
| `15-PekinUni.c` | Distanza minima tra rocce | Binary search sulla risposta |
| `15.1-Pekingreal.c` | Variante robusta | Ordinamento, binary search, greedy check |
| `16-doorsIA.c` | Problema interattivo delle porte | Algoritmo interattivo, query simulation |
| `16.1-doorssw.c` | Variante switches/doors | Binary search, assegnazione |
| `17-qualityrows.c` | Rettangolo con mediana minima | Binary search + prefix sums 2D |
| `17.1-qualityrows.c` | Versione ottimizzata | Trasformazione -1/+1, prefix sums 2D |
| `18-supermarket.c` | Struttura a heap | Max-heap e min-heap array-based |
| `19-peking2.c` | Ricostruzione struttura su etichette | Treap, sorting + ricostruzione |
| `19.1-peking2.c` | Variante Peking 2 | Ottimizzazione / confronto |
| `20-Socialmedia.c` | Gruppi social e comunità | Union-Find, path compression, union by size |
| `21-Yokan.c` | Query su intervalli | Binary search su indici, randomizzazione |
| `x1-ExactlyElectrical.c` | Griglia/coordinate | Calcolo diretto, raggiungibilità |
| `x2-SpellingCheck.c` | Spelling check | Hashing, buffer grandi |
| `x2.1-SpellingCheck.c` | Variante spelling check | Affinamento struttura dati |

---

## Come studiare con questa repo

```
  Soluzione grezza          Identifica il collo          Applica la tecnica
  (esercizio base)    →     di bottiglia             →   giusta (DP, hash,
                            (TLE? MLE? WA?)              grafo, binary search…)
         ↑                                                        ↓
  Ripeti su un               ←   ←   ←   ←   ←   ←    Confronta con il file
  problema nuovo                                         "prof" di riferimento
```

**Strategia concreta:**

1. **Leggi il PDF** dell'esercizio e scrivi una soluzione funzionante, anche lenta.
2. **Confronta** con la versione `.1` o `.2`: quale struttura dati o tecnica cambia tutto?
3. **Studia la "Modifica Vincente"** nel riassunto qui sotto: è l'intuizione che trasforma una soluzione O(N²) in O(N log N).
4. **Verifica** con il file `prof`: non serve copiare, basta capire le scelte di design.

---

## Riassunto — Strutture Dati

Le strutture dati sono presentate **nell'ordine in cui compaiono per la prima volta** nel corso.
Per ognuna: intuizione concettuale → pseudocodice → modifica vincente → esercizi.

---

### 1 · Hash Table con Chaining
> Prima comparsa: `02-Snowflakes.c`

> **Intuizione:**Immagina un archivio con 1000 cassetti numerati. Invece di cercare un documento sfogliando tutto, lo metti sempre nel cassetto `HASH(documento)`. Collisioni = più documenti nello stesso cassetto, risolte con una lista concatenata.
> **Problema pratico che risolve:** verificare in O(1) nel caso medio se un elemento esiste già in un insieme molto grande, senza scorrere tutto. Nel caso peggiore — tutte le chiavi nella stessa lista — il lookup degrada a O(N), da cui l'importanza di una buona funzione hash e di un `TABLE_SIZE` primo.

**Struttura:**
```c
typedef struct node {
    int key;
    struct node *next;
} node;
node *table[TABLE_SIZE];  // TABLE_SIZE primo e grande → meno collisioni
```

**Primitiva — Insert `O(1)` nel caso peggiore (inserimento in testa):**
```
h = HASH(chiave) mod TABLE_SIZE
nuovo->next = table[h]
table[h] = nuovo
```

**Primitiva — Lookup `O(1)` caso medio, `O(N)` caso peggiore:**
```
h = HASH(chiave) mod TABLE_SIZE
scorri table[h] confrontando ogni chiave
```

**La Modifica Vincente — Hashing Polinomiale:**
In `03.1-loginmaryPOLhash.c` la funzione hash diventa `h = (h * BASE + c) % MOD` con costanti scelte empiricamente. Stessa complessità asintotica, ma le catene nei bucket si accorciano drasticamente sui dataset reali, avvicinando il caso medio al caso ottimo.

**Esercizi:**
- `02-Snowflakes.c` — rilevamento duplicati con chaining
- `03-LoginMayhem.c` — lookup rapido su grandi insiemi di credenziali
- `03.1-loginmaryPOLhash.c` — hashing polinomiale con costanti ottimizzate
- `x2-SpellingCheck.c`, `x2.1-SpellingCheck.c` — matching su buffer grandi

---

### 2 · Lista di Adiacenza per Grafi e Alberi
> Prima comparsa: `05-DescendantTree.c`

> **Intuizione:**Invece di una matrice N×N dove la maggior parte delle celle è vuota, ogni nodo tiene solo la lista dei suoi vicini reali — come una rubrica dove ogni persona ha solo i contatti che le servono.
> **Problema pratico che risolve:** rappresentare grafi sparsi riducendo lo spazio da O(V²) a O(V+E), e iterare solo sugli archi che esistono davvero, rendendo BFS e Dijkstra proporzionali alla dimensione reale del grafo.

**Struttura:**
```c
typedef struct edge {
    int to, weight;
    struct edge *next;
} edge;
edge *adj[MAX_NODES];
```

**Primitiva — Insert arco `O(1)` (inserimento in testa):**
```c
e->to = dest; e->weight = w;
e->next = adj[src]; adj[src] = e;
```

**Primitiva — Visita vicini `O(deg(u))`:**
```
per ogni e = adj[u]; e != NULL; e = e->next:
    processa(e->to, e->weight)
```

**Esercizi:**
- `05-DescendantTree.c`, `05.1-Descendantree.c` — albero genealogico
- `12-mice.c`, `12.1-miceprof.c` — grafo orientato pesato per Dijkstra
- `13-cookingnonna.c` — grafo a stati duplicati
- `14-ants.c` — albero di formiche

---

### 3 · Heap Array-Based (Max-Heap e Min-Heap)
> Prima comparsa: `18-supermarket.c`

> **Intuizione:**Un albero binario quasi completo memorizzato come array: il nodo all'indice `i` ha figli in `2i` e `2i+1` e padre in `i/2`. La proprietà heap garantisce che la radice sia sempre il massimo (o il minimo).
> **Problema pratico che risolve:** estrarre ripetutamente il massimo o il minimo da un insieme dinamico in O(log N), senza riscansionare tutto ogni volta — è la coda di priorità per antonomasia.

**Primitive:**
```
SIFT-UP(heap, i):           // O(log N) — dopo inserimento in fondo
  mentre i > 1 e heap[i] > heap[i/2]:
    swap(heap[i], heap[i/2]); i = i/2

SIFT-DOWN(heap, i, n):      // O(log N) — dopo estrazione della radice
  mentre 2i <= n:
    child = figlio_con_valore_max(2i, 2i+1)
    se heap[child] > heap[i]: swap; i = child
    altrimenti: break
```

Lettura del massimo (radice): **O(1)**. Inserimento e rimozione: **O(log N)**.

**La Modifica Vincente — Doppio Heap + Lazy Deletion:**
In `18-supermarket.c` un **max-heap e un min-heap coesistono** sullo stesso insieme. Un array `used[]` marca gli elementi già consumati; durante l'estrazione questi vengono **saltati** senza ricostruire la struttura (**lazy deletion**). Costo ammortizzato O(log N) per operazione, zero ricostruzioni.

**Esercizi:**
- `18-supermarket.c` — max+min heap con lazy deletion via `used[]`

---

### 4 · Treap (Ricostruzione da Chiave + Priorità)
> Prima comparsa: `19-peking2.c`

> **Intuizione:**Un BST che è anche un heap: le chiavi rispettano l'ordine BST (sx < radice < dx) e le priorità rispettano la proprietà heap (padre > figli). Questa doppia proprietà forza una struttura univoca — dato un insieme di coppie (chiave, priorità), esiste un solo treap possibile.
> **Problema pratico che risolve:** mantenere un dizionario dinamico ordinato con operazioni O(log N) attese, senza la complessità implementativa di AVL o RB-tree; qui usato per *ricostruire* la struttura da coppie (chiave, priorità) già date, senza inserimenti dinamici.

**Primitiva — Ricostruzione ricorsiva:**
```
SOLVE(nodi[], left, right):
  se left > right: return "."
  root = argmax(nodi[left..right], .priority)
  stampa "(" + SOLVE(left, root-1) + label/priority + SOLVE(root+1, right) + ")"
```

Complessità: **O(N log N) caso medio** (altezza attesa del treap = O(log N)); **O(N²) caso peggiore** se le priorità sono già ordinate e la ricerca del massimo degenera ogni volta su un intervallo di dimensione N, N-1, N-2, …

**La Modifica Vincente:**
Non servono rotazioni. Basta:
1. **Ordinare per label** con `qsort` → proprietà BST garantita sull'intero array.
2. **Trovare ricorsivamente il max di priorità** nell'intervallo → proprietà heap garantita.

La struttura del treap è univocamente determinata: ordinamento + max di priorità la ricostruiscono senza mai inserire un nodo.

**Esercizi:**
- `19-peking2.c` — ricostruzione e stampa parentesizzata del treap
- `19.1-peking2.c` — variante alternativa dello stesso problema

---

### 5 · Disjoint Set Union (Union-Find)
> Prima comparsa: `20-Socialmedia.c`

> **Intuizione:**Ogni elemento punta al suo "rappresentante" di gruppo. Per sapere se due persone sono nello stesso gruppo, risali le catene e confronta le radici. Per unire due gruppi, fai puntare una radice all'altra — e appiattisci il cammino per le volte successive.
> **Problema pratico che risolve:** gestire in modo efficiente domande del tipo "questi due nodi sono connessi?" e "unisci questi due gruppi" su insiemi dinamicamente crescenti — impossibile da fare bene con array o liste semplici.

**Primitiva — `find` con Path Compression Full:**
```
FIND(x):
  root = x
  mentre parent[root] != root: root = parent[root]   // trova radice
  mentre parent[x] != root:                           // comprimi il cammino
    next = parent[x]; parent[x] = root; x = next
  return root
```

**Primitiva — `union` con Union by Size:**
```
UNION(p1, p2):
  r1=FIND(p1); r2=FIND(p2)
  se r1==r2: return
  se size[r1]+size[r2] > limit: return   // ← modifica vincente
  se size[r1] < size[r2]: swap(r1,r2)
  parent[r2]=r1; size[r1]+=size[r2]
```

Complessità ammortizzata: **O(α(N))** per operazione, dove α è la funzione inversa di Ackermann — in pratica ≤ 4 per qualsiasi N realistico, quindi sostanzialmente costante.

**La Modifica Vincente:**
In `20-Socialmedia.c` l'union include un **vincolo di capacità**: la fusione avviene solo se `size[r1]+size[r2] ≤ num_community`. DSU standard trasformata in DSU con tetto per componente, stessa complessità asintotica invariata.

**Esercizi:**
- `20-Socialmedia.c` — DSU con path compression, union by size e limite dimensione componente

---

### 6 · Somme Prefisse 2D
> Prima comparsa: `17-qualityrows.c`

> **Intuizione:**Preprocessa la matrice una volta sola in modo che la somma di qualsiasi rettangolo sia calcolabile con quattro accessi — come tenere un "conto corrente" per ogni prefisso di riga e colonna, da cui sottrarre i pezzi che non ti servono.
> **Problema pratico che risolve:** rispondere a molte query "qual è la somma degli elementi nel rettangolo [r1,c1]–[r2,c2]?" in O(1) ciascuna, invece di riscorrere il rettangolo ogni volta.

**Primitiva — Build `O(R·C)`:**
```
per i = 1 a R:
  per j = 1 a C:
    sum[i][j] = mat[i][j] + sum[i-1][j] + sum[i][j-1] - sum[i-1][j-1]
```

**Primitiva — Query rettangolo `O(1)`:**
```
total = sum[r2][c2] - sum[r1-1][c2] - sum[r2][c1-1] + sum[r1-1][c1-1]
```

**La Modifica Vincente — Trasformazione -1/+1:**
In `17.1-qualityrows.c` la matrice su cui si costruiscono le prefix sums non è quella originale ma la sua **trasformazione binaria** rispetto alla soglia `k`:
- elemento ≤ k → `-1`
- elemento > k → `+1`

"Esiste un rettangolo H×W con mediana ≤ k?" diventa "esiste un rettangolo H×W con somma ≤ 0?". Verificare tutti i possibili rettangoli su una matrice R×C naïvemente costerebbe O(R²·C²); con le prefix sums 2D il check scende a O(R·C), rendendo praticabile la binary search esterna su `k`.

**Esercizi:**
- `17-qualityrows.c` — versione base con prefix sums
- `17.1-qualityrows.c` — con trasformazione -1/+1 + prefix sums 2D

---

## Riassunto — Algoritmi

---

### 1 · DP Top-Down (Memoization)
> Prima comparsa: `06.1-Homersimpson.c`

> **Intuizione:**Ricorsione normale, ma con una "memoria" (array o dizionario) che salva i risultati già calcolati. Se sei già passato da quello stato, rispondi subito senza ricalcolare.
> **Problema pratico che risolve:** evitare che la ricorsione esplori esponenzialmente gli stessi sottoproblemi. Con la memoization ogni stato viene calcolato una volta sola, abbattendo la complessità da esponenziale a proporzionale al numero di stati distinti.

**Schema:**
```
memo = {}
SOLVE(stato):
  se stato in memo: return memo[stato]
  se caso_base: return valore_base
  risultato = min/max su tutte le scelte di SOLVE(sotto-stato)
  memo[stato] = risultato
  return risultato
```

**La Modifica Vincente:**
In `08.1-HockeyRivals.c` lo stato è **bidimensionale** `(i, j)` — indici nelle due sequenze. Il numero di stati distinti è N·M e ognuno viene calcolato una volta sola, portando la complessità da esponenziale a **O(N·M)**, dove N e M sono le lunghezze delle due sequenze.

**Esercizi:**
- `06.1-Homersimpson.c` — memoization 1D (quantità residua di birra)
- `08.1-HockeyRivals.c` — memoization 2D su due sequenze

---

### 2 · DP Bottom-Up
> Prima comparsa: `06.2-Homersimpson.c`

> **Intuizione:**Invece di scendere dalla domanda verso i casi base (top-down), si parte dai casi base e si riempie una tabella verso l'alto. Niente ricorsione, niente rischio di stack overflow, controllo totale sull'ordine di visita degli stati.
> **Problema pratico che risolve:** quando la memoization ha troppo overhead di chiamate ricorsive, o quando il grafo degli stati ha una struttura regolare che si presta a un semplice ciclo iterativo.

**Due direzioni:**
```
// Forward (09.3): dallo stato iniziale verso il goal
dp[0] = caso_base
per i = 1 a N: dp[i] = f(dp[i-1], ...)

// Backward (09.2): dal goal verso lo stato iniziale
dp[N] = caso_base
per i = N-1 a 0: dp[i] = f(dp[i+1], ...)
```

**La Modifica Vincente:**
`09.2-prof1.c` (backward) e `09.3-prof2Jumping.c` (forward) risolvono lo stesso problema con direzioni di ragionamento opposte. Confrontare entrambi è l'esercizio didattico più importante della repository per capire la dualità delle formulazioni DP.

**Esercizi:**
- `06.2-Homersimpson.c` — bottom-up 1D
- `08.2-HockeyRivals.c` — DP 2D iterativa
- `09.2-prof1.c` — backward DP
- `09.3-prof2Jumping.c` — forward DP

---

### 3 · BFS — Breadth-First Search
> Prima comparsa: `10-kight.c`

> **Intuizione:**Esplora il grafo a "ondate" — prima tutti i nodi a distanza 1, poi tutti a distanza 2, ecc. Come i cerchi nell'acqua quando cade un sasso: garantisce di trovare il cammino più corto in termini di numero di archi.
> **Problema pratico che risolve:** trovare la distanza minima in grafi non pesati o a pesi uniformi, e cercare in spazi degli stati impliciti come la scacchiera del cavallo, dove non ha senso costruire il grafo esplicitamente.

**Schema:**
```
BFS(sorgente):
  dist[sorgente]=0, tutti gli altri=-1; coda=[sorgente]
  mentre coda non vuota:
    u = dequeue
    per ogni vicino v: se dist[v]==-1: dist[v]=dist[u]+1; enqueue(v)
```

Complessità: **O(V+E)** dove V = vertici, E = archi del grafo degli stati.

**La Modifica Vincente — BFS 0-1:**
In `11.3-crazyjumpingbfs01.c` le transizioni hanno costo **0 o 1**. La BFS 0-1 usa due code/fronti invece di una priority queue:

```
per ogni stato nel fronte current:
  costo 0 → reinserisci in current[]   // stesso "livello di costo"
  costo 1 → inserisci in next[]        // livello successivo
```

Complessità: **O(V+E)** — identica alla BFS standard, estesa ai grafi con pesi in {0,1} senza il fattore O(log V) di Dijkstra. Il vantaggio rispetto a Dijkstra (che avrebbe complessità O((V+E) log V)) è rilevante su grafi di grandi dimensioni.

**Esercizi:**
- `10-kight.c` — BFS su griglia implicita (mosse del cavallo)
- `11.2-crazyjumpingBFS.c` — BFS nello spazio degli stati
- `11.3-crazyjumpingbfs01.c` — BFS 0-1 con doppio fronte

---

### 4 · Dijkstra — Cammino Minimo su Grafo Pesato
> Prima comparsa: `12-mice.c`

> **Intuizione:**Come BFS, ma con una coda di priorità invece di una coda normale. Ogni volta estrai il nodo non ancora "confermato" con distanza minima e rilassi i suoi vicini. I pesi non negativi garantiscono che una volta estratto, un nodo ha la sua distanza definitiva.
> **Problema pratico che risolve:** trovare il percorso più breve in grafi con archi di peso variabile — mappe stradali, reti di distribuzione, qualsiasi sistema dove i costi di transizione differiscono.

**Schema:**
```
dist[sorgente]=0, tutti ∞; done[]=false
ripeti V volte:
  u = nodo non-done con dist minima   // Extract-Min
  done[u] = true
  per ogni arco (u,v,w): se dist[u]+w < dist[v]: dist[v]=dist[u]+w
```

Complessità: **O(V²)** con array lineare per l'Extract-Min (versione usata qui, adatta per N ≤ ~1000); **O((V+E) log V)** con heap binario.

**La Modifica Vincente — Grafo a Stati Doppi:**
In `13-cookingnonna.c` ogni nodo esiste in due versioni: stato `0` (nessun biscotto raccolto) e stato `1` (almeno uno). La transizione `0→1` è gratuita sui nodi-negozio:

```
se stato==0 e nodo_è_store:
    aggiorna dist[u][1] con dist[u][0]   // transizione a costo zero
altrimenti:
    rilassa dist[v][stato] normalmente
```

Questo trasforma un problema con vincoli in un normale shortest path su un grafo di dimensione 2·V — Dijkstra non cambia, cambia solo lo spazio degli stati su cui opera.

**Esercizi:**
- `12-mice.c` — Dijkstra multi-sorgente, conteggio entro time limit
- `12.1-miceprof.c` — lista di adiacenza + Dijkstra O(V²) classico
- `13-cookingnonna.c` — Dijkstra su grafo a stati doppi + conteggio cammini minimi

---

### 5 · Binary Search sulla Risposta + Feasibility Check
> Prima comparsa: `15-PekinUni.c`

> **Intuizione:**Invece di cercare direttamente la risposta ottima, si fa una domanda binaria: "è possibile ottenere un risultato ≤ k?". Se la proprietà è monotona (se k funziona, k+1 funziona), si può fare binary search su k invocando il check solo O(log(range)) volte.
> **Problema pratico che risolve:** trasformare problemi di ottimizzazione difficili in problemi di decisione (sì/no), dove il check è spesso molto più semplice da implementare e la binary search fa il resto.

**Schema:**
```
low=limite_inf; high=limite_sup
mentre high-low > 1:
  mid = (low+high)/2
  se CAN_ACHIEVE(mid): high=mid
  altrimenti: low=mid
return high
```

**La Modifica Vincente — Trasformazione + Prefix Sums:**
In `17.1-qualityrows.c` il check `CAN_ACHIEVE(k)` diventa: "esiste un rettangolo H×W con somma ≤ 0 nella matrice trasformata?". Verificare naïvemente tutti i possibili rettangoli costerebbe O(R²·C²); con le prefix sums 2D il check scende a O(R·C). La binary search esterna aggiunge un fattore O(log(max_val)), per una complessità totale di **O(R·C·log(max_val))**.

**Esercizi:**
- `14-ants.c` — binary search su indici, check di raggiungibilità
- `15-PekinUni.c` — binary search su distanza minima tra rocce
- `15.1-Pekingreal.c` — con ordinamento + greedy check
- `16.1-doorssw.c` — binary search su assegnazione porte
- `17-qualityrows.c` — binary search sulla mediana di rettangolo
- `17.1-qualityrows.c` — + trasformazione -1/+1 + prefix sums 2D
- `21-Yokan.c` — binary search su intervalli con randomizzazione

---

## Nota finale

Alcuni sorgenti contengono commenti di lavoro, prove intermedie o osservazioni di debug: è normale e voluto. La repository conserva **sia l'idea algoritmica sia il percorso** che ha portato alla soluzione finale — il processo è parte integrante dello studio.

---

## Licenza

Materiale didattico personale di **Matteo Merolli**, raccolto durante il corso di Algoritmi e Problem Solving (Unimore, 2025/2026). Libero uso a scopo di studio.
