import java.util.Stack;

class MinStack {
    Stack<Integer> st = new Stack<>();
    Stack<Integer> minst = new Stack<>();

    public MinStack() {
        // No need for any initialization here as we're already initializing the stacks.
    }
    
    public void push(int val) {
        st.push(val);
        if (minst.isEmpty() || val <= minst.peek()) {
            minst.push(val);
        }
    }
    
    public void pop() {
        if (!st.isEmpty()) {
            if (st.peek().equals(minst.peek())) {
                minst.pop();
            }
            st.pop();
        }
    }
    
    public int top() {
        return st.peek();
    }
    
    public int getMin() {
        return minst.peek();
    }
}

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack obj = new MinStack();
 * obj.push(val);
 * obj.pop();
 * int param_3 = obj.top();
 * int param_4 = obj.getMin();
 */
