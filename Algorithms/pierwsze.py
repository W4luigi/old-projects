ile = int(input())

for _ in range(ile):
	liczba = int(input())
	if liczba == 1:
		print("NIE")
	else:
		output = "TAK"
		for i in range(2, liczba):
			if liczba % i == 0:
				output = "NIE"
				break
		print(output)