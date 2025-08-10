def solution(n):
    answer = []
    a=10
    while n!=0 :
        answer.append((n%a/a)*10)
        n-=n%a
        a*=10
    return answer
