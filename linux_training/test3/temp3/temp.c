#include <stdio.h>
#include <stdlib.h>
#include <signal.h>

void sigint_handler(int signo) {
    printf("Received SIGINT signal\n");
}

int main() {
    struct sigaction sa;

    
    sa.sa_handler = sigint_handler;
    sigemptyset(&sa.sa_mask);
    sa.sa_flags = 0;

 
    if (sigaction(SIGINT, &sa, NULL) == -1) {
        perror("sigaction");
        exit(1);
    }

    printf("Signal handler for SIGINT installed.\n");

    
    while (1) {
    }

    return 0;
}


