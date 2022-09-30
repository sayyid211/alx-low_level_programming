#!/bin/bash
ar -rc liball.a *.o |xargs gcc -c *.c
