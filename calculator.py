option = input("Enter an operator (+, -, *, /): ")
result = 0
n1=(float(input("Enter first number for operation:")))
if option in ['+', '-', '*', '/']:
    n2 = float(input("Enter next number: "))
    if option == "+":
        result = n1 + n2
    elif option == "-":
        result = n1 - n2
    elif option == "*":
        result = n1 * n2
    elif option == "/":
        if n2 == 0:
            print("Cannot divide by zero.")
        result = n1 / n2
    print(f"{n1} {option} {n2} = {result}")
else:
    print("Invalid operation entered.")
