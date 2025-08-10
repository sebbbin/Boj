def solution(x):
    answer = x
    b= 0
    a=10
    while x!=0 :
        b+= (x%a/a)*10
        x-=x%a
        a*=10
        
    if answer%b ==0 :
        return True
    else : 
        return False