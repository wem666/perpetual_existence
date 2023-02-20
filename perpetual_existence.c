#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(int argc, char *argv[]) {
    // code here

    system("clear"); // clear the screen
    
    printf("I'm a self-destructing program. Yes, the irony is not lost on me.\r");
    fflush(stdout); // force output to be displayed immediately
    
    // delay for 2 seconds
    sleep(2);
    
    // clear the first message by overwriting it with spaces
    printf("                                                      \r");
    
    // get the name of the executable file
    char *filename = argv[0];
    
    // delete the file
    if (remove(filename) == 0) {
        printf("%s deleted successfully. It's a tough world out there, even for programs. But hey, at least I went out with a bang!\n", filename);
    } else {
        printf("Failed to delete %s. Looks like I'm going down with the ship. Oh well, it was fun while it lasted!\n", filename);
    }

    return 0;
}
