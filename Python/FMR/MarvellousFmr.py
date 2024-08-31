def FilterX(Task,Elements):
    Result=[]
    for No in Elements:
        if (Task(No)==True):
            Result.append(No)
    return Result

def mapX(Task,elements):
    Result=[]
    for No in elements:
        Ret=Task(No)
        Result.append(Ret)
    return Result

def reduceX(Task,Elements):
    Sum=0
    for no in Elements:
        Sum=Sum+Task(Sum,no)
    return Sum
    