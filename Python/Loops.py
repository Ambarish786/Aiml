## Loops are used to repeat instructions
#>---------WHILE LOOP----------<
# i = 1
# while (i<=5):
#     print("Hi")
#     i += 1
#############Print 1 - 100
# i = 1
# while(i <= 100):
#     print(i)
#     i += 1
###########Print 100 -1
# i = 100
# while(i >=0):
#     print(i)
#     i -=1
#######################Multipication table 
# a = int(input("Enter a number:"))
# i = 1
# while(i<=10):
#     print( a*i)
#     i +=1
# ###################Sum of numbers
# n = int (input("Enter a number"))
# i = 1
# sum =0
# while(i<=n):
#     sum += i
#     i +=1
# print(sum)
# #>-------------FOR LOOP-----------<
# a = (1,3,2,4,55,4,22,1)
# for i in a:
#     print(i)
# a = (1,23,12,4,5,5,462,3125,5,2)
# x= int(input("Enter number:"))
# for i in a:
#     if(i == x):
#         print("Element found at %d",i)
#         i +=1
#     else:
#         print("Element not found")
###########Factorial
x = int(input("Enter a number:"))
fact = 1
for i in range(1,x+1):
    fact *= i
    i += 1
print(fact)
#>-----------RANGE-----------------<
# for i in range(6):
# #     print(i)
# # # for i in range(2,7):
# # #     print(i)
# # for i in range(1,9,2):
# #     print(i)
# ##########Print even using range
# # for i in range(0,100,2):
# #     print(i)
# ############table
# a = int(input("Enter a number"))
# for i in range(1,11):
#     print(a*i)