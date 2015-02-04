#include <stdio.h>
#include <pthread.h>

#define NUM_THREADS 8

void *
thread_report(void *s)
{
  int *arg = s;
  sleep(1);
  printf("Address of argument: %x\n", arg);
  printf("Value of argument: %i\n", *arg);
}

int
main(int argc, char **argv)
{
  int i, j;
  pthread_t threads[NUM_THREADS];
  int thread_arguments[NUM_THREADS];

  /* fork */
  for (i = 0; i < NUM_THREADS; ++i) {
    thread_arguments[i] = i;
    pthread_create(&threads[i], NULL, thread_report, &thread_arguments[i]); 
  }

  /* join */
  for (j = 0; j < NUM_THREADS; ++j) {
    pthread_join(threads[j], NULL);
  }
  pthread_exit(NULL);
}
