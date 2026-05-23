a, b, c = map(int, input("Enter three numbers separated by comma: ").split(","))

largest = max(a, b, c)
smallest = min(a, b, c)

print("Largest number =", largest)
print("Smallest number =", smallest)
