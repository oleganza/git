#include "cache.h"

int main(int argc, char **argv)
{
	if (argc == 3 && !strcmp(argv[1], "normalize_absolute_path")) {
		char *buf = xmalloc(strlen(argv[2])+1);
		int rv = normalize_absolute_path(buf, argv[2]);
		assert(strlen(buf) == rv);
		puts(buf);
	}

	if (argc >= 2 && !strcmp(argv[1], "make_absolute_path")) {
		while (argc > 2) {
			puts(make_absolute_path(argv[2]));
			argc--;
			argv++;
		}
	}

	return 0;
}
