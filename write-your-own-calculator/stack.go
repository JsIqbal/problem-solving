package main

import (
	"fmt"
)

type Stack struct {
	items []interface{}
}

// Push adds an element to the top of the stack
func (s *Stack) Push(item interface{}) {
	s.items = append(s.items, item)
}

// Pop removes and returns the top element of the stack
func (s *Stack) Pop() interface{} {
	if len(s.items) == 0 {
		return nil // Stack is empty
	}
	top := s.items[len(s.items)-1]
	s.items = s.items[:len(s.items)-1]
	return top
}

// Peek returns the top element of the stack without removing it
func (s *Stack) Peek() interface{} {
	if len(s.items) == 0 {
		return nil // Stack is empty
	}
	return s.items[len(s.items)-1]
}

// IsEmpty checks if the stack is empty
func (s *Stack) IsEmpty() bool {
	return len(s.items) == 0
}

// Size returns the number of elements in the stack
func (s *Stack) Size() int {
	return len(s.items)
}

func StackFunction() {
	stack := Stack{}

	stack.Push(1)
	stack.Push(2)
	stack.Push(3)

	fmt.Println("Top of stack:", stack.Peek())

	fmt.Println("Pop:", stack.Pop())
	fmt.Println("Pop:", stack.Pop())

	fmt.Println("Is empty:", stack.IsEmpty())
	fmt.Println("Size:", stack.Size())
}
