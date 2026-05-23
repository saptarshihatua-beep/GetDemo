numbers = []

for i in range(5):
    n = float(input("Enter score: "))
    numbers.append(n)

mean = sum(numbers) / 5

variance = 0
for x in numbers:
    variance = variance + (x - mean) ** 2

std_dev = (variance / 5) ** 0.5

print("Mean =", mean)
print("Standard Deviation =", std_dev)
