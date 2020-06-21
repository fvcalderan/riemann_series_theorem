# Riemman Series Theorem Generator

```
  __                _     _                      
 / _|_   _____ __ _| | __| | ___ _ __ __ _ _ __  
| |_\ \ / / __/ _` | |/ _` |/ _ \ '__/ _` | '_ \ 
|  _|\ V / (_| (_| | | (_| |  __/ | | (_| | | | |
|_|   \_/ \___\__,_|_|\__,_|\___|_|  \__,_|_| |_|

BSD 3-Clause License
Copyright (c) 2020, Felipe V. Calderan
All rights reserved.
See the full license inside LICENSE.txt file
```

Given a real number and a precision, generate a series that approximates the number. This series will use the Riemman Series Theorem. See https://en.wikipedia.org/wiki/Riemann_series_theorem for more details.

### Build the Program

To build the program, run `make` inside the project's root folder.

### Usage

```
./rst value precision > output.txt
Example: ./rst 3.1415926536 0.001 > output.txt
```

### Extra

A simple javascript expression evaluator is included in the project, just to check the accuracy of the results.
