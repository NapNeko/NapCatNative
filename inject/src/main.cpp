#include <tuple>
#include "hook.win.h"

/**
 * 用于替换WinMain的函数
 * @note 仅限Win平台
 * @author: Mlikiowa
 * @param {void}
 * @return {int}
 *
 */
extern "C" int NapCat_Main()
{
    return 0;
}
/**
 * 用于重定向命令行输入输出
 * @note 仅限Win平台
 * @author: Mlikiowa
 * @param {void}
 * @return {int}
 *
 */
extern "C" int ReStudio()
{
    return 0;
}

void LoadSymFunc()
{
    using FuncType = int (*)(int);
    FuncType func = nullptr;
    bool success = false;
    std::tie(success, func) = GetAddressBySymbol<FuncType>(
        "?CreateEnvironment@node@@YAPEAVEnvironment@1@PEAVIsolateData@1@V?$Local@VContext@v8@@@v8@@AEBV?$vector@V?$basic_string@DU?$char_traits@D@__Cr@std@@"
        "V?$allocator@D@23@@__Cr@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@__Cr@std@@V?$allocator@D@23@@__Cr@std@@@23@@__Cr@std@@2W4Flags@Environme"
        "ntFlags@1@UThreadId@1@V?$unique_ptr@UInspectorParentHandle@node@@U?$default_delete@UInspectorParentHandle@node@@@__Cr@std@@@78@@Z");
    if(success){
        //保存起来
    }
}