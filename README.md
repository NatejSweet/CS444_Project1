# Project 1

## Building

Command line:

* `make` to build. An executable called `hellothread` will be produced.
* `make clean` to clean up all build products except the executable.

VS Code:

* The default build task runs `make`.

## Files

* `hellothread.c` main program to lauch threads
* `Makefile` file containing commands for compiling

## Data

_[Description of the main data used in the program. Just list the major
data structures—not every variable.]_

There is an 80x24 2D array of Booleans that represents the cells, in
row-major order. Additionally, there's a second parallel array used to
double-buffer during the next generation computation.

If an array element is True, the cell is alive, otherwise it's dead.

## Functions

_[This is a tree of functions and their short descriptions]_

* `main()`
  * `pthread_create()`: creates and starts a new thread on the passed function
  * `pthread_join()`: forced thread that calls function to wait for thread passed in to finish

* `countUp()`: counts from 0 to 4 printing thread name and current number

## Notes
