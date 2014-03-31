#include<stdio.h>
#include<stdlib.h>
#include<stdarg.h>
#include<memory.h>
#include<setjmp.h>
#include<z3.h>

/**
   \brief Display Z3 version in the standard output.
*/
void display_version() 
{
    unsigned major, minor, build, revision;
    Z3_get_version(&major, &minor, &build, &revision);
    printf("Z3 %d.%d.%d.%d\n", major, minor, build, revision);
}
/*@}*/

int main() {
#ifdef LOG_Z3_CALLS
    Z3_open_log("z3.log");
#endif
    display_version();
    return 0;
}
