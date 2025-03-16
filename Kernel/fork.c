#include <stdio.h>
#include <unistd.h>

int main(int argc, char ** argv) 
{
    pid_t pid = fork(); // Creates new PCB and Address Space
    if(pid == 0) 
    {
        //Child Process
    }
    else if(pid > 0) 
    {
        // parent process 
    } 
    else 
    {
        //fork failed 
        printf("fork() failed!\n");
        return 1;
    }
}