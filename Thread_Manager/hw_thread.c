#include <stdio.h>
#include <unistd.h>
#include <sched.h>
#include <sys/mman.h>

#define STACK_SIZE 16384

void hw_thread_create();
void hw_thread_join();
void hw_thread_exit();

void* allocate_stack() {
    return mmap(NULL, STACK_SIZE, PROT_READ | PROT_WRITE, MAP_ANONYMOUS | MAP_PRIVATE, 0, 0);
}
