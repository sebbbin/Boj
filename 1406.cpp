#include <iostream>
#include <list>

using namespace std;

int main () {

ios_base::sync_with_stdio(false); 
cin.tie(nullptr); cout.tie(nullptr);
int m; 
string input;
cin >>input>>m;
list<char> editer(input.begin(), input.end());
auto cursor = editer.end();
char word,p;

while (m--){
    cin >> word;
    if(word == 'L')
    {
        if(cursor != editer.begin())
        cursor--;
    }
    else if(word == 'D')
    {
        if(cursor != editer.end())
        cursor++;
    }
    else if(word == 'B')
    {
         if(cursor != editer.begin())
        cursor = editer.erase(--cursor);
    }
    else if(word == 'P')
    {   
        cin >> p;
        editer.insert(cursor,p);
    }
}

for(auto it : editer){
    cout << it;
}

return 0;
}