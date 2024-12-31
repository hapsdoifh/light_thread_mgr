//
// Created by harry on 12/31/24.
//

#ifndef HW_THREAD_H
#define HW_THREAD_H

#endif //HW_THREAD_H


void hw_thread_create(void (* func_ptr)(void*));
void* allocate_stack();
void free_stack();
void hw_thread_join();
void hw_thread_exit();