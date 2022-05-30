def insertion_sort(unordered, mode=0):
    operator = -2 * mode + 1

    for j in range(1, len(unordered)):
        key = unordered[j]
        i = j - 1

        while unordered[i] * operator > key * operator and i >= 0:
            unordered[i + 1] = unordered[i]
            i -= 1
        unordered[i + 1] = key
    return unordered

tab1 = [2, 1, 3, 7]
print(f"\t{tab1 = }")
test1 = insertion_sort(tab1, 1)
print(f"\t{test1= }\n")

tab2 = [1, 9, 8, 4]
print(f"\t{tab2 = }")
test2 = insertion_sort(tab2, 1)
print(f"\t{test2 = }\n")

tab3 = [3, 10, 1, 4, 5, 6, 7, 9]
print(f"\t{tab3 = }")
test3 = insertion_sort(tab3, 1)
print(f"\t{test3= }\n")
