'''
Author: Yuwei_Gou 379723586@qq.com
Date: 2025-04-10 12:34:19
LastEditors: Yuwei_Gou 379723586@qq.com
LastEditTime: 2025-04-10 15:54:00
FilePath: /C_study/code/class16_recursion/P3719.py
Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
'''
def p(j):
    for each in a:
        if (each == '('):
            j = j + p(0)
        if (each == ')'):
            return j
        if (each == '|'):
            return max(j, p(0))
        if (each == 'a'):
            j += 1
    return j
            

a = iter(input())
print(p(0))