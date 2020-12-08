#include<bits/stdc++.h>
#include<conio.h>
using namespace std;
void result(string str[],int p[],int s[],float cp[],float sp[],int n){
	std::cout << std::setprecision(2) << std::fixed;
	cout<<"\n\tName   |  #Purchases   |  #Sales   |  Cost   |  Selling Price   |  Total Purchase   |  Total Sales   |  P/L%   |  Profit/Loss/Break-even   |"<<endl;
	cout<<"----------------------------------------------------------------------------------------------------------------------------------------------"<<endl;
	int k=0,tp=0,ts=0;
	float g,x,y;
	string v;
	for(int i=0;i<n;i++){
		k=k+1;
		x=p[i]*cp[i];
		y=s[i]*sp[i];
		tp=tp+x;
		ts=ts+y;
		if(x>y){
			g=-(((x-y)/x)*100);
			v="Loss";
		}
		else if(x<y)
		{
			g=(((y-x)/x)*100);
			v="Profit";
		}
		else
		{
			g=0;
			v="Break-even";
		}
	    cout<<"  "<<std::left<<setw(7)<<k;
		cout<<std::left<<setw(13)<<str[i]<<std::left<<setw(14)<<p[i]<<std::left<<setw(9)<<s[i]<<"$"<<std::left<<setw(13)<<cp[i]<<"$"<<std::left<<setw(19)<<sp[i]<<"$"<<std::left<<setw(17)<<x<<"$"<<std::left<<setw(14)<<y<<std::left<<setw(3)<<g<<"%"<<std::left<<setw(11)<<" "<<v<<endl;
	}
	x=tp;
	y=ts;
	if(x>y){
		g=(((x-y)/x)*100);
		v="Loss";
	}
	else if(x<y)
	{
		g=(((y-x)/x)*100);
		v="Profit";
	}
	else
	{
		g=0;
		v="Break-even";
	}
	cout<<"----------------------------------------------------------------------------------------------------------------------------------------------"<<endl;
	cout<<"Net Profit/Loss"<<setw(65)<<" "<<"$"<<std::left<<setw(17)<<tp<<"$"<<std::left<<setw(13)<<ts<<std::left<<setw(3)<<g<<"%"<<std::left<<setw(11)<<" "<<v<<endl; 
}
int main(){
	int n;
	cout<<"Enter the number of products: ";
	cin>>n;
	int p[n+1],s[n+1];
	float cp[n+1],sp[n+1];
	string str[n+1];
	for(int i=0;i<n;i++){
    	cout<<endl;
    	cin.ignore();
    	cout<<"Enter the name of the product: ";
    	getline(cin,str[i]);
    	cout<<"Enter the number of "<<str[i]<<" purchased: ";
    	cin>>p[i];
    	cout<<"Enter the number of "<<str[i]<<" sold: ";
    	cin>>s[i];
    	cout<<"Enter the cost of each "<<str[i]<<": $";
    	cin>>cp[i];
    	cout<<"Enter the selling price of each "<<str[i]<<": $";
    	cin>>sp[i];
	}
	result(str,p,s,cp,sp,n);
    getch();
	return 0;
}