# C++ Exercise Repository - ABK Course

## Overview
This is a C++ learning repository for the ABK C++ course (Uebung1). It contains simple C++ exercise programs.

## Project Structure
- `hallo.cc` - Simple "Hello World" program
- `summieren.cc` - Program that reads number pairs from `daten.txt` and calculates their sum
- `daten.txt` - Data file containing number pairs (234 pairs)

## Recent Changes
- 2025-10-22: Initial Replit setup
  - Installed C++ (Clang 14) toolchain
  - Added example implementations for empty exercise files
  - Configured workflow to compile and run programs

## How to Run
The workflow is configured to compile and run both programs:
1. Compiles `hallo.cc` and runs it
2. Compiles `summieren.cc` and runs it with the data from `daten.txt`

To compile manually:
```bash
clang++ hallo.cc -o hallo
./hallo

clang++ summieren.cc -o summieren
./summieren
```

## Architecture
Simple command-line C++ programs with no external dependencies. Uses standard C++ library only.
