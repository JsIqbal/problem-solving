package main

import (
	"bufio"
	"fmt"
	"os"
	"strings"
)

// Function to determine operator precedence
func precedence(op rune) int {
	switch op {
	case '+', '-':
		return 1
	case '*', '/':
		return 2
	}
	return 0 // Lower precedence for all other characters
}

// Function to convert infix expression to postfix (RPN) notation
func infixToRPN(expression string) string {
	var operatorStack []rune
	var outputQueue []rune

	for _, token := range expression {
		if token >= '0' && token <= '9' {
			// If token is a number, add it to the output
			outputQueue = append(outputQueue, token)
		} else if token == '(' {
			// If token is an open parenthesis, push it onto the stack
			operatorStack = append(operatorStack, token)
		} else if token == ')' {
			// If token is a closing parenthesis, pop operators until '(' is encountered
			for len(operatorStack) > 0 && operatorStack[len(operatorStack)-1] != '(' {
				outputQueue = append(outputQueue, ' ')
				outputQueue = append(outputQueue, operatorStack[len(operatorStack)-1])
				operatorStack = operatorStack[:len(operatorStack)-1] // Pop
			}
			operatorStack = operatorStack[:len(operatorStack)-1] // Pop '('
		} else {
			// Token is an operator
			for len(operatorStack) > 0 && precedence(token) <= precedence(operatorStack[len(operatorStack)-1]) {
				// Pop operators with higher or equal precedence
				outputQueue = append(outputQueue, ' ')
				outputQueue = append(outputQueue, operatorStack[len(operatorStack)-1])
				operatorStack = operatorStack[:len(operatorStack)-1] // Pop
			}
			outputQueue = append(outputQueue, ' ')
			operatorStack = append(operatorStack, token)
		}
	}

	// Pop any remaining operators from the stack
	for len(operatorStack) > 0 {
		outputQueue = append(outputQueue, ' ')
		outputQueue = append(outputQueue, operatorStack[len(operatorStack)-1])
		operatorStack = operatorStack[:len(operatorStack)-1] // Pop
	}

	return string(outputQueue)
}

// Function to evaluate an RPN expression
func evaluateRPN(expression string) (int, error) {
	var stack []int

	tokens := strings.Fields(expression) // Split the expression into space-separated tokens

	if len(tokens) == 0 {
		return 0, fmt.Errorf("empty expression")
	}

	for _, token := range tokens {
		switch token {
		case "+":
			if len(stack) < 2 {
				return 0, fmt.Errorf("not enough operands for +")
			}
			b := stack[len(stack)-1]
			a := stack[len(stack)-2]
			stack = stack[:len(stack)-2]
			result := a + b
			stack = append(stack, result)
		case "-":
			if len(stack) < 2 {
				return 0, fmt.Errorf("not enough operands for -")
			}
			b := stack[len(stack)-1]
			a := stack[len(stack)-2]
			stack = stack[:len(stack)-2]
			result := a - b
			stack = append(stack, result)
		case "*":
			if len(stack) < 2 {
				return 0, fmt.Errorf("not enough operands for *")
			}
			b := stack[len(stack)-1]
			a := stack[len(stack)-2]
			stack = stack[:len(stack)-2]
			result := a * b
			stack = append(stack, result)
		case "/":
			if len(stack) < 2 {
				return 0, fmt.Errorf("not enough operands for /")
			}
			b := stack[len(stack)-1]
			a := stack[len(stack)-2]
			stack = stack[:len(stack)-2]
			if b == 0 {
				return 0, fmt.Errorf("division by zero")
			}
			result := a / b
			stack = append(stack, result)
		default:
			num := 0
			fmt.Sscanf(token, "%d", &num)
			stack = append(stack, num)
		}
	}

	if len(stack) == 1 {
		return stack[0], nil
	}
	return 0, fmt.Errorf("invalid expression")
}

func main() {
	fmt.Print("Enter an infix expression: ")
	scanner := bufio.NewScanner(os.Stdin)
	scanner.Scan()
	infixExpression := scanner.Text()

	postfixExpression := infixToRPN(infixExpression)
	fmt.Println("Postfix (RPN) expression:", postfixExpression)

	result, err := evaluateRPN(postfixExpression)
	if err != nil {
		fmt.Println("Error:", err)
	} else {
		fmt.Println("Result:", result)
	}

}
