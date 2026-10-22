data = input().split()
n = int(data[0])
k = int(data[1])

total_sum = 0

for i in range(1, n + 1):
    line_sum = 0
    terms = []
    for j in range(i, 0, -1):
        terms.append(f"({j} * {k})")
        line_sum += j * k
    print(" + ".join(terms) + f" = {line_sum}")
    total_sum += line_sum

print(total_sum)