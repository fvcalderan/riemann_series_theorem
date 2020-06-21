# Author: Felipe V. Calderan
# Copyright: Copyright (C) 2020 Felipe V. Calderan
# License: BSD 3-Clause "New" or "Revised" License
# Version: 1.0

CC = gcc
CFLAGS  = -ggdb3 -Wall

TARGET = rst

all: $(TARGET)

$(TARGET): $(TARGET).c
	$(CC) $(CFLAGS) -o $(TARGET) $(TARGET).c

clean:
	$(RM) $(TARGET)

memcheck:
	valgrind --leak-check=full \
         --show-leak-kinds=all \
         --track-origins=yes \
         --verbose \
         --log-file=memcheck.txt \
         ./${TARGET} 3.1415926536 0.1

