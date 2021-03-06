# System Calls

The kernel exposes the system calls to the user-space by the interrupt vector 0x80(128 decimal). In the future, syscall will be supported.

## Table of System calls

| nº| System call         |
|---|---------------------|
| 0 | write() system call |
| 1 | read() system call  |
| 2 | open() system call  |
| 3 | close() system call |
| 4 | dup() system call   |
| 5 | dup2() system call  |
| 6 | getpid() system call |
| 7 | lseek() system call |
| 8 | _exit() system call |
| 9 | posix_spawn() system call |
| 10 | fork() system call |
| 11 | mmap() system call |
| 12 | munmap() system call |
| 13 | mprotect() system call |
| 14 | mount() system call |
| 15 | execve() system call |
| 16 | brk() system call |
| 17 | kill() system call |
| 18 | getppid() system call |
| 19 | wait() system call |
| 20 | time() system call |
| 21 | gettimeofday() system call |
| 22 | reboot() system call |
| 23 | shutdown() system call |
| 24 | readv() system call |
| 25 | writev() system call |
| 26 | preadv() system call |
| 27 | pwritev() system call |