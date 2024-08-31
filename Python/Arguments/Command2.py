import sys

def main():
    print("This is the demonstration if addition using command line argv:")

    Value1=int(sys.argv[1])
    Value2=int(sys.argv[2])

    addition= Value1+Value2

    print("Addition is:",addition)


if __name__ == "__main__":
    main()

