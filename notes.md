# Notes
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