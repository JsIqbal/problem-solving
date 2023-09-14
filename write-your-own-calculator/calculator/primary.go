package calc

import (
	"fmt"
)

func Primary() {
	var calcInput int64

	fmt.Print("Enter 1 to do addition: \n")
	fmt.Print("Enter 2 to do subtraction: \n")
	fmt.Print("Enter 3 to do multiplication: \n")
	fmt.Print("Enter 4 to do division: \n")
	fmt.Print("Enter 5 to do remainder: \n")
	fmt.Print("Enter 0 to exit the program: \n")

	_, err := fmt.Scan(&calcInput)
	if err != nil {
		fmt.Println("Error:", err)
	}

	fmt.Scanln()
	
	CalculationDecisionMaker(calcInput)
	decision :=CalculationDecisionMaker(calcInput)

    switch decision {
		case "addition" : Addition()
		case "subtraction" : Subtraction()
		case "multiplication" : Multiplication()
		case "division" : Division()
		case "remainder" : Reminder()
		case "exit" : return
	}
}
