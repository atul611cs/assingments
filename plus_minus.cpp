#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
  
using namespace std;


int main() {
    int m=0,n=0,p=0,a,i,j;
    cin>>j;
    for(i=0;i<j;i++){
        cin>>a;
        
        if(a>0)
            m++;
        else if(a<0)
            n++;
        else
            p++;
    }
    
    printf("%.3f\n",(float)m/j);
    printf("%.3f\n",(float)n/j);
    printf("%.3f",(float)p/j);
     
    return 0;
}
