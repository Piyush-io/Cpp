import java.util.Scanner;

public class StackandQueue {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        Stack stack = new Stack();
        Queue queue = new Queue();

        while (true) {
            System.out.println("\nChoose an operation:");
            System.out.println("1. Push to Stack");
            System.out.println("2. Pop from Stack");
            System.out.println("3. Enqueue to Queue");
            System.out.println("4. Dequeue from Queue");
            System.out.println("5. Display Stack");
            System.out.println("6. Display Queue");
            System.out.println("7. Exit");

            int choice = scanner.nextInt();

            switch (choice) {
                case 1:
                    System.out.println("Enter data to push to stack:");
                    int data1 = scanner.nextInt();
                    stack.push(data1);
                    stack.display();
                    break;
                case 2:
                    int poppedData = stack.pop();
                    if (poppedData != -1) {
                        System.out.println("Popped element from stack: " + poppedData);
                    }
                    stack.display();
                    break;
                case 3:
                    System.out.println("Enter data to enqueue to queue:");
                    int data2 = scanner.nextInt();
                    queue.enqueue(data2);
                    queue.display();
                    break;
                case 4:
                    int dequeuedData = queue.dequeue();
                    if (dequeuedData != -1) {
                        System.out.println("Dequeued element from queue: " + dequeuedData);
                    }
                    queue.display();
                    break;
                case 5:
                    stack.display();
                    break;
                case 6:
                    queue.display();
                    break;
                case 7:
                    System.out.println("Exiting program");
                    System.exit(0);
                    break;
                default:
                    System.out.println("Invalid choice. Please enter a valid option.");
            }
        }
    }

    static class Stack {
        private static final int MAX_SIZE = 100;
        private int top;
        private int[] array;

        public Stack() {
            top = -1;
            array = new int[MAX_SIZE];
        }

        public boolean isEmpty() {
            return top == -1;
        }

        public boolean isFull() {
            return top == MAX_SIZE - 1;
        }

        public void push(int data) {
            if (isFull()) {
                System.out.println("Stack Overflow");
                return;
            }
            array[++top] = data;
            System.out.println(data + " pushed to stack");
        }

        public int pop() {
            if (isEmpty()) {
                System.out.println("Stack Underflow");
                return -1;
            }
            return array[top--];
        }

        public void display() {
            if (isEmpty()) {
                System.out.println("Stack is empty");
                return;
            }
            System.out.print("Stack elements: ");
            for (int i = 0; i <= top; i++) {
                System.out.print(array[i] + " ");
            }
            System.out.println();
        }
    }

    static class Queue {
        private static final int MAX_SIZE = 100;
        private int front, rear, size;
        private int[] array;

        public Queue() {
            front = rear = -1;
            size = 0;
            array = new int[MAX_SIZE];
        }

        public boolean isEmpty() {
            return size == 0;
        }

        public boolean isFull() {
            return size == MAX_SIZE;
        }

        public void enqueue(int data) {
            if (isFull()) {
                System.out.println("Queue is full");
                return;
            }

            if (isEmpty()) {
                front = rear = 0;
            } else {
                rear = (rear + 1) % MAX_SIZE;
            }

            array[rear] = data;
            size++;
            System.out.println(data + " enqueued to queue");
        }

        public int dequeue() {
            if (isEmpty()) {
                System.out.println("Queue is empty");
                return -1;
            }

            int data = array[front];
            if (front == rear) {
                front = rear = -1;
            } else {
                front = (front + 1) % MAX_SIZE;
            }

            size--;
            return data;
        }

        public void display() {
            if (isEmpty()) {
                System.out.println("Queue is empty");
                return;
            }
            System.out.print("Queue elements: ");
            int current = front;
            while (current != rear) {
                System.out.print(array[current] + " ");
                current = (current + 1) % MAX_SIZE;
            }
            System.out.print(array[rear]);
            System.out.println();
        }
    }
}
