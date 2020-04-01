    #include<bits/stdc++.h>
    using namespace std;   
    //#define int long long
   
    int main()
    {
        ios_base::sync_with_stdio(false);
       cin.tie(NULL);

        int t;
        cin>>t;
    	while(t--)
    	{
    		int n,q,p; cin >> n >>q;
            int arr[n];
            int a[n];
            map<int,int> mp;
            
             
    		for (int i = 0; i < q; ++i)
    			cin >> arr[i];
     
           
            for (int i = 0; i < n; ++i)
                cin >> a[i];
               
            for (int i = 0; i < n; ++i)
                {
                    mp[arr[i]]++;
                }
                /*cout<<a[3]<<endl; 
                mp[arr[0]]+a[0];
                */for(auto x:mp)
                {
                    cout<<x.first<<" "<<x.second<<endl;
                }
/*
            for (int i = 0; i < n; ++i)
                {
                    if(mp[arr[i]]!=0 && mp[arr[i]]<mp[arr[i]])
                }*/
       

    
    	}
    	return 0;
    }