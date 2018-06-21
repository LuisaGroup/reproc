#include <process.h>
#include <stdio.h>

int main(int argc, char *argv[])
{
  Process process = process_alloc();

  char *args[3] = { "echo", "working", 0 };
  char buffer[1000];
  uint32_t actual;

  PROCESS_ERROR error = process_init(process);
  error = error ? error : process_start(process, 2, args);
  error = error ? error : process_read(process, buffer, 10, &actual);
  buffer[actual] = '\0';
  printf("%s\n", buffer);

  error = error ? error : process_terminate(process, 1000);
  error = error ? error : process_free(process);

  return error;
}