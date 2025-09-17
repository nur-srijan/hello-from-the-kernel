int main() {
    const char msg[] = "Hello World!\n";
    register long x0 asm("x0") = 1;                    // stdout
    register const char* x1 asm("x1") = msg;           // buffer
    register long x2 asm("x2") = sizeof(msg) - 1;      // length
    register long x16 asm("x16") = 0x2000004;          // syscall number (write)

    asm volatile("svc #0x80" 
                 : 
                 : "r"(x0), "r"(x1), "r"(x2), "r"(x16) 
                 : "memory");

    return 0;
}