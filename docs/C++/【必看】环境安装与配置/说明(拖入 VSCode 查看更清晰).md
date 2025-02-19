`  撇号包含的内容是代码或指令，复制时不要将撇号复制进去  `

# 编辑器 【参考课程 1.2】
## VSCode 官网: 
[https://code.visualstudio.com/]

## VSCode 插件：
Chinese: 中文包
C/C++: c++ 智能提示
FiraCode font: 字体
One Monokai Theme: 主题配色
vscode-luogu: 洛谷平台

# 编译器【参考课程 1.3】
## windows 安装 gcc
### MSYS2 官网 下载 msys2
[https://www.msys2.org/]
### 在 msys2 中下载 gcc:
`  pacman -S mingw-w64-ucrt-x86_64-gcc  `
### 修改环境变量:
1. 按一下 win 或点击开始按钮
2. 输入 env，搜索「编辑系统环境变量」
3. 点击「环境变量」
4. 找到「path」，双击或选中后点编辑按钮
5. 点击「新建」按钮，粘贴 c++ 编译器的安装目录
> 注意，是 c++ 编译器所在文件夹的路径，而不是 c++ 编译器的路径，类似这个：
> C:\msys64\ucrt64\bin
6. 一路确定
7. VSCode 需要重新启动来应用新的环境变量

## maxOS 安装 gcc
先在终端通过这条语句安装 homebrew
`  /bin/bash -c "$(curl -fsSL https://raw.githubusercontent.com/Homebrew/install/HEAD/install.sh)"  `
再通过 homebrew 直接安装 gc
`  brew install gcc   `

## ubuntu 安装 gcc
直接执行这条语句即可
`  sudo apt install gcc  `

## 查看版本以检查 gcc 是否安装成功
`  c++ --version  `
> 如果错误提示： 无法将“c++”项识别为 cmdlet...
> 说明环境变量没有配置对，请重新检查

## 编译指令
详细版
`  c++ test.cpp -o test -O2 --std=c++20 -Wall  `
简单版(简单版会默认生成的文件名为 a.exe 或 a.out 的可执行程序)
`  c++ test.cpp  `

> 如果错误提示： Fatal error: can't create C:\Users\
> 大概率原因是你电脑的用户名是中文导致的
> 这时候就需要在【环境变量】(和修改 PATH 的步骤类似)中找到 TEMP 和 TMP，将它修改为没有中文目录的路径
> 上方【xxx的用户变量】和下方【系统变量】都需要修改
> 可以在 C 盘中新建一个 temp 文件夹，然后将 TEMP 和 TMP 设置为 C:\temp

> 修改完如果又提示了“无法将c++项识别为 cmdlet”
> 可能需要重新修改之前配置的 path，可以删除后再添加

## 运行指令
`  ./test  `
或
`  ./test.exe  `

# 编译运行脚本 【参考课程 1.4】
## windows
cr.ps1 保存到某个目录
将目录地址添加到环境变量
【以管理员身份】运行 powershell
> 特别注意，不要选择 x86 版本的 powershell
输入下方指令，按一下字母 Y 后回车
`  Set-ExecutionPolicy RemoteSigned  `
完成后在 VSCode 中输入下面的 Get 命令，应该就变成了 RemoteSigned
`  Get-ExecutionPolicy  `
> 如果不生效，请检查 powershell 是否错误的选择了 x86 版本，因为 VSCode 默认对应的是非 x86 的环境
> 如果上述都没问题，执行 cr 时依然提示“无法加载文件... 数字签名 ... 无法运行该脚本”
> 需要右键 cr.ps1 文件，属性里的最下面，勾选上【解除锁定】


## 类 unix 配置（macOS, ubuntu, linux ...）
### 方法一
在命令行中进入 cr.sh 所在目录
执行下条语句修改文件的可执行权限
`  chmod +x cr.sh  `
然后执行下条语句将文件复制到系统可执行路径中，需要输入密码
`  sudo cp cr.sh /usr/local/bin/cr  `
### 方法二
将 cr.sh 保存到某个目录，整个路径上最好不要有空格（不然下面配置 alias 配置的时候，需要在空格前加上一个 \ 来进行转移）
在 vscode 中打开终端
执行下面语句会列出用户目录下的所有文件
`  ls -la ~  `
按住 command 点击 `.zshrc` 或 `.bashrc` 文件，可以在 vscode 中直接打开
在打开的文件中添加这句话
`  alias cr="sh {替换为你的 cr.sh 所存放目录}/cr.sh"  `
保存后重启终端就可以使用

# vscode 的其他配置
ctrl + ` 打开设置，搜索下方的这些英文就可直接定位到相关配置
也可以参考视频中用简单的关键词搜索后，再肉眼分辨
## editor.tabSize 【缩进配置，参考课程 1.2】
改成 2, 控制缩进的空格数

## luogu.alwaysUseDefaultLanguageVersion 【洛谷插件，参考课程 1.5】
勾选，自动选择语言和题目

## luogu.guessProblemID 【洛谷插件，参考课程 1.5】
勾选，根据文件名自动猜测题目 ID

## luogu.defaultLanguageVersion 【洛谷插件，参考课程 1.5】
设置 "C++": "C++20 with O2" 默认语言版本

## C_Cpp.default.cppStandard 【c++ 插件，参考课程 2.5】
改成 gnu++20, 智能提示的版本
