
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <assert.h>

#define SOMETHING
#include "../API/testing_directive.h"

int main(void){

    printf("Value of the output: %s\n", testOutput());

    return EXIT_SUCCESS;
}