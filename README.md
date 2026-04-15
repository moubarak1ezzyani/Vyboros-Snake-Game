# Vyboros - Snake Game  

## 1. The Repository Structure
For a modern C++ project using CMake, separating your headers (.hpp) from your source files (.cpp) is the industry standard.

````plaintext
vyboros-snake/              # (Or whatever name you chose)
│
├── .gitignore              # Ignores compiled files (like the build/ folder)
├── CMakeLists.txt          # The master blueprint for compiling
├── README.md               # Your portfolio showcase page (instructions, screenshots)
│
├── assets/                 # Store your font files (for score text) and any textures
│   └── arial.ttf
│
├── include/                # Header files (The "Blueprints")
│   ├── Game.hpp
│   ├── Snake.hpp
│   └── Board.hpp           # Handles fruit, obstacles, and grid logic
│
└── src/                    # Source files (The "Implementations")
    ├── main.cpp            # Only used to start the Game object
    ├── Game.cpp
    ├── Snake.cpp
    └── Board.cpp
````

## Your Working Branches (Examples):

feature/cmake-setup (Your first branch)

feature/snake-movement

feature/wall-wrap-logic

feature/obstacle-spawning

feature/high-score-file-io

fix/tail-collision-bug (If you find a glitch later)

docs/readme-updates