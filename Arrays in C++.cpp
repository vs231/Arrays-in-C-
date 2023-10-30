
#include <iostream>

using namespace std;

int main()
{
    int length;
    cin >> length;
    int a[length];
    
    for(int i=0;i<length;i++){
        cin>>a[i];
    }
    int target;
    cin>>target;
    
    int start=0,end=1;
    while(start<end && end<length && start<length-1){
        if(a[start]+a[end]==target){
            cout<<"Indices are :"<<start<<" "<<end<<endl;
            return 0;
        }
        
        end++;
        
        if(end==length){
            start++;
            end=start+1;
        }
        
    }
    return 0;
}
