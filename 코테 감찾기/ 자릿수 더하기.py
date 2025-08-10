def solution(n):
    answer = 0
    a=10
    while n!=0 :
        answer+= (n%a/a)*10
        n-=n%a
        a*=10

    return answer