# Fuzzing example

## Prerequisites
* Linux (preferably Arch Linux or an Arch Linux based distribution such as Manjaro) or MacOS
* [juCi++](https://gitlab.com/cppit/jucipp)

## Instructions using juCi++
1. Clone this repository
2. Run juCi++ with the following arguments from a terminal:
    * Linux: `CXX=clang++ juci fuzzing-example`
    * MacOS: `CXX=/usr/local/Cellar/llvm/8.0.1/bin/clang++ juci fuzzing-example`
3. Open `tests/utility_fuzzer_test.cpp` and run using either:
    * Compile and Run in the Project menu
    * Start/Continue in the Debug menu

## Instructions using a terminal on Linux
```sh
git clone https://gitlab.com/ntnu-tdat3020/fuzzing-example
mkdir fuzzing-example/build
cd fuzzing-example/build
CXX=clang++ cmake ..
make
./tests/utility_fuzzer_test -max_total_time=60  # Cancel fuzzing after 60 seconds
```
