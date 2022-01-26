#include<bits/stdc++.h>
using namespace std; 


// Driver code to test above functions
int32_t main()
{
    
     
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
	cout.tie(NULL);



	int t;
	cin >> t;
	while(t--)
	{
		int n;
		cin >> n;

		if(n==1)
			cout << 1 << "\n";
		else if(n==2)
			cout << 2 << "\n";
		else
		{
			vector<string> good;
			good.push_back("1");
			good.push_back("2");

			queue<string>q;
			q.push("1");
			q.push("2");

			n-=2;

			while(n)
			{
				string fr = q.front();
				q.pop();

				// Add one to current string
				string x = fr + "1";
				good.push_back(x);
				q.push(x);
				// Decrease N
				n--;

				// If n is greater than zero
				if(n!=0)	
				{

					// Add two to the current string
					string x = fr + "2";
					good.push_back(x);
					q.push(x);
					n--;
				} 
			}

			cout << good.back() << "\n";
		}
	}

    return 0;
 
}