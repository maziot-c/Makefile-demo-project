#include "hello.h"
#include <stdio.h>

void hello(void)
{
    printf("%s %s %s %d\n", __DATE__, __TIME__, __FUNCTION__, __LINE__);
}
