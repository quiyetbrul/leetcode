type MinStack struct {
    stack []int
    min []int
}


func Constructor() MinStack {
    return MinStack{}
}


func (this *MinStack) Push(val int)  {
    this.stack = append(this.stack, val)

    if len(this.min) == 0 || val <= this.min[len(this.min)-1]{
        this.min = append(this.min, val)
    }
}


func (this *MinStack) Pop()  {
    if this.stack[len(this.stack)-1] == this.min[len(this.min)-1]{
        this.min = this.min[:len(this.min)-1]
    }

    this.stack = this.stack[:len(this.stack)-1]
}


func (this *MinStack) Top() int {
    return this.stack[len(this.stack)-1]
}


func (this *MinStack) GetMin() int {
    if len(this.min) > 0{
        return this.min[len(this.min)-1]
    }

    return 0
}


/**
 * Your MinStack object will be instantiated and called as such:
 * obj := Constructor();
 * obj.Push(val);
 * obj.Pop();
 * param_3 := obj.Top();
 * param_4 := obj.GetMin();
 */