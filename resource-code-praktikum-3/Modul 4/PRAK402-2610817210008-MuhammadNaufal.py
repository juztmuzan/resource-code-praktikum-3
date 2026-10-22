batas = int(input())

ganjil = []
genap = []

for i in range(1, batas + 1):
    if i % 2 != 0:
        ganjil.append(str(i))

for i in range(batas, 1, -1):
    if i % 2 == 0:
        genap.append(str(i))

print(" ".join(ganjil))
print(" ".join(genap))