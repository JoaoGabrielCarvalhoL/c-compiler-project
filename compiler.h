#ifndef COMPILERPROJECT_H
#define COMPILERPROJECT_H
#include <stdio.h>


enum 
{
    COMPILER_FILE_COMPILED_OK,
    COMPILER_FAILED_WITH_ERRORS
};

struct compile_process 
{
    int flags;

    struct compile_process_input_file 
    {
        FILE* file;
        const char* absolute_path;

    } cfile;

    FILE* outfile;
};

int compile_file(const char* filename, const char* out_filename, int flags);

struct compile_process* compile_process_create(const char* filename, const char* filename_out, int flags);


#endif



