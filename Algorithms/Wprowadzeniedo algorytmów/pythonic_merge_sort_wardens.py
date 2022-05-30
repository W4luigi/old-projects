from math import inf as infinity


def merge_sort(to_sort):
    length = len(to_sort) 
    if length > 1:
        half = length // 2
        first_half = to_sort[half:]
        first_half = merge_sort(first_half)
        second_half = to_sort[:half]
        second_half = merge_sort(second_half)
        to_sort = merge(first_half, second_half)
    return to_sort


def merge(left, right):
    length = len(left + right)
    i = j = 0
    merged = []

    left.append(infinity)
    right.append(infinity)

    for k in range(length):
        if left[i] < right[j]:
            merged.append(left[i])
            i += 1
        else:
            merged.append(right[j])
            j += 1

    return merged


tab1 = [2, 1, 3, 7]
print(f"{tab1 = }")
test1 = merge_sort(tab1)
print(f"{test1= }\n")

tab2 = [1, 9, 8, 4]
print(f"{tab2 = }")
test2 = merge_sort(tab2)
print(f"{test2 = }\n")

tab3 = [3, 10, 1, 4, 5, 6, 7, 9]
print(f"{tab3 = }")
test3 = merge_sort(tab3)
print(f"{test3= }\n")
