#include <stdio.h>

void usage (const char* cmd)
{
	printf("usage : %s [STRING]...\n", cmd);
}

int main (int argc, char** argv)
{
	int i = 0;

	if (argc == 1) {
		usage(argv[0]);
		return 0;
	}

	for (i = 1; i < argc; i++) {
		printf("%s%s", argv[i], (argc-i) > 0 ? " " : "");
	}
	printf("\n");

	return 0;
}
