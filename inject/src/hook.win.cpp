namespace InlineHookAmd64
{
    /**
     * 用于InlineHook 直接对函数头部进行破坏 替换为Call或者Jmp 无法还原!
     * @param {void*} origin 原始地址
     * @param {void*} target 钩子地址
     */
    void HookFuncHead(void *origin, void *targe)
    {
        // 48 B8 00 00 00 00 00 00 00 00 mov rax, 0x0000000000000000 10 bytes
        // FF E0 jmp rax 2 bytes
        return;
    }
    /**
     * 用于InlineHook 替换E8(Call) 跳转地址为 钩子地址
     * @param {void*} origin 原始地址
     * @param {void*} target 钩子地址
     */
    void HookFuncCall(void *origin, void *target)
    {
        // E8 XX XX XX XX call xxxxxxxx 5 bytes
        return;
    }
    void SearchWhiteSpace() {
        //搜索空间空闲地址
    }
    void FixBigJmp(){
        // 尝试解析汇编 拷贝12字节以上到新地址 拷贝完成后在原始插入12字节跳转到新地址 新地址增加回跳代码
    }
    void
}