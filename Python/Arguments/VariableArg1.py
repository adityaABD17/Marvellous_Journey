def Display(*Values):
    for i in range(len(Values)):
        print(Values[i],end=" ")

def main():
    print("Demonstration of Variable arguments")

    Display(10,20,30,40,50,60)
    Display(11,21,51)
   
if __name__ == "__main__":
    main()