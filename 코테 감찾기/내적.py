def solution(a, b):
    answer = 0
    for i, k in zip(a,b) :
        answer += i*k
    return answer