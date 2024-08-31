def fun(No):
    sum=0

    for i in range(100000):
        sum=sum+(No*No)
    return sum

def main():
    print("Demonstration of serial execution using single core")

    Result=[]
    for no in range(10000):
        Result.append(fun(no))
    
    # print(Result)

if __name__ == "__main__":
    main()