# Inject
## AsElectronNoGui(Way05)
### For Window
1. WinMain ->>> NapCat WinMain (Hook Inline程序入口到NapCat)
2. ReStudio (重定向输入输出)
3. Search Symbol (开始搜索符号表 获取PTR)
4. Internal Function Offset (计算与搜索内部函数地址)
5. Init Node Instance (初始化Node进程 开启事件循环)
