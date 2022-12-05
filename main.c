#include <stdio.h>
#include "helpers/vector.h"
#include "compiler.h"

int main()
{

    int code_response = compile_file("./test.c", "./test", 0);

    if (code_response == COMPILER_FILE_COMPILED_OK)
    {
        printf("everything compiled\n");
    }

    else if (code_response == COMPILER_FAILED_WITH_ERRORS)
    {
        printf("Compile failed\n");
    }
    else
    {
        printf("Unknown resposne for compile file\n");
    }

    return 0;
}