# 🗺️ Graph Algorithms — DFS · BFS · MST · Shortest Path

**Author:** Malek Bouaziz
**Course:** Algorithms & Data Structures · Praktikum 4
**Language:** C++17

A complete **graph algorithm toolkit** supporting weighted undirected and directed
graphs. Five fundamental algorithms implemented, graphs loaded from text files,
with a full interactive CLI and runtime edge editing.

---

## 📋 Overview

Graphs are represented as **adjacency lists** for memory efficiency with sparse
graphs. The toolkit separates undirected (`EdgeWeightedGraph`) from directed
(`EdgeWeightedDigraph`) representations, enabling both MST and shortest-path
computation on the same input.

---

## 🗂️ Files

| File | Role |
|------|------|
| `EdgeWeightedGraph.h/.cpp` | Undirected weighted graph (adjacency list) |
| `EdgeWeightedDigraph.h/.cpp` | Directed weighted graph |
| `Graphsearch.h` | DFS and BFS implementations |
| `PrimMST.h/.cpp` | Prim's MST with min-heap |
| `KruskalMST.h/.cpp` | Kruskal's MST with Union-Find |
| `DijkstraSP.h/.cpp` | Dijkstra's shortest path |
| `PriorityQueue.h` | Custom min-heap implementation |
| `GraphTest.cpp` | Catch2 unit tests |
| `main.cpp` | Full interactive CLI |
| `graph1/2/3.txt` | Sample weighted graph input files |

---

## ⚙️ Algorithms

| Algorithm | Type | Graph | Complexity |
|-----------|------|-------|------------|
| DFS | Traversal | Undirected | O(V + E) |
| BFS | Traversal | Undirected | O(V + E) |
| Prim's MST | Spanning Tree | Undirected, Weighted | O(E log V) |
| Kruskal's MST | Spanning Tree | Undirected, Weighted | O(E log E) |
| Dijkstra's SP | Shortest Path | Directed, Weighted | O(E log V) |

---

## 🚀 Build & Run
```bash
g++ -std=c++17 -o graphs main.cpp EdgeWeightedGraph.cpp EdgeWeightedDigraph.cpp \
    PrimMST.cpp KruskalMST.cpp DijkstraSP.cpp GraphTest.cpp
./graphs
```

**Interactive menu:**
Load graph from file
Depth-First Search
Breadth-First Search
MST — Prim's algorithm
MST — Kruskal's algorithm
Shortest Paths — Dijkstra
Print adjacency list
Delete an edge
Add an edge
Exit
---

## 🧠 Concepts

- Adjacency list representation for sparse graphs
- DFS (recursive) and BFS (queue-based) traversal
- Minimum Spanning Tree: Prim vs. Kruskal compared
- Shortest path with priority queue (Dijkstra)
- Union-Find / Disjoint Set Union (Kruskal)
- Dynamic edge insertion and deletion at runtime
