#! /usr/bin/env bash

gcc -c $1.s -o $1.o
gcc $1.o -o $1

