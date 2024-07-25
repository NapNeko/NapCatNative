#include <Windows.h>
#include <tuple>

namespace InlineHookAmd64
{
    /**
     * 用于InlineHook 直接对函数头部进行破坏 替换为Call或者Jmp 无法还原!
     * @param {void*} origin 原始地址
     * @param {void*} target 钩子地址
     */
    void HookFuncHead(void *origin, void *targe);
    /**
     * 用于InlineHook 替换E8(Call) 跳转地址为 钩子地址
     * @param {void*} origin 原始地址
     * @param {void*} target 钩子地址
     */
    void HookFuncCall(void *origin, void *target);
    void SearchWhiteSpace();
    void FixBigJmp();
    void ParseCall(void *e8_ptr);
}
namespace Util
{
    void GetCurrentProgramMainAddress();
}
// template <typename T>
// std::tuple<bool, T> GetAddressBySymbol(const char *symbol);