#include <stdio.h>
#include "log.h"

int main(void)
{
    log_trace("This is message log trace"); 
    log_debug("This is message log debug"); 
    log_info("This is message log info"); 
    log_warn("This is message log warn");
    log_error("This is message log error"); 
    log_fatal("This is message log fatal");

    return 0;
}