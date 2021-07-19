'''
Write a program which accept one number from user and print that number of
even numbers on screen.
'''

def PrintEven(iNo):

    if iNo < 0:
        iNo = -iNo
    
    for x in range(1,iNo+1):
        print(x*2,end="\t")
    print()


if __name__ == "__main__":
    iValue = int(input("Enter Number\n"))

    PrintEven(iValue)