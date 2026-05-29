# Algoritmi e Problem Solving - Unimore 2026

Questa repository raccoglie una serie di soluzioni in C per esercizi del corso di Algoritmi e Problem Solving dell'Universita di Modena e Reggio Emilia, con focus sulle tecniche di progettazione di algoritmi, strutture dati e ottimizzazione della complessita.

L'idea del progetto non e quella di costruire un unico programma, ma di mantenere molti sorgenti indipendenti, uno per esercizio o per variante dello stesso esercizio. In diversi casi trovi piu versioni dello stesso problema: una piu semplice, una intermedia, una ottimizzata o una soluzione di riferimento/prof.

## Come e organizzata la repo

Ogni file `.c` rappresenta un esercizio autonomo. I nomi seguono in genere questo schema:

- `01-...` fino a `21-...`: progressione degli esercizi principali.
- `x1-...` e `x2-...`: esercizi aggiuntivi o di supporto.
- `0.1`, `1.1`, `1.2`, ecc.: varianti dello stesso esercizio, spesso con tecniche diverse o con miglioramenti progressivi.
- file con suffisso `prof`: soluzioni o versioni di confronto piu vicine al materiale del docente.

Il contenuto della repository e quindi utile sia per rivedere le soluzioni, sia per confrontare approcci diversi allo stesso problema.

## Compilazione ed esecuzione

Il `Makefile` presente in root compila tutti i sorgenti `.c` della cartella corrente e genera un eseguibile per ciascun file, con alcune eccezioni per esercizi particolari o interattivi.

Comandi principali:

```bash
make
make clean
```

- `make` compila i target gestiti dal Makefile.
- `make clean` rimuove oggetti ed eseguibili generati.

Per l'esecuzione, ogni file produce il proprio binario con lo stesso nome del sorgente senza estensione. Esempio:

```bash
./21-Yokan
```

Nota: nel progetto sono presenti anche alcuni esercizi che richiedono una gestione particolare del nome del target o che non sono inclusi nel target `all` del Makefile. In quei casi conviene verificare la regola dedicata nel Makefile stesso.

## Catalogo degli esercizi

Di seguito una lettura sintetica di ogni file e della tecnica dominante usata nella soluzione.

| File | Tema / esercizio | Tecnica principale |
| --- | --- | --- |
| `01-FoodLines.c` | scelta della coda piu corta | scansione lineare, scelta del minimo |
| `02-Snowflakes.c` | confronto e gestione di fiocchi equivalenti | lista concatenata, hashing / collision handling |
| `03-LoginMayhem.c` | gestione login/password con vincoli di prestazione | hashing, lookup rapido su grandi volumi |
| `03.1-loginmaryPOLhash.c` | variante ottimizzata del login mayhem | tuning delle costanti, hashing, ottimizzazione pratica |
| `04-Halloween.c` | analisi su albero binario di dolci/camminate | ricorsione su alberi, conteggio proprieta dell'albero |
| `04.1-Halloween.c` | variante dello stesso esercizio | parsing ricorsivo dell'albero, revisione dell'implementazione |
| `05-DescendantTree.c` | albero genealogico / discendenza | costruzione albero generalizzato, ricorsione, ordinamento finale |
| `05.1-Descendantree.c` | variante del descendant tree | stessa idea con diversa strategia di rappresentazione |
| `06-Homersimpson.c` | riempimento ottimale con due scelte di misura | ricorsione, ricerca esaustiva, ottimizzazione di base |
| `06.1-Homersimpson.c` | versione con cache | memoization, top-down DP |
| `06.2-Homersimpson.c` | versione dinamica | programmazione dinamica bottom-up |
| `07-Buyingapples.c` | acquisto minimo con promozioni | strutture dati custom, ricerca del minimo |
| `07.1-Buyingapples.c` | variante sulle promozioni | gestione di liste di promo, ragionamento sui costi |
| `07.2-Buyingapples.c` | altra variante del problema | struttura dati e confronto tra alternative |
| `08-HockeyRivals.c` | confronto tra risultati di due squadre | DP su sequenze, ricerca della migliore combinazione |
| `08.1-HockeyRivals.c` | versione memoizzata | memoization su due parametri |
| `08.2-HockeyRivals.c` | versione piu completa | DP bidimensionale |
| `09-Jumping.c` | salto minimo / costo minimo | ricorsione con caso base, ottimizzazione minima |
| `09.1-Jumping.c` | variante della stessa idea | uso di limiti numerici piu robusti |
| `09.2-prof1.c` | soluzione di riferimento | backward reasoning, DP / ricorsione guidata |
| `09.3-prof2Jumping.c` | soluzione alternativa di riferimento | forward reasoning, DP / transizioni iterative |
| `10-kight.c` | movimento del cavallo su scacchiera | grafi impliciti, BFS / navigazione su griglia |
| `11-crazyjumping.c` | salti con ricorsione problematica | esplorazione ricorsiva, gestione dei cicli |
| `11.1-crazyjumpingAIvisited.c` | correzione con visited locali | pruning, controllo dei visitati |
| `11.2-crazyjumpingBFS.c` | conversione verso approccio BFS | BFS nello spazio degli stati |
| `11.3-crazyjumpingbfs01.c` | variante BFS piu accurata | BFS con attenzione ai costi / transizioni |
| `12-mice.c` | topi/uscite in grafo orientato | grafi, Dijkstra / shortest path |
| `12.1-miceprof.c` | soluzione di riferimento per mice | lista di adiacenza, Dijkstra classico |
| `13-cookingnonna.c` | cucinare con stati e percorsi minimi | grafo a stati, shortest path con due livelli |
| `14-ants.c` | formiche / raggiungibilita su albero | albero come lista di adiacenza, feasibility check |
| `15-PekinUni.c` | distanza minima tra rocce | binary search sulla risposta, verifica di fattibilita |
| `15.1-Pekingreal.c` | variante piu realistica/robusta | ordinamento, binary search, check greedy |
| `16-doorsIA.c` | problema interattivo delle porte | algoritmo interattivo, simulazione di query |
| `16.1-doorssw.c` | variante switches/doors | binary search, assegnazione e ricostruzione |
| `17-qualityrows.c` | rettangolo con mediana minima | binary search sulla risposta, somme prefisse 2D |
| `17.1-qualityrows.c` | versione ottimizzata e commentata | trasformazione -1/+1, prefix sums 2D, monotonicita |
| `18-supermarket.c` | struttura a max-heap | heap array-based, gestione di albero quasi completo |
| `19-peking2.c` | ricostruzione/struttura ordinata su etichette | treap, ordinamento e ricostruzione dell'albero |
| `19.1-peking2.c` | variante del Peking 2 | stessa idea, possibile ottimizzazione o confronto |
| `20-Socialmedia.c` | gruppi social e operazioni su comunità | disjoint set union, union by size, path compression |
| `21-Yokan.c` | query su intervalli e gusti | conteggio su intervalli, binary search su indici, randomizzazione locale |
| `x1-ExactlyElectrical.c` | problema di base su griglia / coordinate | calcolo diretto, verifica di raggiungibilita |
| `x2-SpellingCheck.c` | spelling check con strutture dedicate | hashing / matching, gestione di buffer grandi |
| `x2.1-SpellingCheck.c` | variante dello spelling check | affinamento della struttura dati, confronto di parole |

## Tecniche viste negli esercizi

Questa repo e particolarmente utile per ripassare un insieme molto ampio di tecniche classiche. Qui sotto sono raccolte in modo piu sistematico.

### 1. Scansione lineare e scelta del minimo

Presente in esercizi semplici come `01-FoodLines.c`.

Quando il problema richiede solo di trovare l'elemento piu piccolo, il piu grande o un indice con una proprieta locale, la soluzione spesso e una scansione lineare con una variabile di supporto. E il caso base da cui partire prima di passare a versioni piu sofisticate.

### 2. Liste concatenate e gestione delle collisioni

Usate in esercizi come `02-Snowflakes.c` e in diversi grafi rappresentati con nodi allocati dinamicamente.

Le liste concatenate sono utili quando:

- non conosci in anticipo il numero di elementi effettivi;
- vuoi gestire collisioni di hashing manualmente;
- vuoi rappresentare archi in un grafo in modo compatto.

### 3. Hashing e lookup rapido

Compare in `02-Snowflakes.c`, `03-LoginMayhem.c`, `03.1-loginmaryPOLhash.c` e in altri esercizi dove il collo di bottiglia e il recupero rapido di dati.

L'obiettivo e ridurre il costo di ricerca da lineare a quasi costante. In questa repo l'hashing viene usato sia in modo classico, sia in modo molto pragmatico, cioe scegliendo costanti e strutture che funzionano bene sul dataset reale.

### 4. Ricorsione su alberi

Molto presente in `04-Halloween.c`, `05-DescendantTree.c` e in varie versioni dello stesso tema.

Le funzioni ricorsive sugli alberi sono usate per:

- contare nodi, foglie o altezze;
- aggregare informazioni dai figli al padre;
- percorrere strutture gerarchiche costruite in input non ordinato.

Questa tecnica e la base per il tree DP e per molti problemi di parsing di espressioni o strutture parentetizzate.

### 5. Memoization e programmazione dinamica top-down

Evidente in `06.1-Homersimpson.c` e in `08.1-HockeyRivals.c`.

La memoization salva i risultati delle sottoproblemi per evitare ricalcoli. E il passaggio naturale quando una soluzione ricorsiva pura esplode in complessita.

### 6. Programmazione dinamica bottom-up

Visibile in `06.2-Homersimpson.c`, `08.2-HockeyRivals.c` e nelle soluzioni di riferimento `09.2-prof1.c` e `09.3-prof2Jumping.c`.

Qui il ragionamento si ribalta: si costruisce la soluzione a partire dai casi base, riempiendo tabelle di stati. E il formato piu solido quando il numero di stati e gestibile e si vuole un controllo chiaro sulla complessita.

### 7. DP su sequenze e stati multipli

Compare in `08-HockeyRivals.c` e nelle sue varianti.

Il punto chiave e modellare il problema come allineamento o combinazione di prefissi: a ogni passo scegli se consumare un elemento della prima sequenza, della seconda, di entrambe o di nessuna. Questo schema e molto utile nei problemi con compatibilita tra due serie di eventi.

### 8. Grafi con liste di adiacenza

Si trovano in `12-mice.c`, `12.1-miceprof.c`, `13-cookingnonna.c`, `14-ants.c`, `16-doorssw.c` e altri.

La lista di adiacenza e la struttura standard per rappresentare grafi sparsi. Permette di salvare memoria e di iterare solo sugli archi realmente presenti.

### 9. Dijkstra e cammini minimi

E centrale in `12-mice.c` e `12.1-miceprof.c`, e compare anche in varianti a stati come `13-cookingnonna.c`.

Quando i pesi sono non negativi, Dijkstra e l'algoritmo naturale per calcolare distanze minime. In questa repo viene usato sia nella versione classica, sia in una versione a complessita quadratica adatta a input limitati.

### 10. Espansione dello spazio degli stati

Molto importante in `13-cookingnonna.c`.

L'idea e duplicare o moltiplicare gli stati per rappresentare informazioni aggiuntive, ad esempio:

- se hai gia visitato un certo tipo di nodo;
- se hai raccolto un bonus;
- se sei in una modalita speciale di transizione.

Questo trasforma un problema apparentemente semplice in un grafo su stati, ma permette di modellarlo in modo corretto.

### 11. Feasibility check + binary search sulla risposta

Presente in `15-PekinUni.c`, `15.1-Pekingreal.c`, `17-qualityrows.c`, `17.1-qualityrows.c`, `14-ants.c` e `21-Yokan.c`.

E una delle tecniche piu importanti di tutta la repo:

- si definisce una funzione che controlla se una certa soglia e valida;
- si mostra che la proprieta e monotona;
- si cerca il minimo o il massimo valore valido con binary search.

E molto potente nei problemi di ottimizzazione in cui trovare la risposta esatta direttamente e difficile, ma verificare una soglia e semplice.

### 12. Somme prefisse 2D

Visibili chiaramente in `17.1-qualityrows.c`.

Le somme prefisse 2D permettono di calcolare la somma di qualsiasi rettangolo in tempo costante dopo una fase di preprocessing. Sono perfette quando bisogna testare molte sotto-regioni della matrice.

In questo progetto sono combinate con la binary search sulla mediana per ottenere una soluzione molto piu efficiente della verifica locale naive.

### 13. BFS e ricerca nello spazio degli stati

Presente in `11.2-crazyjumpingBFS.c`, `11.3-crazyjumpingbfs01.c` e in alcuni problemi su griglia come `10-kight.c`.

La BFS e la scelta giusta quando tutti gli archi hanno peso uniforme o quando si vuole esplorare a livelli. E utile anche per trovare la distanza minima in grafi impliciti, dove i nodi non sono esplicitati in input ma generati dalle mosse possibili.

### 14. Gestione dei cicli e pruning nella ricorsione

Il problema si vede bene in `11-crazyjumping.c` e `11.1-crazyjumpingAIvisited.c`.

Quando una ricorsione puo tornare su stati gia visti, bisogna introdurre una forma di visitato, una cache oppure cambiare completamente strategia. Qui si vede il passaggio da una ricorsione fragile a una soluzione piu controllata.

### 15. Heap / max-heap

Presente in `18-supermarket.c`.

L'heap e utile per mantenere sempre accessibile il massimo o il minimo corrente. In questa repo viene trattato nella sua forma array-based, sfruttando il fatto che l'albero e quasi completo.

### 16. Union-Find / Disjoint Set Union

`20-Socialmedia.c` e l'esempio piu chiaro.

La DSU supporta:

- verifica di appartenenza alla stessa componente;
- unione di insiemi;
- query sulla dimensione della componente.

Con path compression e union by size diventa estremamente efficiente ed e perfetta per problemi di comunita o reti sociali.

### 17. Alberi bilanciati e treap

`19-peking2.c` usa una struttura di tipo treap o comunque una ricostruzione ordinata di un albero con priorita.

Questo tipo di esercizio e utile per ripassare:

- ordinamento preliminare;
- ricostruzione dell'albero a partire da un criterio di priorita;
- rappresentazione compatta di una struttura bilanciata.

### 18. Ottimizzazione pratica e costanti

In alcuni file, per esempio `03.1-loginmaryPOLhash.c` e `11.1-crazyjumpingAIvisited.c`, il miglioramento non e solo teorico ma anche pratico.

Questo e importante nel problem solving reale: a volte la complessita asintotica non cambia, ma la scelta delle costanti, delle dimensioni degli array o del punto in cui memorizzare i dati determina il successo sui test.

### 19. Algortimi randomizzati
Con approccio las Vegas e Montecarlo

## Come usare questa repository per studiare

Il modo piu efficace per sfruttare questi file e confrontare versioni successive dello stesso problema:

1. Parti dalla soluzione piu grezza o piu naturale.
2. Identifica il collo di bottiglia.
3. Passa alla variante con memoization, DP o struttura dati dedicata.
4. Confronta l'implementazione con quella piu vicina al materiale del corso o del docente.

In questo modo la repository non e solo un archivio di codice, ma una mappa dei passaggi tipici con cui si passa da una soluzione corretta ma lenta a una soluzione robusta e competitiva.

## Nota finale

Alcuni sorgenti contengono commenti di lavoro, prove intermedie o osservazioni di debug. E normale: la repository conserva sia l'idea algoritmica sia il percorso che ha portato alla soluzione finale. Se vuoi, puo essere utile aggiungere in futuro una breve sezione per ogni file con input, output, complessita e idea risolutiva in 3 righe.