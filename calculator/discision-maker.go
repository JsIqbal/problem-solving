package calc

var num1, num2 int64

func CalculationDecisionMaker(decision int64) string {
	switch decision {
	case 0:
		return "exit"
	case 1:
		return "addition"
	case 2:
		return "subtraction"
	case 3:
		return "multiplication"
	case 4:
		return "division"
	case 5:
		return "remainder"
	}

	return "invalid"
}