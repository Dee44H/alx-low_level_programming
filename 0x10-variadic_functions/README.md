# VARIADIC FUNCTIONS

Variadic functions are functions that take up a variable number of arguments. Usually, a stdarg.h header file allows functions to accept an indefinite number of arguments and its contents are used in variadic functions. For the following tasks, all function prototypes are included in "variadic_functions.h".

##Tasks
### Task 0.: Beauty is variable, ugliness is constant
* Write  function that returns the sum of all its parameters.
* Prototype: int sum_them_all(const unsigned int n, ...);
* if n == 0, return 0
