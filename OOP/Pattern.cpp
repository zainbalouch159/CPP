#include <iostream>
using namespace std;
class pattern{
    private:
    int n;
    public:
    void in(){
        cout<<"How many rows you want?"<<endl;
        cin>>n;
    }
    void star_accending(){
        for (int i = 0; i <n; i++)
        {
            for (int j= 0; j<=i; j++)
            {
                cout<<"*";
            }
            cout<<endl;
        }
        
    }
    void star_decending(){
        for (int i = 0; i <n; i++)
        {
            for (int j= 1; j<=n-i+1; j++)
            {
                cout<<"*";
            }
            cout<<endl;
        }
        
    }
    void num_accending(){
        for (int i = 0; i <n; i++)
        {
            for (int j= 0; j<=i; j++)
            {
                cout<<j+1;
            }
            cout<<endl;
        }
        
    }
    void num_decending(){
        for (int i = 0; i <n; i++)
        {
            for (int j= 1; j<=n-i+1; j++)
            {
                cout<<j+1;
            }
            cout<<endl;
        }
    }
    void pattern_1(){
        for (int i = 0; i <n; i++)
        {
            for (int j= 1; j<=n-i+1; j++)
            {
                cout<<j+1;
            }
            cout<<endl;
        }
    }
};
int main() {
 pattern a;
 a.in();
//  a.star_accending();
 a.star_decending();
//  a.num_accending();
//  a.num_decending();
    return 0;
}
