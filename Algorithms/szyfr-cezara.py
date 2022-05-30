def main():
	raw_input = input()
	output = ""

	for letter in raw_input:
		prep_letter = ord(letter.upper())

		if prep_letter > 64 and prep_letter < 91:
			output += cipher(prep_letter)

		elif letter == " " or letter == "\n":
			output += letter

	print(f"{output = }")


def cipher(chr_num):
	if chr_num < 88:
		letter = chr(chr_num + 3)

	else:
		letter = chr(chr_num - 23)

	return letter


if __name__ == "__main__":
	main()
