# Shunting Yard Algorithm with Operator Priority Rules

The Shunting Yard algorithm is a method for converting an infix expression into postfix (Reverse Polish Notation - RPN). It follows a set of operator priority rules to determine the order of operators. Here's a step-by-step breakdown of how the algorithm works:

## Operator Priority Rules

1. **^ (Exponentiation) -> Priority 1**
2. **\*, / (Multiplication and Division) -> Priority 2**
3. **+, - (Addition and Subtraction) -> Priority 3**

## Expression: (A+B/C\*(D+E)-F)

### Step 1: Initialization

| Symbol | Operator Stack | Number Stack |
| ------ | -------------- | ------------ |
| (      | (              | A            |

### Step 2: Processing

| Symbol | Operator Stack | Number Stack |
| ------ | -------------- | ------------ |
| A      | (              | A            |
| +      | (+             | AB           |
| B      | (+             | AB           |
| /      | (+/            | ABC          |
| C      | (+/            | ABC          |
| \*     | (+/\*          | ABC/         |
| (      | (+/\*(         | ABC/         |
| D      | (+/\*(         | ABC/D        |
| +      | (+/\*(+        | ABC/D        |
| E      | (+/\*(+        | ABC/DE       |
| )      | (+/\*          | ABC/DE+      |
| -      | (-             | ABC/DE+\*+   |
| F      | (-             | ABC/DE+\*+F  |
| )      |                | ABC/DE+\*+F- |

### Step 3: Final Result

The expression `(A+B/C*(D+E)-F)` has been successfully converted to its postfix (RPN) form: `ABC/DE+*+F-`.

This RPN expression can be evaluated to obtain the final result.
