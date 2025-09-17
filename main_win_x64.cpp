extern "C" __declspec(dllimport) void* __stdcall GetStdHandle(unsigned long);
extern "C" __declspec(dllimport) bool   __stdcall WriteFile(
    void*    hFile,
    const void* lpBuffer,
    unsigned long nNumberOfBytesToWrite,
    unsigned long* lpNumberOfBytesWritten,
    void*    lpOverlapped
);

#define STD_OUTPUT_HANDLE ((unsigned long)-11)

int main()
{
    void* handle = GetStdHandle(STD_OUTPUT_HANDLE);
    const char msg[] = "Hello World!";
    unsigned long written;
    WriteFile(handle, msg, sizeof(msg) - 1, &written, nullptr);
    return 0;
}