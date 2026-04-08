# 🖨️ Priority Queue — Print Job Scheduler

**Author:** Malek Bouaziz
**Course:** Algorithms & Data Structures · Praktikum 1.1
**Language:** C++17

A printer queue simulation built on a **max-priority queue**. Jobs are processed by priority level rather than arrival order, demonstrating a real-world use case of heap-based data structures.

---

## 📋 Overview

The `Printer` class wraps a `std::priority_queue<Job>` and enforces a configurable maximum capacity. When `startPrinting()` is called, the job with the highest priority is always dequeued and processed first.

### Flow addNewJob(job)  →  priority_queue (max-heap)  →  startPrinting()  →  output by priority
---

## 🗂️ Files

| File | Role |
|------|------|
| `job.hpp` | `Job` struct: name, priority, `operator<` overload |
| `printer.h` | `Printer` class declaration |
| `printer.cpp` | `addNewJob()` and `startPrinting()` implementations |
| `main.cpp` | Demo: 6 jobs added, printed by priority |

---

## 🚀 Build & Run
```bash
g++ -std=c++17 -o printer main.cpp printer.cpp
./printer
```

**Expected output:** 
Added job in the queue: John  (priority: 10)
Added job in the queue: Jerry (priority: 4)
...
Processing job: Bill  (priority: 11)
Processing job: John  (priority: 10)
Processing job: Kenny (priority: 10)
...
---

## 🧠 Concepts

- `std::priority_queue` (max-heap from STL)
- Operator overloading: `operator<`, `operator<<`
- OOP: encapsulation, class design
- Queue capacity enforcement
