#include <stdio.h>
#include <stdlib.h>
#include <termios.h>

#define STDIN_FILENO 1

int main(void) {
    struct termios attribs;
    speed_t speed;

    if(tcgetattr(STDIN_FILENO, &attribs) < 0) {
        perror("stdin");
        return EXIT_FAILURE;
    }

    if(cfsetispeed(&attribs, B9600) < 0)
    {
        perror("invalid baud rate");
        return EXIT_FAILURE;
    }

     /*
     * Apply the settings.
     */
    if(tcsetattr(STDIN_FILENO, TCSANOW, &attribs) < 0)
    {
        perror("stdin");
        return EXIT_FAILURE;
    }

    speed = cfgetispeed(&attribs);
    printf("input speed: %lu\n", (unsigned long) speed);

    return EXIT_SUCCESS;
}
