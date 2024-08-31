

def Display():
    i=0
    print("Inside Display")
    i+=1
    Display()

def main():
    Display()

if __name__ == "__main__":
    main()