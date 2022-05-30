def find_max_subarray():

    return

prices1 = [100, 113, 110, 85, 105, 102, 86, 63, 81, 101, 94, 106, 101, 79, 94, 90, 97]
days1 = [_ for _ in range(len(prices1))]
change1 = [prices1[i] - prices1[i - 1] for i in range(1, len(prices1))]

print(f"{prices1=}\n{days1=}\n{change1=}")
