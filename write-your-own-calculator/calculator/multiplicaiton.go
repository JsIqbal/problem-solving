package calc

import "fmt"

func Multiplication() {
	fmt.Print("Enter two numbers separated by a space: ")
	_, err := fmt.Scanf("%d %d", &num1, &num2)
	if err != nil {
		fmt.Println("Error:", err)
		return
	}

	result := num1 * num2
	fmt.Printf("The multiplied value is: %d\n\n---------continue----------- \n\n\n", result)

	Primary()
}