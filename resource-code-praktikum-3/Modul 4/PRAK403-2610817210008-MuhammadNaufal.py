data = input().split()
a = int(data[0])
b = int(data[1])

hasil = []

if a <= b:
    i = a
    j = b
    while i <= b:
        hasil.append(f"{i} {j}")
        i += 1
        j -= 1
else:
    i = a
    j = b
    while i >= b:
        hasil.append(f"{i} {j}")
        i -= 1
        j += 1

print(" - ".join(hasil))