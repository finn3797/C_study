/*
 * @Author: Yuwei_Gou 379723586@qq.com
 * @Date: 2025-04-10 20:31:45
 * @LastEditors: Yuwei_Gou 379723586@qq.com
 * @LastEditTime: 2025-04-10 20:48:47
 * @FilePath: /C_study/code/class17/memory_model.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include <iostream>
#include <vector>


int main(){
    // 内存四区  这个过时啦
    // 代码区  .text .rodata
    // 全局区  .data .bss  //默认有2GB的内存
    // 堆区  向下增长
    // 栈区  向上增长    //8M左右


    // 自动生命周期   栈区
    // 动态生命周期   堆区
    // 静态生命周期  全局区  代码区
    

}