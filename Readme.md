# Simple Log

![Testing program for Simple Log](http://octodex.github.com/images/yaktocat.png)

Simple Log is a C library that allow you to display informations on standard output.

## Use

call Simple Log function in your C program.

```c
logError("Damnit, something's wrong");
```

output:

```
[E] in main (test.c:5) Damnit, something's wrong
```

You can use it like the ```printf``` function, with optionnal arguments

```c
logInfo("%d files loaded", n);
```

output:

```
[I] in foo (bar.c:9001) 81 files loaded
```

## Test

To test Simple Log, use the included test program and Makefile.

```bash
make
./test
```

## About

I put Simple Log on Github for backup purpose. Feel free to do whatever you want with it.
