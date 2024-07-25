#include <Windows.h>
#include <tuple>
#include "hook.win.h"

void InlineHookAmd64::HookFuncHead(void *origin, void *targe)
{
    // 48 B8 00 00 00 00 00 00 00 00 mov rax, 0x0000000000000000 10 bytes
    // FF E0 jmp rax 2 bytes
    return;
}
void InlineHookAmd64::HookFuncCall(void *origin, void *target)
{
    // E8 XX XX XX XX call xxxxxxxx 5 bytes
    return;
}
void InlineHookAmd64::SearchWhiteSpace()
{
    // 搜索空间空闲地址
}
void InlineHookAmd64::FixBigJmp()
{
    // 尝试解析汇编 拷贝12字节以上到新地址 拷贝完成后在原始插入12字节跳转到新地址 新地址增加回跳代码
}
void InlineHookAmd64::ParseCall(void *e8_ptr)
{
}

void Util::GetCurrentProgramMainAddress()
{
    // 获取当前程序入口地址
    // GetModuleHandle(NULL);
}

template <typename T>
std::tuple<boolean, T> GetAddressBySymbol(const char *symbol)
{
    FARPROC func_ptr = GetProcAddress(GetModuleHandle(NULL), symbol);
    return std::make_tuple(func_ptr != NULL, reinterpret_cast<T>(func_ptr));
}