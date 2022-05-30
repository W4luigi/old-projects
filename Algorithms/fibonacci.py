iterations = int(input("Podaj ilość liczb fibonacciego:\n"))

numbers = []
for iteration in range(iterations):
	if iteration == 0 or iteration == 1:
		numbers.append(1)
	else:
		numbers.append(numbers[-2] + numbers[-1])

print(numbers)


def exporting_numbers_to_file(numbers):
	pass


exporting_numbers_to_file()