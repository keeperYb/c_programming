#include <unistd.h>

#define BUFSIZ 0xff

/* read from stdin, write to stdout		*/
int main()
{
	char buf[BUFSIZ];
	int n;

	while((n = read(0, buf, BUFSIZ)) > 0){
		write(1, buf, n);
	}
	return 0;
}
