#include <iostream>

using namespace std;

int main()
{
    int t,n,i;

    cout<<"Which table u want : ";
    cin>>n;
    cout<<"\n";
    cout<<"How many times : ";
    cin>>t;
    for(i=1;i<=t;i++)
    {
    cout<<n<<"x"<<i<<"="<<n*i<<endl;
    }
    return 0;
}
