def factors2(Value):
    i=2

    while(i<Value):
        if(Value % i == 0):
            print(i)
            
        i+=1



def main():
    print("Enter a number:")
    No= int(input())

    print("Factors are:")
    factors2(No)

if __name__ == "__main__":
    main()