# echo

Display a line of text



## Build and Run

```
$ make
mkdir bin
gcc -W -Wall -c src/main.c
gcc -W -Wall -o bin/echo *.o
rm *.o

$ clean
rm bin/*
```

```
$ ./bin/echo
usage : ./bin/echo [STRING]...

$ ./bin/echo Hello World
Hello World
```

