package main

import (
	"fmt"
)

type Queue struct {
	items []interface{}
}

// Enqueue adds an element to the end of the queue
func (q *Queue) Enqueue(item interface{}) {
	q.items = append(q.items, item)
}

// Dequeue removes and returns the front element of the queue
func (q *Queue) Dequeue() interface{} {
	if len(q.items) == 0 {
		return nil // Queue is empty
	}
	front := q.items[0]
	q.items = q.items[1:]
	return front
}

// Peek returns the front element of the queue without removing it
func (q *Queue) Peek() interface{} {
	if len(q.items) == 0 {
		return nil // Queue is empty
	}
	return q.items[0]
}

// IsEmpty checks if the queue is empty
func (q *Queue) IsEmpty() bool {
	return len(q.items) == 0
}

// Size returns the number of elements in the queue
func (q *Queue) Size() int {
	return len(q.items)
}

func QueFunction() {
	queue := Queue{}

	queue.Enqueue("Alice")
	queue.Enqueue("Bob")
	queue.Enqueue("Charlie")

	fmt.Println("Front of queue:", queue.Peek())

	fmt.Println("Dequeue:", queue.Dequeue())
	fmt.Println("Dequeue:", queue.Dequeue())

	fmt.Println("Is empty:", queue.IsEmpty())
	fmt.Println("Size:", queue.Size())
}
