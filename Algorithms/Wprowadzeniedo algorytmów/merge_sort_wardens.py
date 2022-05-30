from math import inf as infinity


def merge(unordered, p, q, r):
    n1 = q - p + 1
    n2 = r - q
    left = [unordered[p + x] for x in range(n1)]
    right = [unordered[q + x + 1] for x in range(n2)]

    left.append(infinity)
    right.append(infinity)
    i = j = 0

    print(f"{p=} {q=} {r=}")
    for k in range(p, r + 1):
        if left[i] > right[j]:
            unordered[k] = right[j]
            j += 1

        else:
            unordered[k] = left[i]
            i += 1
        print(f"\t{k=} {unordered=}\n\t\t{i=} {left[i]=}\n\t\t{j=} {right[j]=}")

    return unordered


def merge_sort(unordered, p=-1, r=-1):
    if r == -1:
        r = len(unordered) - 1
    if p == 0:
        p = 0
    if p < r:
        q = (p + r) // 2
        unordered = merge_sort(unordered, p, q)
        unordered = merge_sort(unordered, q + 1, r)
        unordered = merge(unordered, p, q, r)

    return unordered


tab1 = [2, 1, 3, 7]
print(f"{tab1 = }")
test1 = merge_sort(tab1, 0, 3)
print(f"{test1= }\n")

tab2 = [1, 9, 8, 4]
print(f"{tab2 = }")
test2 = merge_sort(tab2, 0, 3)
print(f"{test2 = }\n")

tab3 = [3, 10, 1, 4, 5, 6, 7, 9]
print(f"{tab3 = }")
test3 = merge_sort(tab3, 0, 7)
print(f"{test3= }\n")
