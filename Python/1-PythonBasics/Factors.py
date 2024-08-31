def Factors(Value):
    for i in range(2,Value,1):
        if(Value%i == 0):
            print(i)


def main() :
    print("Enter a number:")
    No=int(input())

    print("Factors are:")
    Factors(No)

if __name__ == "__main__" :
    main()