package calc

import "fmt"

func Reminder() {
	fmt.Print("Enter two numbers separated by a space: ")
	_, err := fmt.Scanf("%d %d", &num1, &num2)
	if err != nil {
		fmt.Println("Error:", err)
		return
	}

	if num2 == 0 {
		fmt.Print("You cannot divide by zero")
		return
	}

	result := num1 % num2
	fmt.Printf("The Reminder value is: %d\n\n---------continue----------- \n\n\n", result)

	Primary()
}