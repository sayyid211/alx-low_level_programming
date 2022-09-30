#!/bin/bash
ar -rc liball.a | xargs gcc -c -wall -pedantic -std=gnu89 *.c
