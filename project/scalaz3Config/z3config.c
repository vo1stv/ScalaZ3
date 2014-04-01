#include<stdio.h>
#include<stdlib.h>
#include<stdarg.h>
#include<memory.h>
#include<setjmp.h>
#include<z3_Z3Wrapper.h>

int main() {
    jlong configPtr=Java_z3_Z3Wrapper_mkConfig (NULL, 0);
	Java_z3_Z3Wrapper_delConfig (NULL, 0, configPtr);
    printf("Created and deleted configuration pointer %lx\n", configPtr);

    return 0;
}
