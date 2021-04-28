#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/wait.h>
#include <sys/types.h>
#include <sys/shm.h>
#include <sys/mman.h>
#include <sys/stat.h>
#include <fcntl.h>

int main() {

    int i=0;
    int status;

    pid_t pid;

    const int SIZE=4096;
    const char *name = "keti_ex22";

    int shm_fd;
    int *shm_base;
    int *ptr;
    shm_fd = shm_open(name, O_CREAT | O_RDWR, 0666);
    ftruncate(shm_fd, SIZE);
    ptr = mmap(0, SIZE, PROT_WRITE, MAP_SHARED, shm_fd, 0);

    do {
        printf("Enter a positive integer: ");
        scanf("%d", &i);

    } while (i<=0);
    pid = fork();
	
    if (pid>0) {

        shm_base = mmap(0, SIZE, PROT_READ , MAP_SHARED, shm_fd, 0);
        if (shm_base == MAP_FAILED) {
            printf("Error. Mapping the shared memory segment ot the adress space of the parent failed.");
            exit(1);
        }
        pid=wait(&status);
        ptr=shm_base;
        i=*ptr; 

        while(i!=1) 
        {
		    printf("%d",i);
			printf(" ");
            ptr++; 
            i=*ptr; 
        }
        printf("%d",i); 

    } else {
        shm_base = mmap(0, SIZE, PROT_READ | PROT_WRITE, MAP_SHARED,shm_fd, 0);
         if (shm_base == MAP_FAILED) {
            printf("Error. Mapping the shared memory segment ot the adress space of the child failed.");
            exit(1);
        }
        int *ptr=shm_base; 
		
        while(i>1)
        {
            *ptr=i;
            if(i%2==1) {
            	  i=3*i+1;
			}else{
            	i=i/2;
			}
			
            ptr++;
        }
        *ptr=i; 
    }
	
    shm_unlink(name);
    return 0;

}
