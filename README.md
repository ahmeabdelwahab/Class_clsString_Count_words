# 📝 Class `clstring` — Word Counter Utility

An optimized, production-ready C++ string capsule class designed to handle text manipulation and provide space-insensitive word counting with $O(1)$ time complexity.

---

## 📌 Overview
`clstring` is a custom Object-Oriented string utility class built in C++. It wraps standard string behaviors and solves a common real-world problem: counting words accurately regardless of messy text formatting, trailing spaces, or multiple consecutive spaces.

### ⚡ Key Features
* **Encapsulation:** Complete data hiding using private members (`_value` and `_wordcount`).
* **Optimized Performance:** Word tracking logic runs dynamically on value updates, keeping data retrieval at a strict **$O(1)$ complexity** when calling getters.
* **Smart Padding Filter:** Intelligently ignores single or multiple spaces at the beginning, middle, or end of sentences.

---

## 🏗️ Architecture & Logic
The project demonstrates strong OOP concepts by separating string mutation from data presentation:

* **Private Helper (`_calculateWords`):** Uses a boolean flag mechanism (`inWord`) to accurately detect word boundaries.
* **Safe Mutators:** Automatically updates the internal pre-calculated data member whenever a new string is injected via constructors or setters.

---

## 💻 Code Example & Usage

```cpp
#include "clstring.h"

int main() {
    // Handling messy string inputs with irregular spacing
    clstring str("   Hello     World!   This is   C++   ");

    // Prints cleanly pre-calculated stats instantly
    str.printmethod();

    return 0;
}
