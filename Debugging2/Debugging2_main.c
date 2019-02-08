int main(void)
{

    unsigned int a = 0xffffffff;
    unsigned int b = 0xaaaaaaaa;

    unsigned char error = 0;
    unsigned int c = a * b;

    // We expect c to be more than a, so if it c is not more than a, we update error to indicate that.
    if (c<a)
        error = 1;

    while (1) {
    }
}

