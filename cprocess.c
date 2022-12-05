#include <stdio.h>
#include <stdlib.h>
#include "compiler.h"

struct compile_process* compile_process_create(const char* filename, const char* filename_out, int flags)
{
    FILE* file = fopen(filename, "r");
    if (file == NULL)
    {
        return NULL;
    }

    FILE* out_file = NULL;
    if (filename_out)
    {
        out_file = fopen(filename_out, "w");

        if (out_file == NULL)
        {
            return NULL;
        }
    }

    struct compile_process* process = calloc(1, sizeof(struct compile_process));
    process->flags = flags;
    process->cfile.file = file; 
    process->outfile = out_file;

    return process;
    
}