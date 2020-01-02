#include "demo.h"

int get_value(void)
{
    static int i=0;

    return i++;
}
