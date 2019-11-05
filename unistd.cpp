#include <unistd.h>

int main() {
execlp("echo", "echo", "TEST", NULL);

}