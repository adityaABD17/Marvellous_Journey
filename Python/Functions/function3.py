#function accepts more parameter and returns nothing
def Marvellous(Name,Age,City):
    print("Inside marvellous function...")
    print("welcome , ",Name)
    print("Age:",Age)
    print("City:",City)


def main():
    Marvellous("Amit",28,"Pune")
    Marvellous(City="Mumbai",Age=28,Name="Sagar")

if __name__ == "__main__":
    main()