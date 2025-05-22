func isValid(s string) bool {
    stack := []rune{}

    for _, char := range s{
        if char == '(' || char == '{' || char == '['{
            stack = append(stack, char)
        }else{
            if len(stack) == 0{
                return false
            }
            last := stack[len(stack)-1]
            stack = stack[:len(stack)-1]
            c := string(last) + string(char)
            if c == "()" || c == "{}" || c == "[]"{
                continue
            }else{
                return false
            }
        }
    }

    return len(stack) == 0
}