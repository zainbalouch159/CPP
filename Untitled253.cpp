 #include <iostream>
 #include<string>
using namespace std;
class binary
{
	private:
		string s;
		void chk_bin();	
	public:
	
		void read();
		void ones_compliment(void);
		void display(void);
	};
	void binary::read(void)
	{
		cout<<"Enter a binary number"<<endl;
		cin>>s;
	}
	void binary::chk_bin(void)
	{
	
		for(int i=0; i< s.length(); i++)
		{
			if(s.at(i) != '0' && s.at(i) !='1')
		{
			
			cout<<"Incorect binary format is "<<s.at(i)<<" so program exit"<<endl;
	exit(0);
		}
		}
	cout<<"Its binary format"<<endl;
	}
	void binary::ones_compliment()
	{
		chk_bin();
		for(int i=0; i< s.length(); i++)
		{
			if(s.at(i)=='0')
			{
			s.at(i)='1';	
			}
			else
			{
				s.at(i)='0';
			}
		}
		
	}
	void binary:: display()
	{
		cout<<"Displaying your binary number"<<endl;
		for(int i=0; i<s.length(); i++)
	{
		cout<<s.at(i);
		}	
	}
int main(){
binary b;
b.read();
//b.chk_bin();
b.ones_compliment();
b.display();
return 0;
}

