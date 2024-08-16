# Simple 2D Game Engine in [![C++](https://img.shields.io/badge/C%2B%2B-00599C?style=flat-square&logo=c%2B%2B&logoColor=white)](https://en.cppreference.com/w/)

A basic 2D game engine in C++ using SDL2. This engine provides essential features for creating 2D games.

## Features

- Create and manage a game window
- Render basic shapes
- Handle keyboard and mouse inputs
- Run a basic game loop
- Manage and render game entities

## Getting Started

### Prerequisites

- **SDL2 Library**: Install SDL2 on your system.

  - Linux:
  ```bash
  sudo apt-get install libsdl2-dev
  ```

  - **Windows/Mac**: Download from the [SDL2 website](https://www.libsdl.org/download-2.0.php).

- **C++ Compiler**: Ensure you have `g++` or another C++ compiler.

### Building and Running

1. Clone or download the project files.

2. Open a terminal and navigate to the project directory.

3. Compile the project with:

   ```bash
   g++ main.cpp Engine.cpp -lSDL2 -o game_engine
   ```

4. Run the executable:

   ```bash
   ./game_engine
   ```

## Files

- **`main.cpp`**: Application entry point.
- **`Engine.h`**: Engine class definition.
- **`Engine.cpp`**: Engine class implementation.
- **`Entity.h`**: Basic entity class definition.
- **`Entity.cpp`**: Basic entity class implementation.

## Example

The example in `main.cpp` creates a `Player` entity that moves horizontally.

## Contributing

Contributions are welcome! Please submit pull requests or open issues for improvements.

## License

This project is licensed under the MIT License. See the [LICENSE](LICENSE) file for details.
