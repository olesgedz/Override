#include <iostream>

int main(int a, char **v)
{
    if (a != 2)
        return 0;

    size_t sVar1 = std::strlen(v[1]);

    int pass = ((int)v[1][3] ^ 0x1337U) + 0x5eeded;

    for (int i = 0; i < (int)sVar1; i++) {
        if (v[1][i] < ' ') {
            return 1;
        }
        pass = pass + ((int)v[1][i] ^ pass) % 0x539;
    }

    std::cout << pass << std::endl;
}