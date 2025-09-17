extern "C" long syscall(long number, long arg1, long arg2, long arg3);

int main()
{
    const char msg[] = "Hello World!\n";
    syscall(1, 1, (long)msg, sizeof(msg) - 1);
    return 0;
}