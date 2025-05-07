import "strings"

func isAlnum(c byte) bool {
    return (c >= 'a' && c <= 'z') || (c >= '0' && c <= '9')
}

func isPalindrome(s string) bool {
    lo := 0
    hi := len(s) - 1

    str := strings.ToLower(s)
    for hi > lo{
        if !isAlnum(str[lo]){
            lo++
            continue
        }
        if !isAlnum(str[hi]){
            hi--
            continue
        }
        if str[hi] != str[lo]{
            return false
        }

        lo++
        hi--
    }

    return true
}