#include <stdio.h>

int main()
{
    printf("%s %s %s %d\n", __DATE__, __TIME__, __FUNCTION__, __LINE__);
    return 0;
}