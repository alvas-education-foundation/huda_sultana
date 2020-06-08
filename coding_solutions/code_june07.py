#find factors of a number

def print_factors(num):
	print("The factors of",num,"are:")
	for i in range(1,num+1):
		if num%i == 0:
			print(i)
num=input(int("Enter a number greater than 0"))

print_factors(num)