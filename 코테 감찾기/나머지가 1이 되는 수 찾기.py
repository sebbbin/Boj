def solution(n):
    answer = 0
    for k in range (1,n+1) :
        if n%k==1 :
            answer=k
            break
    return answer