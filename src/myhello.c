#include <stdio.h>
#include <string.h>

void print_help(const char *program_name)
{
    printf("Usage: %s [OPTIONS]\n", program_name);
    printf("\n");
    printf("A simple Week 1 CLI tool.\n");
    printf("\n");
    printf("Options:\n");
    printf("  -h, --help        Show this help message\n");
    printf("  -n, --name NAME   Print a greeting for NAME\n");
}

int main(int argc, char *argv[])
{
    if (argc == 1) {
        printf("Hello from AiShell!\n");
        return 0;
    }

    if (strcmp(argv[1], "-h") == 0 ||
        strcmp(argv[1], "--help") == 0) {
        print_help(argv[0]);
        return 0;
    }

    if ((strcmp(argv[1], "-n") == 0 ||
         strcmp(argv[1], "--name") == 0)) {

        if (argc < 3) {
            fprintf(stderr, "Error: missing name.\n");
            fprintf(stderr, "Try '%s --help' for usage.\n", argv[0]);
            return 1;
        }

        printf("Hello, %s!\n", argv[2]);
        return 0;
    }

    fprintf(stderr, "Error: unknown option '%s'.\n", argv[1]);
    fprintf(stderr, "Try '%s --help' for usage.\n", argv[0]);
    return 1;
}