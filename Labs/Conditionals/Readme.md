## Overview

Use *if/else* statements to control the flow of your program. 

| | |
| --------- | --------------------------- |
| Exercise Folder | Conditionals |
| Builds On | WhileLoop |
| Time to complete | 30 minutes

Continuing with WhileLoop, check for F temps below 40 and display "cold" along with the temperature.  If the F value is above 115, display "Hot"

### Steps

* On the line where `c` is being printed, remove the `std::endl` so that a newline isn't added to the end of the line.
* add an `if` statement to check if `f` is less than 40.  If it is, display "cold"
* add an `else if` statement to check if `f` is greater than 115.  If it is, display "hot"
* add an `else` statement to display "comfortable"
* add a final statement to add the newline
* Run the program and verify that the output is correct