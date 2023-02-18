#!/bin/bash
echo '#include <stdio.h> ; int main() { puts("Programming is like building a multilingual puzzle"); return 0; }' | gcc -x c - && ./a.out && rm a.out
