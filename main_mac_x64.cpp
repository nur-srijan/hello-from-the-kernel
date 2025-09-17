int main() {
    const char msg[] = "Hello World!\n";
    long ret;

    asm volatile (
        "movq $0x2000004, %%rax\n"   // syscall number for write
        "movq $1, %%rdi\n"           // file descriptor: stdout
        "movq %1, %%rsi\n"           // buffer address
        "movq %2, %%rdx\n"           // buffer length
        "syscall\n"
        "movq %%rax, %0\n"           // store return value
        : "=r"(ret)
        : "r"(msg), "r"(sizeof(msg) - 1)
        : "%rax", "%rdi", "%rsi", "%rdx"
    );

    return 0;
}