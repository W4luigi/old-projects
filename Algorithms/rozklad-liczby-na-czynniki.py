def main():
	INPUT = int(input("podaj liczbę całkowitą"))
	OUTPUT = [1]
	NUMBER = INPUT

	if INPUT < 0:
		OUTPUT.append(-1)
		NUMBER *= -1

	for number in range(2, NUMBER):
		while NUMBER % number == 0:
			OUTPUT.append(number)
			NUMBER /= number

	if len(OUTPUT) == 1:
		OUTPUT.append(INPUT)

	print(OUTPUT)


if __name__ == "__main__":
	main()
