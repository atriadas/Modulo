

long long int product(int ar[], int n, long long int mod)
 {
     
     //code here
     long long int product=1;
     for(int i=0;i<n;i++)
     {
         product=((product%mod)*(ar[i]%mod));
     }
     return(product%mod);
     
 }
