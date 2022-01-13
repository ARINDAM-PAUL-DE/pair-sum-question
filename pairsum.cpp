#include<iostrem>
#include<stdio.h>
vector<vector j<int>> ans;
using namspace std;
 
for(inti=0;i<arr.size();i++)
{
  for(int j=i+1;j<arr.size();j++){
    if(arr[i]+arr[z]==s)
    {
      vector<int>temp;
      temp.push_back(min(arr[i],arr[z]));
      temp.push_back(max(arr[i],arr[j]));
      ans.push_back(temp);
    }
  }
}
sort(ans.begin(),ans.end());
return ans;
}
