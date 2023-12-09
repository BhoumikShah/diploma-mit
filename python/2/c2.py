# Input a number from the user
num = int(input("Enter a number: "))
reversed_num = 0
original_num = num
while num > 0:
    remainder = num % 10
    reversed_num = reversed_num * 10 + remainder
    num=num//10
print(f"The reverse of {original_num} is {reversed_num}.")
