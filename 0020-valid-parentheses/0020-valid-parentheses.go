func isValid(s string) bool {
    stack := []rune{}
    for _, bracket := range s{
        if bracket == '(' || bracket == '[' || bracket == '{'{
            stack = append(stack, bracket)
        }else{
            if len(stack) == 0{
                return false
            }
            last := stack[len(stack)-1]
            stack = stack[:len(stack)-1]
            comb := string(last) + string(bracket) 
            if Valid(comb){
                continue
            }else{
                return false
            }
        }
    }
    return len(stack)==0
}

func Valid(s string) bool {
    return s == "()" || s=="[]" || s=="{}"
}