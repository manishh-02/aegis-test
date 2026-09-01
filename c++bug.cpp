// main.cpp
#include <cstring>

int main() {
    char src[] = "This string is too long";
    char dest[5];

    strncpy(dest, src, sizeof(dest) - 1);
    dest[sizeof(dest) - 1] = '\0';

    int* arr = new int[5];
    for (int i = 0; i <= 5; i++) {
        arr[i] = i;      // out-of-bounds
    }

    delete[] arr;
    return 0;
}
