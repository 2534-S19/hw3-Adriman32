#define ARRAY_SIZE 5
int main(void)
{

    unsigned int i = ARRAY_SIZE -1;
    unsigned int source[ARRAY_SIZE] = {1, 2, 3, 4, 5};
    unsigned int destination[ARRAY_SIZE];

    // done is a flag we are using to represent the completion of the copying of the array
    unsigned int done = 0;
    while (i>=0) {
        destination[i] = source[ARRAY_SIZE-i-1];
        i--;
    }

    done = 1;
    while (1) {
    }
}

