#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>
int main(int argc, char *argv[])
{

int fd;
int ret;
int a[10]={1,2,3,4,5,6,7,8,9,10};
int b;

fd = open("outfile",0_CREAT|0_APPEND|O_RDWR, 0600);
if (fd<0)
{
perror("open");
exit(1);
}

/* write something */
ret = write(fd, (void*) a, sizeof(a));

if (fd<0)
{
perror("write");
close(fd);
exit(1);
}



/*seek using lseek */
ret = lseek(fd,3*sizeof(int),SEEK_SET);

if(fd<0)
{

perror("lseek");
close(fd);
exit(1);
}
	

/*read from that position */
ret = read(fd,&b,sizeof(int));

if(fd<0)
{
perror("read");
close(fd);
exit(1);

}


printf("b=%d\n",b);
close(fd);
/*read from that position by lseek*/




close(fd);

return 0;
































}
