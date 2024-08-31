import multiprocessing
def main():
    print("Number of processes are: ",multiprocessing.cpu_count())

if __name__ == "__main__":
    main()