func evalRPN(tokens []string) int {
    stack := []int{}

    for _, token := range tokens{
        if token == "+" || token == "-" || token == "*" || token == "/"{
            if len(stack) <= 0 {
                return 0
            }
            i := stack[len(stack)-1]
            stack = stack[:len(stack)-1]

            j := stack[len(stack)-1]
            stack = stack[:len(stack)-1]

            if token == "+"{
                stack = append(stack, j + i)
            }
            if token == "-"{
                stack = append(stack, j - i)
            }
            if token == "*"{
                stack = append(stack, j * i)
            }
            if token == "/"{
                stack = append(stack, j / i)
            }
        } else{
            tok, err := strconv.Atoi(token)
            if err != nil{
                return 0
            }
            stack = append(stack, tok)
        }
    }

    return stack[len(stack)-1]
}