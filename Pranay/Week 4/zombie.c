/* Author: K. Karthik
   Email id: karthikk_cse@cbit.ac.in
   
   Aim: Demostration of fork() system call and also generates defunt process called zombee process.
   
   Desription: This  program is used to demonstrate zombee process. 

*/
   

#include <stdlib.h>
#include <sys/types.h>
#include  <sys/wait.h>
#include  <unistd.h>
#include  <stdio.h>


int main()
{
pid_t pid;
char *message;
int n;
int exit_code;
printf("fork program starting\n");
pid = fork();
switch(pid)
{
case -1:
    perror("fork failed");
    exit(1);
case 0:
     message = "This is the child";
     n = 3;
     exit_code = 37;
break;
default:
     message = "This is the parent";
     n = 5;
     exit_code = 0;
break;
}
for(; n > 0; n--) {
puts(message);
sleep(1);
}

}
