#include <unistd.h>
#include <stdio.h>

int main(){
    int a = 20;
    int pid = fork();
    if (pid == 0){
        printf("soy el proceso hijo a = %d\n",a);
        sleep(20);
        return 0;
    }
    printf("soy el proceso padre a = %d\n",a);
    printf("mi hijo es pid = %d\n",pid);
    sleep(20);

    return 0;
}
