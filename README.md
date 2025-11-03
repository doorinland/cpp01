# CPP Module 01

This repository contains my solutions for CPP Module 01 from 42 School.

## Overview

CPP Module 01 covers fundamental C++ concepts including:
- Memory allocation and deallocation
- References and pointers
- Switch statements
- File I/O operations
- Class design and implementation

## Exercises

### ex00 - BraiiiiiiinnnzzzZ
Implementation of a Zombie class with heap and stack allocation.
- Files: `Zombie.hpp`, `Zombie.cpp`, `newZombie.cpp`, `randomChump.cpp`, `main.cpp`

### ex01 - Moar brainz!
Creating a horde of zombies using dynamic allocation.
- Files: `Zombie.hpp`, `Zombie.cpp`, `zombieHorde.cpp`, `main.cpp`

### ex02 - HI THIS IS BRAIN
Working with references and pointers to understand memory addresses.
- Files: `main.cpp`

### ex03 - Unnecessary violence
Implementation of classes with references as members.
- Files: `Weapon.hpp`, `Weapon.cpp`, `HumanA.hpp`, `HumanA.cpp`, `HumanB.hpp`, `HumanB.cpp`, `main.cpp`

### ex04 - Sed is for losers
File manipulation and string replacement without using sed.
- Files: `main.cpp`

### ex05 - Harl 2.0
Implementation of a logging system using function pointers.
- Files: `Harl.hpp`, `Harl.cpp`, `main.cpp`

### ex06 - Harl filter
Filtering log messages using switch statements.
- Files: `Harl.hpp`, `Harl.cpp`, `main.cpp`

## Compilation

Each exercise includes a Makefile with the following rules:
- `make` or `make all`: Compile the program
- `make clean`: Remove object files
- `make fclean`: Remove object files and executable
- `make re`: Clean and recompile

All programs are compiled with:
```
c++ -Wall -Wextra -Werror -std=c++98
```

## Usage

Navigate to each exercise directory and run:
```bash
make
./[executable_name]
```

## Author

nora - 42 School Student
