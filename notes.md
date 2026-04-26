# Notes

### What is CMake?
CMake is a **cross-platform build system generator**. It doesn't actually compile your code; instead, it acts as a "director" that tells your computer how to prepare the project for your specific compiler and environment.

### Why is it used?
* **Portability:** C++ doesn't have a built-in way to manage projects. CMake allows you to write one set of rules (`CMakeLists.txt`) that works on Windows, Linux, and macOS.
* **Automation:** It automatically finds where libraries (like **SFML**) are installed on your system and "links" them to your code so you don't have to manually configure paths in your IDE.
* **Flexibility:** It can generate files for different "build tools." For example, it can create a Visual Studio Solution (`.sln`) or a MinGW `Makefile` from the same source.

### CMake vs. Other Languages
Most modern languages have their own built-in tools that handle what CMake does for C++:
* **Rust:** Uses `Cargo`.
* **JavaScript:** Uses `npm` or `yarn`.
* **Python:** Uses `pip` or `poetry`.
* **Java:** Uses `Maven` or `Gradle`.

Because C++ is older and "closer to the metal," it relies on CMake to bridge the gap between your source code and the various operating systems and compilers available.


## 2. Tell CMake where to find it:
```bash
cmake -DSFML_DIR="C:/SFML/lib/cmake/SFML" ..
````

## Build and Run!
Now, let's tell CMake to build it. Run these commands in your terminal one by one:

````Bash
cd build
cmake ..
cmake --build .
````
Note: If you get a "Could NOT find SFML" error here, it means we need to explicitly tell CMake where you installed SFML on your machine. Let me know if that happens!