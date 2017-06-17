#include "apue.h"
#include <sys/wait.h>

int main(void) {
    char buf[MAXLINE];
    pid_t pid;
    int status;

    printf("%% ");
    while(fgets(buf, MAXLINE, stdin) != NULL) {
        int last = strlen(buf) - 1;
        if (buf[last] == '\n')
            buf[last] = 0; //replace newline with null

        if ((pid = fork()) < 0) {
            err_sys("fork error");
        } else if (pid == 0) { // child
            execlp(buf, buf, (char *)0); // from unistd.h
            err_ret("couldn't execute: %s", buf);
            exit(127);
        }

        // parent
        if ((pid = waitpid(pid, &status, 0)) < 0)
            err_sys("waitpid error");
        printf("%% ");
    }
    exit(0);
}
