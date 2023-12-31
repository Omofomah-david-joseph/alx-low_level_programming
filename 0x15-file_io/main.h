#ifndef _MAIN_H
#define _MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

int append_text_to_file(const char *filename, char *text_content);
int main(int argc, char *argv[]);
void error_file(int file_from, int file_to, char *argv[]);
int create_file(const char *filename, char *text_content);
ssize_t read_textfile(const char *filename, size_t letters);


#endif /* _MAIN_H*/
