#include <stdio.h>
#include <stdbool.h>

static int t = true;

int main()
{
    if (t){
        printf("on this line\n");
    } else {
        printf("but not here\n");
    }

    return 0;
}
