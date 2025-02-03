#include <iostream>
#include <vector>
using namespace std;
void subset(vector<int> &arr, vector<int> &ans;int i){
    if (i== arr.size()){
        for (int val: ans){
            cout <<val;
        }
        cout<<endl;
    }
}

    int main()
{
    vector<int> arr = {1,2,3,4,5};
    vector<int> ans ;

    return 0;
}
