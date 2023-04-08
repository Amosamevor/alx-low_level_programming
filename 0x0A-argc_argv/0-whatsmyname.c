#include <stdio.h>
#include <string.h>

int main(int argc __attribute__((unused)), char *argv[])
{
char *program_name = strrchr(argv[0], '/');
if (program_name == NULL)
{
program_name = argv[0];
}
else
{
program_name++;
}
printf("%s\n", program_name);
return 0;
}
