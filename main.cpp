#include <iostream>
#include <vector>
#include <fstream>
using namespace std;
int main(){
    ifstream in("ciagi.txt");
    int x;
    int maxx = -1;
    int ile = 0;
    while (in >> x){
    vector <int> v(x);
    for(int i = 0; i < x; i++)
        in >> v[i];
    bool dziala = true;
    for(int i = 2; i < x; i++)
    {
        if(v[i-1]-v[i-2] != v[i]-v[i-1])
        {
            dziala = false;
            break;
        }
    }
    if(dziala)
    {
        ile++;
        maxx = max(maxx, v[1]-v[0]);
    }
    }
    cout << ile;
    return 0;
}
