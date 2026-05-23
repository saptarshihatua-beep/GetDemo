p=int(input("Enter your princlipal amount: "))
t=int(input("Enter your time in years: "))
r=float(input("Enter your rate of interest: "))
n=int(input("Enter number of times interest applied per time period: "))
ci=p*(1+r/n)**(n*t)
print("The compound interest is:",ci)
# compound interest calculation
# formula used: A = P (1 + r/n)^(nt)



