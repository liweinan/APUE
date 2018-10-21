#include <stdio.h>
#include <sys/stat.h>
#include <time.h>
#include<string.h>
int main(int argc, char *argv[]){

struct stat buf;
char mytime[100];



stat("myfile.txt",&buf);

printf("st_mode = %o\n",buf.st_mode);

strcpy(mytime,ctime(&buf.st_mtime));

printf("st_mtime = %s\n",mytime);






return 0;
}	
