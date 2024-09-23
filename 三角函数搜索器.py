x = float(input('对边'))
y = float(input('邻边'))
z = float(input('斜边'))

if  x+y<z or x+z<y or  y+z<x:
    print('不是三角形')
else:
    Trigonometricfunction = str(input('输入三角函数名'))
    if Trigonometricfunction == 'sin':
        print(x/z)
    elif  Trigonometricfunction == 'cos':
        print(y/z)
    elif  Trigonometricfunction == 'tan':
        print(x/y)
    elif  Trigonometricfunction == 'cot':
        print(y/x)
    elif  Trigonometricfunction == 'sec':
        print(y/z)
    elif  Trigonometricfunction == 'csc':
        print(z/x)