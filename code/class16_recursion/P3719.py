def f(count):
    for each in a:
        if (each == '('):
            count += f(0)
        if (each == ')'):
            return count
        if (each == '|'):
            return max(count, f(0))
        if (each == 'a'):
            count += 1
    return count
            

a = iter(input())
print(f(0))