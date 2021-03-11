#include <bits/stdc++.h>
using namespace std;

int main(){
  
    int t;       
    cin>>t;
    while(t--){
        int n;    
        cin>>n;
	    int sum=0;
    	while(n>0){
    	    int lastdigit=n%10;   
	        sum=sum+lastdigit;
	        n=n/10;
        
    	}
    	cout<<sum<<endl;
        

	}
	
}


/*
Sample Input
3 
12345
31203
2123

SampleOutput
15
9
8
