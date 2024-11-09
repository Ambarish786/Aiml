######### Functions : block of code that performs task
# def Sum(a,b):
#     return a+b
#                               >-------------- Sum of 2 numbers
# sum = Sum(45352,43746)
# print(sum)

# def avg(a,b,c):
#     return (a+b+c) / 3
#                               >------------- Avg of 3 numbers
# avg = avg(1,2,3)
# print(avg)

#       Default paramatres
# def mul(a = 1,b = 1):
#     return a*b

# x = mul()
# print(x)

# def length(x):
#     return len(x)

# a = ["she" ,"hi" , "hello"]
# x = length(a)
# print(x)/

# def print_item(list):
#     for i in list:
#      print(i, end = " ")

# a = ["qwd" , "w MDFNEQD","SDSSD"]
# print_item(a)

# def fact(x):
#     fact = 1
#     for i in range(1,x+1):
#         fact *= i
#         print(fact)

# fact(5)

# def Convert(u):
#     r = 83 * u
#     print(r)

# Convert(100)

def num(a):
    if(a % 2 == 0):
        print("Even")
    else:
        print("Odd")
x = int(input("Enter a number"))
num(x)