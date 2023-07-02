//재귀의 귀재 브론즈2
#include <stdio.h>
#include <string.h>

int count=0;

int recursion(const char *s, int l, int r){
    count++;
    if(l >= r) return 1;
    else if(s[l] != s[r]) return 0;
    else return recursion(s, l+1, r-1);
}

int isPalindrome(const char *s){
    return recursion(s, 0, strlen(s)-1);
}

int main(){
    int N, a =0;
    scanf("%d",&N);
    char str[1010];

    for(int i=0; i<N; i++){
        count =0;
        scanf("%s", str); //&str썼더니 막 워닝이 떴다. 알고보니 포인터라서 str앞에 &을 붙이지 말고 그냥 str만 써야했다.. 헐..
        a = isPalindrome(str);
        printf("%d %d\n", a, count );
    }

    return 0;
}