#include <windows.h>

void my_putchar(char c)
{
    DWORD written;
    HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
    WriteFile(h, &c, 1, &written, NULL);
}