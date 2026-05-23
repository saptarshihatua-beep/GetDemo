ṇweight = float(input("Enter your weight in kilograms: "))
height = float(input("Enter your height in meters: "))

bmi = weight / (height * height)
print("Your BMI is:", round(bmi, 2))

if bmi < 18.5:
    print("Category: Underweight")
elif bmi >= 18.5 and bmi <= 24.9:
    print("Category: Normal weight")
elif bmi >= 25 and bmi <= 29.9:
    print("Category: Overweight")
else:
    print("Category: Obesity")
