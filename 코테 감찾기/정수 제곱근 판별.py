def solution(n):
    sqrt = int(n ** 0.5) 
    if sqrt*sqrt ==n :
        return (sqrt+1) **2
    else : 
        return -1