import infosystems 

def main() :
    print("Enter a number:")
    No= int(input())

    result= infosystems.CheckEven(No)

    if(result==True) :
        print("Number is even...")
    
    else:
        print("Number is Odd...")

if __name__ == "__main__" :
    main()