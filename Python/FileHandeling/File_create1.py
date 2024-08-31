import os.path

def main():
    print("Enter the name of file that you want to create : ")
    File_name = input()

    if(os.path.exists(File_name)):
        print("File named -{}- already exists, can't create with that name...".format(File_name))
    else:
        fobj = open(File_name, "x")
    

if __name__ == "__main__":
    main()