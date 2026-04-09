---

## 🗂️ Files

| File | Role |
|------|------|
| `Node.h` / `Node.cpp` | Tree node: key, RED/BLACK color, child pointers |
| `RedBlackBST.h` / `RedBlackBST.cpp` | Insert, rotate, flip, size, print |
| `RBTreeTest.cpp` | Catch2 unit tests |
| `main.cpp` | Demo tree + interactive insert/display menu |
| `gip_mini_catch.h` | Lightweight Catch2 header |

---

## ⚙️ Complexity Guarantees

| Operation | Complexity |
|-----------|------------|
| `insert(key)` | O(log n) — guaranteed |
| `size()` | O(1) |
| `print()` | O(n) |

Height is bounded at **2 log n** in the worst case — far better than
an unbalanced BST.

---

## 🚀 Build & Run
```bash
g++ -std=c++17 -o rbtree main.cpp RedBlackBST.cpp Node.cpp RBTreeTest.cpp
./rbtree
```

The program runs unit tests, builds a sample tree from
`{503, 502, 403, 1002, 2002, 3002}`, displays its structure, then opens: Insert key manually
Display tree structure
Exit
---

## 🧠 Concepts

- Self-balancing BST invariants
- Red-Black tree (Sedgewick Left-Leaning variant)
- Left/right rotations and color flipping
- Equivalence: Red-Black BST ↔ 2-3-4 tree
- Catch2 unit testing
