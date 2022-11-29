#include<bits/stdc++.h>
using namespace std;
int con;
int main()
{
    string nums,partan;
    cin>>nums>>partan;
    int nums_lenth,partan_lenth;
    nums_lenth=nums.size();
    partan_lenth=partan.size();
    int kmp[partan_lenth];
    memset(kmp,0,sizeof(kmp));
    kmp[0]=0;

    for(int i=0,j=1;j<partan_lenth;j++)
    {
        if(partan[i]==partan[j])
        {
            kmp[j]=i+1;
            i++;
        }
        else
        {
             if(i>0)
               {
                 j--;
               }
             if(i>0)
              {

                i=kmp[i-1];
             }
        }

    }
    int flag = 0;
    for(int i=0,j=0;j<nums_lenth;j++)
    {
        //cout<<"partan["<<i<<"]="<<partan[i]<<" nums["<<j<<"]="<<nums[j]<<endl;
        //cout<<"i="<<i<<" j="<<j<<endl;
        if(partan[i]==nums[j])
        {
            i++;
            con++;
            flag++;
        }
        else
        {
            if(i>0)
            {
                j--;
            }
            if(i>0)
            {
                i=kmp[i-1];
            }
            cout<<"count::"<<con<<endl;
            cout<<"flag::"<<flag<<endl;
            flag = 0;
        }
      if(i==partan_lenth)
      {
          cout<<"Matching Position :"<<j-i+1<<"  count::"<<con<<endl;
          break;
      }

    }
    return 0;
}
/*
abcxabcdabxabcdabcdabcx
abcdabcx
Time complexity:O(m+n)
space complexity:O(m)
*/
