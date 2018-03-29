# Simple Shell Project

## Synopsis
This is a simple shell recreation of a UNIX command line interpreter.

## Description
This simple shell can read, interpret, and execute commands. Once the commands are executed it will free up any memory and terminate.

## Environment
This shell was built and tested in an Ubuntu 14.04 LTS using vagrant in VirtualBox.

## How to Install
Clone this repository and compile the files into an executable using the GCC compiler.
```
https://github.com/Mikaelia/simple_shell
```
All files need to be compiled on an Ubuntu 14.04 LTS machine using:
```
gcc -Wall -Werror -Wextra -pedantic *.c -o hsh
```

## Usage
After compilation you can start the program by running the command:
```./hsh```

You can also use most shell commands like: ```ls -la```, ```pwd```,  ```cat``` etc.

## Built-Ins
This simple shell supports the following built in commands:
+ ```env``` - Print the current environment
+ ```exit``` - Exit out of the shell

### Repository Contents
Our shell includes the following files:

|  **File**  |   **Description**   |
| ------------ | --------------------- |
| holberton.h | Contains the C standard library header files, and struct and function declarations |
| appendcmd.c | Creates a new buffer to hold node value and append user input |
| checkbuiltins.c | Checks input for builtins |
| checkpath.c | Checks path for executable |
| exit.c | Exit builtin function |
| findpathvar.c | Searchs for environmental variable string for the PATH name |
| free2pointer.c | Frees a double pointer |
| freelist.c | Frees the linked list |
| helpers.c | String duplicate helper function |
| launch.c | Forks the process and executes commands |
| looper.c | Contiuous running loop of the shell |
| pathtolinkedlist.c | Splits the path string into tokens, adds it to the linked list and returns the list  |
| printenv.c | Prints the environment |
| printerror.c | Prints error messages |
| prompt.c | Reads the argument from standard input and returns a buffer string containining those arguments |
| shellmain.c | Main function for the simple shell |
| tokenize.c | Parses the input line into tokens |


### Description of Functions

| **Function** | **Description** |
| -------------- | ---------------- |
| void free2pointer(char **tokens) | Frees double pointer tokens |
| void freelist(tokenlist_t *head) | Frees the linked list |
| void free2list(char **) | Frees double pointer list  |
| void sig_handler(int sig_handler) | Handles ctrl+c signal interruption |
| char *_realloc(void *ptr, unsigned int, unsigned int) | Reallocates memory space |
| int _strlen(char *) | Finds the length of a string |
| int _strcmp(char *s1, char *s2) | Compares two strings |
| void printerror(char **, int, char *) | Prints error messages |
| char *_strdup(char *) | Duplicates a string |
| void looper(char **) | Loops through the shell|
| int _prompt(char **, free_t *stash) | Reads the line for the prompt|
| int tokenize(free_t *stash) | Parses input line into tokens |
| void launch(char **av, free_t *stash, int count) | Forks the process and executes commands |
| int checkbuiltins(free_t *stash) | Checks input for builtins |
| char *checkpath(free_t *stash) |  |
| char *appendcmd(const tokenlist_t *pathlist, char *arg) |  |
| char *findpath(void) | Finds the path variable in environmental variable array |
| char **pathsplit(char*) | Splits the PATH string into tokens |
| tokenlist_t *tokentolist(tokenlist_t **head, char *token) | Turns the path token and returns it to a linked list  |
| tokenlist_t *pathsplitlist(char *path) | Turns token into a linked list  |
| int __exit(free_t *stash) | Exits the shell |
| int printenviron(char **tokens) | Prints the environment |

## Return Value
This simple shell will exit with the status of 0 unless the status is otherwise specified.

### Example Code
```
vagrant:simple_shell$ ./hsh
$ ls -l
total 116
-rw-rw-r-- 1 vagrant vagrant   241 Mar 18 22:00 AUTHORS
-rw-rw-r-- 1 vagrant vagrant  4087 Mar 28 21:12 README.md
-rw-rw-r-- 1 vagrant vagrant  1020 Mar 28 21:09 appendcmd.c
-rw-rw-r-- 1 vagrant vagrant   307 Mar 28 21:09 checkbuiltins.c
-rw-rw-r-- 1 vagrant vagrant   707 Mar 28 18:55 checkpath.c
-rw-rw-r-- 1 vagrant vagrant   990 Mar 28 21:09 exit.c
-rw-rw-r-- 1 vagrant vagrant   870 Mar 28 18:55 findpathvar.c
-rw-rw-r-- 1 vagrant vagrant   245 Mar 28 18:55 free2pointer.c
-rw-rw-r-- 1 vagrant vagrant   282 Mar 28 18:55 freelist.c
-rw-rw-r-- 1 vagrant vagrant   443 Mar 28 18:55 helpers.c
-rw-rw-r-- 1 vagrant vagrant  1747 Mar 28 21:09 holberton.h
-rwxrwxr-x 1 vagrant vagrant 32434 Mar 28 21:09 hsh
-rw-rw-r-- 1 vagrant vagrant   717 Mar 28 18:55 launch.c
-rw-rw-r-- 1 vagrant vagrant   940 Mar 28 21:09 looper.c
-rw-rw-r-- 1 vagrant vagrant   803 Mar 28 18:06 man_simple_shell
-rw-rw-r-- 1 vagrant vagrant  1363 Mar 28 21:09 pathtolinkedlist.c
-rw-rw-r-- 1 vagrant vagrant   395 Mar 28 18:55 printenv.c
-rw-rw-r-- 1 vagrant vagrant  1391 Mar 28 18:55 printerror.c
-rw-rw-r-- 1 vagrant vagrant   389 Mar 28 21:09 prompt.c
-rw-rw-r-- 1 vagrant vagrant   257 Mar 28 18:55 shellmain.c
-rw-rw-r-- 1 vagrant vagrant  1650 Mar 28 18:55 tokenize.c
```

### Notes
Other features are will be implemented in the future.

### Authors
* [**Germaine Balmania**](https://github.com/guccigerm)
* [**Mikaela Gurney**](https://github.com/Mikaelia)
* [**Victor Nguyen**](https://github.com/vmdn23)