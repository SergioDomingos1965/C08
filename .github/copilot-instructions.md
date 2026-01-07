<!-- Purpose: Help AI coding agents be productive in this small C++ repo -->
# Copilot instructions for this repository

- Purpose: Single-source C++ exercise repository. The workspace currently contains one file: [main.cpp](main.cpp).

- Quick context: `main.cpp` contains a small, partially commented example using `<iostream>` and `<vector>`, a range-based `for` loop, and `auto`. The file appears incomplete (truncated at the end).

- Primary goals for an AI agent:
  - Repair and complete `main.cpp` so it compiles and runs on the user's platform.
  - Keep edits minimal and idiomatic to the existing style (see examples below).
  - Add a simple build command or short README when appropriate (don't add full build systems unless requested).

- How to build and run (discoverable from the repo contents):
  - Preferred quick command (MinGW/WSL/macOS/Linux):
    ```sh
    g++ -std=c++11 -Wall -Wextra -Werror main.cpp -o main
    ./main
    ```
  - On Windows with MSVC (developer to adapt): use `cl` or Visual Studio project; confirm with user before creating Visual Studio project files.

- Code style and patterns observed (follow these when editing):
  - Uses C++ standard library headers like `<iostream>` and `<vector>`.
  - Uses `auto` and range-based `for` loops: `for (auto &x : vec)`.
  - Return style uses `return (0);` — preserve this style unless asked to modernize.
  - Keep whitespace and brace placement consistent with the existing file (open brace on new line is present in file comments).

- Concrete examples (use these as a reference when repairing `main.cpp`):
  - The commented example in `main.cpp` is a good minimal program to restore; keep includes and the loop structure.

- What to avoid:
  - Do not introduce new third‑party dependencies or a complex build system without user approval.
  - Do not change the project's intended language version without confirming (stick to C++11-compatible code unless user requests another standard).

- When making changes, include a short rationale in the commit message or PR describing why the change was required (e.g., "restore missing includes and close truncated file").

- If you need clarification, ask the user whether they want:
  1. A minimal fix so the single file compiles and runs.
 2. A small README and a one-line build script.
 3. A full project scaffold (CMake or Visual Studio) — only proceed after confirmation.

<!-- End of file -->
