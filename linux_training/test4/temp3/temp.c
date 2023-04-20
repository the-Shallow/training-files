#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/mman.h>

int main() {
    int pageSize = 4096;
    void* memPtr;
    
  
    memPtr = mmap(NULL, pageSize, PROT_READ | PROT_WRITE, MAP_PRIVATE | MAP_ANONYMOUS, -1, 0);
    
    mlock(memPtr, pageSize);
   	
    memset(memPtr, 0, pageSize);
	printf("Memory Initialized with 0\n");
   munlock(memPtr, pageSize) ;
   munmap(memPtr, pageSize);
    
    return 0;
}

