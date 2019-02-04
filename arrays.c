#include <stdio.h>
#define SIZE 5 //max size of array
#define FREQUENCY_SIZE 11
#define RESPONSES_SIZE 40
int main(void)
{
    int s[SIZE];
    int frequency[FREQUENCY_SIZE] = {0};

    int responses[RESPONSES_SIZE] = {};

    for (size_t answer = 0; answer < RESPONSES_SIZE; ++answer)
    {
        ++frequency[responses[answer]];
    }
    /*for (size_t j = 0; j < SIZE; ++j)
    {
        s[j] = 2 + 2 * j;
    }

    printf("%s$13s\n", "Element", "Value");

    for (size_t j = 0; j< SIZE; ++j);
    {
        printf("%7u%13d\n", j, s[j]);
    }*/
}