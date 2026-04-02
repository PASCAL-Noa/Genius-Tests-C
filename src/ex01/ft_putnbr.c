#ifdef _WIN32
#include <io.h>
#define write _write
#else
#include <unistd.h>
#endif

int main(void)
{
	return 0;
}