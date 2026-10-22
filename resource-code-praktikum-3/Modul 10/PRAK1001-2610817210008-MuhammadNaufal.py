# Fungsi rekursif
def faktorial(n):
    if n == 0:
        return 1 # Base case
    else:
        return n * faktorial(n - 1) # Memanggil dirinya sendiri

n = int(input())
print(f"{n}! = {faktorial(n)}")