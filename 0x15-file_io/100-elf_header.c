#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>

#define BUF_SIZE 1024

void print_error_exit(int code, const char *message) {
    dprintf(STDERR_FILENO, "Error: %s\n", message);
    exit(code);
}

int main(int argc, char *argv[]) {
    if (argc != 3) {
        print_error_exit(97, "Usage: cp file_from file_to");
    }

    const char *file_from = argv[1];
    const char *file_to = argv[2];

    // Open the source file for reading
    int fd_from = open(file_from, O_RDONLY);
    if (fd_from == -1) {
        print_error_exit(98, "Can't read from file");
    }

    // Open the destination file for writing, create if it doesn't exist, truncate if it does
    int fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR | S_IRGRP | S_IROTH);
    if (fd_to == -1) {
        print_error_exit(99, "Can't write to file");
    }

    // Buffer for read/write operations
    char buffer[BUF_SIZE];
    ssize_t bytes_read, bytes_written;

    // Copy contents from source file to destination file
    while ((bytes_read = read(fd_from, buffer, BUF_SIZE)) > 0) {
        bytes_written = write(fd_to, buffer, bytes_read);
        if (bytes_written != bytes_read) {
            print_error_exit(99, "Can't write to file");
        }
    }

    // Error while reading from the source file
    if (bytes_read == -1) {
        print_error_exit(98, "Can't read from file");
    }

    // Close file descriptors
    if (close(fd_from) == -1) {
        print_error_exit(100, "Can't close fd");
    }
    if (close(fd_to) == -1) {
        print_error_exit(100, "Can't close fd");
    }

    return 0;
}
