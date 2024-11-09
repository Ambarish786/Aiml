###############  When a function class itself ###################
# def show(n):
#     if(n == 0):
#         return
#     print(n)
#     show(n - 1)
# show(5)

# def factorial(x):
#     if( x == 0 or x == 1):
#             return 1
#     return x * factorial(x-1)
     
# print(factorial(5))

# def sumN(n):
#     if( n == 0):
#         return 0
#     return n + sumN(n-1)

# sum = sumN(10)
# print(sum)

def printlist(list,idx=0):
    if(idx == len(list)):
        return 0
    print(list[idx])
    printlist(list, idx + 1)

a = [2,3,4,62,4,5,34]
print(printlist(a))