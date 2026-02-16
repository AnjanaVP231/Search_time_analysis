#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <sys/time.h>

int main() {

    srand(time(NULL));

    printf("\nInputSize\tTime(seconds)\n");

    for(int n = 10000; n <= 100000; n += 10000) {

        int *arr = (int*)malloc(n * sizeof(int));

        // Generate random numbers
        for(int i = 0; i < n; i++) {
            arr[i] = rand() % 100000;
        }

        int key = arr[rand() % n];

        struct timeval start, end;

        volatile int found = 0;

        gettimeofday(&start, NULL);

        // Repeat for measurable time
        for(int repeat = 0; repeat < 1000; repeat++) {

            for(int i = 0; i < n; i++) {
                if(arr[i] == key) {
                    found = 1;
                    break;
                }
            }

        }

        gettimeofday(&end, NULL);

        double time_taken =
            (end.tv_sec - start.tv_sec) +
            (end.tv_usec - start.tv_usec) / 1000000.0;

        printf("%d\t\t%.6f\n", n, time_taken);

        free(arr);
    }

    return 0;
}
