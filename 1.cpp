#include<iostream>

using namespace std;

int check(int *x,int *y,int *z)
{
    int a=*x,b=*y,c=*z;
    while(b==a || c==a || b==c || b%3==0 || c%3==0){
        b=b-1;
        c=c+1;
    }
    *x=a,*y=b,*z=c;
    if(b<=0)
    return 0;
    else
    return 1;
}

int main(){
    int t;
    cin>>t;
    while(t--)
    {
        int k;
        cin>>k;
        int x,y,z,g;
        int p=k/3;
        if(p%3==0)
        p=p+1;
        x=p;
        g=k-x;
        y=g/2;
        z=g-y;
        if(check(&x,&y,&z))
        cout<<"YES"<<endl<<x<<" "<<y<<" "<<z<<endl;
        else
        cout<<"NO"<<endl;
    }
    return 0;
}