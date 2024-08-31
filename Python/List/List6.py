def main():
    print("Enter number of elements:")
    length=int(input())

    Arr= list()

    print("Enter the elements:")
    for i in range(length):
        value=int(input())
        Arr.append(value)

    print("Elements of the list are:")
    for i in range(len(Arr)):
        print(Arr[i])


if __name__ == "__main__":
    main()