#! 54 55 55.6 54.6 57.8 
import math

inputStockPrice =input("What is the current stock price at? ")

listOfInput = inputStockPrice.split()

print(listOfInput)

iterateList = [float(i) for i in listOfInput]

print(iterateList)

def maxPrice():
    biggest_number = max(iterateList)
    print(f"The biggest number in the list is: {biggest_number}")
    return biggest_number


maxPrice()
