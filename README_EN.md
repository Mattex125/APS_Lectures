<div align="center">

# APS Lectures

### Algorithms and Problem Solving — Unimore 2025/2026

**C** solutions to the exercises of the course taught by **Prof. Matteo Cavaliere**,
focusing on algorithm design techniques, data structures, and complexity analysis.

[🇮🇹 Italiano](README.md) · 🇬🇧 English

</div>

## Table of Contents

- [Philosophy](#-philosophy)
- [File Structure](#-file-structure)
- [Build & Run](#-build--run)
- [Exercise Catalog](#-exercise-catalog)
- [How to Study with this Repo](#-how-to-study-with-this-repo)
- [Summary — Data Structures](#summary--data-structures)
- [Summary — Algorithms](#summary--algorithms)
- [License](#-license)

---

## Philosophy

The goal is not to have a single final program, but to **trace the improvement path** of each solution. For many problems you will find multiple versions of the same exercise:

| Version | What it represents |
|---|---|
| `XX-name.c` | Initial solution, often naïve but correct |
| `XX.1-name.c` | First optimisation (different data structure or technique) |
| `XX.2-name.c` | Further refinement or approach comparison |
| `XX-nameprof.c` | Reference version close to the instructor's material |

> **The real study is in the comparison between versions**: understanding *why* solution 1 explodes and *how* solution 2 fixes the bottleneck is the core of this course.

---

## File Structure

```
APS_Lectures/
├── 01-FoodLines.c          ← main exercises (01–21)
├── 02-Snowflakes.c
│   ...
├── 21-Yokan.c
├── x1-ExactlyElectrical.c  ← extra exercises (x1, x2...)
├── x2-SpellingCheck.c
├── makefile
└── *.pdf                   ← original exercise statements
```

**Naming conventions:**
- `01` → `21` : progression of the main course exercises
- `x1`, `x2` : additional or support exercises
- `.1`, `.2` : variants of the same exercise with different techniques or progressive optimisations
- `prof` suffix : reference or comparison version close to the instructor's material

---

## Build & Run

The `makefile` in the root compiles all `.c` sources and generates one binary per file.

```bash
make        # build all targets
make clean  # remove objects and executables
```

Each source produces a binary with the same name, without extension:

```bash
./21-Yokan
```

>  Some exercises require special target handling or are not included in the `all` target. In those cases check the dedicated rule in the `makefile`.

---

## Exercise Catalog

| File | Topic / exercise | Main technique |
|---|---|---|
| `01-FoodLines.c` | Choosing the shortest queue | Linear scan, minimum search |
| `02-Snowflakes.c` | Comparing and handling equivalent snowflakes | Hashing, chaining, collision handling |
| `03-LoginMayhem.c` | Login/password under performance constraints | Hashing, fast lookup on large volumes |
| `03.1-loginmaryPOLhash.c` | Optimised login variant | Polynomial hashing, constant tuning |
| `04-Halloween.c` | Analysis on a binary tree | Tree recursion, property counting |
| `04.1-Halloween.c` | Halloween variant | Recursive parsing, implementation revision |
| `05-DescendantTree.c` | Genealogical tree / descendants | Adjacency list, recursion, sorting |
| `05.1-Descendantree.c` | Descendant tree variant | Alternative representation |
| `06-Homersimpson.c` | Optimal filling with two measures | Recursion, exhaustive search |
| `06.1-Homersimpson.c` | Cached version | Memoization, top-down DP |
| `06.2-Homersimpson.c` | Iterative version | Bottom-up DP |
| `07-Buyingapples.c` | Minimum purchase with promotions | Custom data structures, minimum search |
| `07.1-Buyingapples.c` | Promotions variant | Promo list handling, cost reasoning |
| `07.2-Buyingapples.c` | Another variant | Approach comparison |
| `08-HockeyRivals.c` | Comparing two teams' results | DP on sequences |
| `08.1-HockeyRivals.c` | Memoised version | Memoization on two parameters |
| `08.2-HockeyRivals.c` | Complete version | 2D dynamic programming |
| `09-Jumping.c` | Minimum jump / minimum cost | Recursion with base case |
| `09.1-Jumping.c` | Jumping variant | More robust numeric bounds |
| `09.2-prof1.c` | Reference solution | Backward DP |
| `09.3-prof2Jumping.c` | Alternative reference | Forward DP |
| `10-kight.c` | Knight on a chessboard | BFS on implicit grid |
| `11-crazyjumping.c` | Jumps with problematic recursion | Recursive exploration, cycle handling |
| `11.1-crazyjumpingAIvisited.c` | Fix with local visited | Pruning, visited-state check |
| `11.2-crazyjumpingBFS.c` | BFS version | BFS over state space |
| `11.3-crazyjumpingbfs01.c` | Optimised BFS | 0-1 BFS, cost-0/1 transitions |
| `12-mice.c` | Mice/exits in directed graph | Multi-source Dijkstra |
| `12.1-miceprof.c` | Mice reference | Adjacency list, classic Dijkstra |
| `13-cookingnonna.c` | Shortest paths with states | Dijkstra on state-doubled graph |
| `14-ants.c` | Ants / reachability on tree | Binary search + feasibility check |
| `15-PekinUni.c` | Minimum distance between rocks | Binary search on the answer |
| `15.1-Pekingreal.c` | Robust variant | Sorting, binary search, greedy check |
| `16-doorsIA.c` | Interactive doors problem | Interactive algorithm, query simulation |
| `16.1-doorssw.c` | Switches/doors variant | Binary search, assignment |
| `17-qualityrows.c` | Rectangle with minimum median | Binary search + 2D prefix sums |
| `17.1-qualityrows.c` | Optimised version | -1/+1 transformation, 2D prefix sums |
| `18-supermarket.c` | Heap structure | Array-based max-heap and min-heap |
| `19-peking2.c` | Label-based structure reconstruction | Treap, sorting + reconstruction |
| `19.1-peking2.c` | Peking 2 variant | Optimisation / comparison |
| `20-Socialmedia.c` | Social groups and communities | Union-Find, path compression, union by size |
| `21-Yokan.c` | Range queries | Binary search on indices, randomisation |
| `x1-ExactlyElectrical.c` | Grid/coordinates | Direct computation, reachability |
| `x2-SpellingCheck.c` | Spelling check | Hashing, large buffers |
| `x2.1-SpellingCheck.c` | Spelling check variant | Data structure refinement |

---

## How to Study with this Repo

```
  Rough solution            Identify the                Apply the right
  (base exercise)    →      bottleneck            →     technique (DP, hash,
                            (TLE? MLE? WA?)             graph, binary search…)
         ↑                                                       ↓
  Repeat on a                ←   ←   ←   ←   ←   ←   Compare with the
  new problem                                          "prof" reference file
```

**Concrete strategy:**

1. **Read the PDF** of the exercise and write a working solution, even if slow.
2. **Compare** with the `.1` or `.2` version: which data structure or technique changes everything?
3. **Study the "Winning Twist"** in the summary below: it's the insight that turns an O(N²) solution into O(N log N).
4. **Check** against the `prof` file: no need to copy, just understand the design choices.

---

## Summary — Data Structures

Data structures are presented **in the order they first appear** in the course.
For each one: conceptual intuition → pseudocode → winning twist → exercises.

---

### 1 · Hash Table with Chaining
> First seen: `02-Snowflakes.c`

> **Intuition:**Imagine an archive with 1000 numbered drawers. Instead of searching through everything, you always put a document in drawer `HASH(document)`. Collisions = multiple documents in the same drawer, resolved with a linked list.
> **Practical problem it solves:** checking in O(1) average whether an element already exists in a very large set, without scanning everything. In the worst case — all keys in the same list — lookup degrades to O(N), which is why a good hash function and a prime `TABLE_SIZE` matter.

**Structure:**
```c
typedef struct node {
    int key;
    struct node *next;
} node;
node *table[TABLE_SIZE];  // TABLE_SIZE prime and large → fewer collisions
```

**Primitive — Insert `O(1)` worst case (head insertion):**
```
h = HASH(key) mod TABLE_SIZE
new->next = table[h]
table[h] = new
```

**Primitive — Lookup `O(1)` average, `O(N)` worst case:**
```
h = HASH(key) mod TABLE_SIZE
walk table[h] comparing each key
```

**The Winning Twist — Polynomial Hashing:**
In `03.1-loginmaryPOLhash.c` the hash function becomes `h = (h * BASE + c) % MOD` with empirically chosen constants. Same asymptotic complexity, but bucket chains become drastically shorter on real datasets, pushing average-case behaviour toward the optimum.

**Exercises:**
- `02-Snowflakes.c` — duplicate detection with chaining
- `03-LoginMayhem.c` — fast lookup on large credential sets
- `03.1-loginmaryPOLhash.c` — polynomial hashing with optimised constants
- `x2-SpellingCheck.c`, `x2.1-SpellingCheck.c` — word matching on large buffers

---

### 2 · Adjacency List for Graphs and Trees
> First seen: `05-DescendantTree.c`

> **Intuition:**Instead of an N×N matrix where most cells are empty, each node only keeps the list of its actual neighbours — like an address book where each person has only the contacts they need.
> **Practical problem it solves:** representing sparse graphs while reducing space from O(V²) to O(V+E), and iterating only over edges that actually exist — making BFS and Dijkstra proportional to the real size of the graph.

**Structure:**
```c
typedef struct edge {
    int to, weight;
    struct edge *next;
} edge;
edge *adj[MAX_NODES];
```

**Primitive — Insert edge `O(1)` (head insertion):**
```c
e->to = dest; e->weight = w;
e->next = adj[src]; adj[src] = e;
```

**Primitive — Visit neighbours `O(deg(u))`:**
```
for each e = adj[u]; e != NULL; e = e->next:
    process(e->to, e->weight)
```

**Exercises:**
- `05-DescendantTree.c`, `05.1-Descendantree.c` — genealogical tree
- `12-mice.c`, `12.1-miceprof.c` — directed weighted graph for Dijkstra
- `13-cookingnonna.c` — state-doubled graph
- `14-ants.c` — ant tree

---

### 3 · Array-Based Heap (Max-Heap and Min-Heap)
> First seen: `18-supermarket.c`

> **Intuition:**A nearly complete binary tree stored as an array: node at index `i` has children at `2i` and `2i+1`, and parent at `i/2`. The heap property guarantees the root is always the maximum (or minimum).
> **Practical problem it solves:** repeatedly extracting the maximum or minimum from a dynamic set in O(log N), without rescanning everything each time — the quintessential priority queue.

**Primitives:**
```
SIFT-UP(heap, i):           // O(log N) — after appending at the end
  while i > 1 and heap[i] > heap[i/2]:
    swap(heap[i], heap[i/2]); i = i/2

SIFT-DOWN(heap, i, n):      // O(log N) — after extracting the root
  while 2i <= n:
    child = child_with_max_value(2i, 2i+1)
    if heap[child] > heap[i]: swap; i = child
    else: break
```

Reading the maximum (root): **O(1)**. Insertion and removal: **O(log N)**.

**The Winning Twist — Dual Heap + Lazy Deletion:**
In `18-supermarket.c` a **max-heap and a min-heap coexist** on the same set. A `used[]` array marks already-consumed elements; during extraction they are **skipped** without rebuilding the structure (**lazy deletion**). Amortised O(log N) per operation, zero rebuilds.

**Exercises:**
- `18-supermarket.c` — max+min heap with lazy deletion via `used[]`

---

### 4 · Treap (Reconstruction from Key + Priority)
> First seen: `19-peking2.c`

> **Intuition:**A BST that is also a heap: keys satisfy BST order (left < root < right) and priorities satisfy the heap property (parent > children). This double constraint forces a unique structure — given a set of (key, priority) pairs, there is exactly one possible treap.
> **Practical problem it solves:** maintaining an ordered dynamic dictionary with expected O(log N) operations, without the implementation complexity of AVL or RB-trees; here used to *reconstruct* the structure from already-given (key, priority) pairs, without dynamic insertions.

**Primitive — Recursive Reconstruction:**
```
SOLVE(nodes[], left, right):
  if left > right: return "."
  root = argmax(nodes[left..right], .priority)
  print "(" + SOLVE(left, root-1) + label/priority + SOLVE(root+1, right) + ")"
```

Complexity: **O(N log N) average case** (expected treap height = O(log N)); **O(N²) worst case** if priorities are already sorted, causing the max-search to degrade over intervals of size N, N-1, N-2, …

**The Winning Twist:**
No rotations needed. Just:
1. **Sort by label** with `qsort` → BST property guaranteed on the entire array.
2. **Recursively find the priority maximum** in the current range → heap property guaranteed.

The treap structure is uniquely determined: sort + priority max reconstruct it without ever inserting a node.

**Exercises:**
- `19-peking2.c` — treap reconstruction and parenthesised print
- `19.1-peking2.c` — alternative variant of the same problem

---

### 5 · Disjoint Set Union (Union-Find)
> First seen: `20-Socialmedia.c`

> **Intuition:**Each element points to its group "representative". To check if two people are in the same group, follow the chains up and compare the roots. To merge two groups, make one root point to the other — and flatten the path for next time.
> **Practical problem it solves:** efficiently handling queries like "are these two nodes connected?" and "merge these two groups" on dynamically growing sets — impossible to do well with plain arrays or lists.

**Primitive — `find` with Full Path Compression:**
```
FIND(x):
  root = x
  while parent[root] != root: root = parent[root]   // find root
  while parent[x] != root:                           // compress path
    next = parent[x]; parent[x] = root; x = next
  return root
```

**Primitive — `union` with Union by Size:**
```
UNION(p1, p2):
  r1=FIND(p1); r2=FIND(p2)
  if r1==r2: return
  if size[r1]+size[r2] > limit: return   // ← winning twist
  if size[r1] < size[r2]: swap(r1,r2)
  parent[r2]=r1; size[r1]+=size[r2]
```

Amortised complexity: **O(α(N))** per operation, where α is the inverse Ackermann function — in practice ≤ 4 for any realistic N, so effectively constant.

**The Winning Twist:**
In `20-Socialmedia.c` the union includes a **capacity constraint**: the merge only happens if `size[r1]+size[r2] ≤ num_community`. Standard DSU turned into a DSU with a per-component cap, same asymptotic complexity unchanged.

**Exercises:**
- `20-Socialmedia.c` — DSU with path compression, union by size, and component size limit

---

### 6 · 2D Prefix Sums
> First seen: `17-qualityrows.c`

> **Intuition:**Pre-process the matrix once so that the sum of any rectangle can be computed with four lookups — like keeping a "running balance" for every row and column prefix, then subtracting the parts you don't need.
> **Practical problem it solves:** answering many "what is the sum in rectangle [r1,c1]–[r2,c2]?" queries in O(1) each, instead of re-scanning the rectangle every time.

**Primitive — Build `O(R·C)`:**
```
for i = 1 to R:
  for j = 1 to C:
    sum[i][j] = mat[i][j] + sum[i-1][j] + sum[i][j-1] - sum[i-1][j-1]
```

**Primitive — Rectangle query `O(1)`:**
```
total = sum[r2][c2] - sum[r1-1][c2] - sum[r2][c1-1] + sum[r1-1][c1-1]
```

**The Winning Twist — -1/+1 Transformation:**
In `17.1-qualityrows.c` the matrix on which prefix sums are built is not the original, but its **binary transformation** with respect to threshold `k`:
- element ≤ k → `-1`
- element > k → `+1`

"Does an H×W rectangle with median ≤ k exist?" becomes "does an H×W rectangle with sum ≤ 0 exist?". Checking all possible rectangles naïvely costs O(R²·C²); with 2D prefix sums the check drops to O(R·C), making the outer binary search on `k` practical.

**Exercises:**
- `17-qualityrows.c` — baseline with prefix sums
- `17.1-qualityrows.c` — with -1/+1 transformation + 2D prefix sums

---

## Summary — Algorithms

---

### 1 · Top-Down DP (Memoization)
> First seen: `06.1-Homersimpson.c`

> **Intuition:**Normal recursion, but with a "memory" (array or dictionary) that saves already-computed results. If you've already visited that state, return immediately without recomputing.
> **Practical problem it solves:** preventing recursion from exploring the same subproblems exponentially. With memoization each state is computed exactly once, reducing complexity from exponential to proportional to the number of distinct states.

**Template:**
```
memo = {}
SOLVE(state):
  if state in memo: return memo[state]
  if base_case: return base_value
  result = min/max over all choices of SOLVE(sub-state)
  memo[state] = result
  return result
```

**The Winning Twist:**
In `08.1-HockeyRivals.c` the state is **two-dimensional** `(i, j)` — indices into the two sequences. The number of distinct states is N·M and each is computed exactly once, bringing complexity from exponential to **O(N·M)**, where N and M are the lengths of the two sequences.

**Exercises:**
- `06.1-Homersimpson.c` — 1D memoization (remaining beer)
- `08.1-HockeyRivals.c` — 2D memoization on two sequences

---

### 2 · Bottom-Up DP
> First seen: `06.2-Homersimpson.c`

> **Intuition:**Instead of descending from the question toward base cases (top-down), start from the base cases and fill a table upward. No recursion, no risk of stack overflow, total control over the order in which states are visited.
> **Practical problem it solves:** when memoization has too much recursive call overhead, or when the state graph has a regular structure that lends itself to a simple iterative loop.

**Two directions:**
```
// Forward (09.3): from initial state toward goal
dp[0] = base_case
for i = 1 to N: dp[i] = f(dp[i-1], ...)

// Backward (09.2): from goal toward initial state
dp[N] = base_case
for i = N-1 down to 0: dp[i] = f(dp[i+1], ...)
```

**The Winning Twist:**
`09.2-prof1.c` (backward) and `09.3-prof2Jumping.c` (forward) solve the same problem with opposite reasoning directions. Comparing both is the most instructive exercise in the repository for grasping the duality of DP formulations.

**Exercises:**
- `06.2-Homersimpson.c` — 1D bottom-up DP
- `08.2-HockeyRivals.c` — iterative 2D DP
- `09.2-prof1.c` — backward DP
- `09.3-prof2Jumping.c` — forward DP

---

### 3 · BFS — Breadth-First Search
> First seen: `10-kight.c`

> **Intuition:**Explore the graph in "waves" — first all nodes at distance 1, then all at distance 2, etc. Like ripples in water when a stone drops: guarantees finding the shortest path in terms of number of edges.
> **Practical problem it solves:** finding minimum distance in unweighted or uniform-weight graphs, and searching in implicit state spaces like the knight's chessboard, where constructing the graph explicitly would be wasteful.

**Template:**
```
BFS(source):
  dist[source]=0, all others=-1; queue=[source]
  while queue not empty:
    u = dequeue
    for each neighbour v: if dist[v]==-1: dist[v]=dist[u]+1; enqueue(v)
```

Complexity: **O(V+E)** where V = vertices, E = edges of the state graph.

**The Winning Twist — 0-1 BFS:**
In `11.3-crazyjumpingbfs01.c` transitions have cost **0 or 1**. 0-1 BFS uses two queues/fronts instead of a priority queue:

```
for each state in front current:
  cost 0 → re-insert into current[]   // same "cost level"
  cost 1 → insert into next[]         // next level
```

Complexity: **O(V+E)** — identical to standard BFS, extended to graphs with weights in {0,1} without Dijkstra's O(log V) factor. The advantage over Dijkstra (which would cost O((V+E) log V)) is significant on large graphs.

**Exercises:**
- `10-kight.c` — BFS on implicit grid (knight moves)
- `11.2-crazyjumpingBFS.c` — BFS over state space
- `11.3-crazyjumpingbfs01.c` — 0-1 BFS with dual front

---

### 4 · Dijkstra — Shortest Path on a Weighted Graph
> First seen: `12-mice.c`

> **Intuition:**Like BFS, but with a priority queue instead of a plain queue. Each time extract the unconfirmed node with minimum distance and relax its neighbours. Non-negative weights guarantee that once a node is extracted, it has its definitive distance.
> **Practical problem it solves:** finding the shortest path in graphs with varying edge weights — road maps, distribution networks, any system where transition costs differ.

**Template:**
```
dist[source]=0, all ∞; done[]=false
repeat V times:
  u = non-done node with minimum dist   // Extract-Min
  done[u] = true
  for each edge (u,v,w): if dist[u]+w < dist[v]: dist[v]=dist[u]+w
```

Complexity: **O(V²)** with linear array for Extract-Min (version used here, suitable for V ≤ ~1000); **O((V+E) log V)** with a binary heap.

**The Winning Twist — State-Doubled Graph:**
In `13-cookingnonna.c` every node exists in two versions: state `0` (no cookie collected) and state `1` (at least one). The `0→1` transition is free at shop nodes:

```
if state==0 and node_is_store:
    update dist[u][1] with dist[u][0]   // zero-cost transition
else:
    relax dist[v][state] normally
```

This turns a constrained problem into a plain shortest path on a graph of size 2·V — Dijkstra is unchanged, only the state space it operates on is doubled.

**Exercises:**
- `12-mice.c` — multi-source Dijkstra, count within time limit
- `12.1-miceprof.c` — adjacency list + classic O(V²) Dijkstra
- `13-cookingnonna.c` — Dijkstra on state-doubled graph + shortest-path counting

---

### 5 · Binary Search on the Answer + Feasibility Check
> First seen: `15-PekinUni.c`

> **Intuition:**Instead of directly searching for the optimal answer, ask a binary question: "is it possible to achieve a result ≤ k?". If the property is monotone (if k works, k+1 works), binary search on k and call the check only O(log(range)) times.
> **Practical problem it solves:** turning hard optimisation problems into decision problems (yes/no), where the check is often much simpler to implement and binary search does the rest.

**Template:**
```
low=lower_bound; high=upper_bound
while high-low > 1:
  mid = (low+high)/2
  if CAN_ACHIEVE(mid): high=mid
  else: low=mid
return high
```

**The Winning Twist — Transformation + Prefix Sums:**
In `17.1-qualityrows.c` the check `CAN_ACHIEVE(k)` becomes: "does an H×W rectangle with sum ≤ 0 exist in the transformed matrix?". Checking all possible rectangles naïvely costs O(R²·C²); with 2D prefix sums the check drops to O(R·C). The outer binary search adds an O(log(max_val)) factor, for a total complexity of **O(R·C·log(max_val))**.

**Exercises:**
- `14-ants.c` — binary search on indices, reachability check
- `15-PekinUni.c` — binary search on minimum distance between rocks
- `15.1-Pekingreal.c` — with sorting + greedy check
- `16.1-doorssw.c` — binary search on door assignment
- `17-qualityrows.c` — binary search on rectangle median
- `17.1-qualityrows.c` — + -1/+1 transformation + 2D prefix sums
- `21-Yokan.c` — binary search on intervals with randomisation

---

## Final Note

Some source files contain working comments, intermediate attempts, or debugging notes: this is intentional. The repository preserves **both the algorithmic idea and the path** that led to the final solution — the process is an integral part of studying.

---

## License

Personal study material by **Matteo Merolli**, collected during the Algorithms and Problem Solving course (Unimore, 2025/2026). Free to use for study purposes.
