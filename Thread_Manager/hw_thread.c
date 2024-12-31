#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sched.h>
#include <sys/mman.h>
#include <setjmp.h>

#define STACK_SIZE 16384

typedef struct hw_thread {
    int id;
    uint stack_size;
    void* stack;
    jmp_buf checkpoint;
} hw_thread_t;

void* allocate_stack() {
    return mmap(NULL, STACK_SIZE, PROT_READ | PROT_WRITE, MAP_ANONYMOUS | MAP_PRIVATE, 0, 0);
}

void free_stack(void* stack, size_t size) {
    munmap(stack, size);
}

void hw_thread_create(void (* func_ptr)(void*)) {
    hw_thread_t* thread_ptr = malloc(sizeof(hw_thread_t));

}

void hw_thread_exit(hw_thread_t* thread_ptr) {
    free_stack(thread_ptr->stack, STACK_SIZE);
    free(thread_ptr);
}

