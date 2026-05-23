import math

print("1. Triangle")
print("2. Rectangle")
print("3. Circle")

ch = int(input("Enter choice: "))

if ch == 1:
    a = float(input("Enter side a: "))
    b = float(input("Enter side b: "))
    c = float(input("Enter side c: "))
    p = a + b + c
    s = p / 2
    area = math.sqrt(s * (s - a) * (s - b) * (s - c))
    print("Perimeter =", p)
    print("Area =", area)

elif ch == 2:
    l = float(input("Enter length: "))
    b = float(input("Enter breadth: "))
    print("Perimeter =", 2 * (l + b))
    print("Area =", l * b)

elif ch == 3:
    r = float(input("Enter radius: "))
    print("Perimeter =", 2 * math.pi * r)
    print("Area =", math.pi * r * r)

else:
    print("Invalid choice")
