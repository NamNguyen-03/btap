#include <iostream>
#include <conio.h>
#include <math.h>
#include <iomanip>
#include <string.h>
using namespace std;

class ThiSinh{
	protected:
		char hoten[25];
		int mts;
		double toan;
		double ly;
		double hoa;
		double tb;
	public:
		void Nhap(){
			cout<<"Nhap vao ho ten: ";
			cin.ignore();
			cin.getline(hoten,sizeof(hoten));
			cout<<"Nhap vao ma thi sinh: ";
			cin>>mts;
			do{
		cout<<"Nhap diem toan : ";
		cin>>toan;
		}while(toan<0||toan>10);
		do{
		cout<<"Nhap diem ly : ";
		cin>>ly;
		}while(ly<0||ly>10);
		do{
		cout<<"Nhap diem hoa : ";
		cin>>hoa;
		}while(hoa<0||hoa>10);
}
		void Xuat(){
			cout<<"Ho ten: "<<hoten<<endl;
			cout<<"Ma thi sinh "<<mts<<endl;
			if(toan>=8.5){
				cout<<"Diem toan: A ";
			}else if(8.5>toan&&toan>=7){
				cout<<"Diem toan: B ";
			}else if(7>toan&&toan>4){
				cout<<"Diem toan: C ";
			}else if(toan<=4){
				cout<<"Diem toan: F ";
			}
			cout<<"\n";
			if(ly>=8.5){
				cout<<"Diem ly: A ";
			}else if(8.5>ly&&ly>=7){
				cout<<"Diem ly: B ";
			}else if(7>ly&&ly>4){
				cout<<"Diem ly: C ";
			}else if(ly<=4){
				cout<<"Diem ly: F ";
			}
			cout<<"\n";
			if(hoa>=8.5){
				cout<<"Diem hoa: A ";
			}else if(8.5>hoa&&hoa>=7){
				cout<<"Diem hoa: B ";
			}else if(7>hoa&&hoa>4){
				cout<<"Diem hoa: C ";
			}else if(hoa<=4){
				cout<<"Diem hoa: F ";
			}
		
		}
		double tinhtb(){
			tb=(toan+ly+hoa)/3;
			return tb;
		}
};
int main(){
	int n;
	cout<<"Nhap vao so luong thi sinh: ";
	cin>>n;
	ThiSinh *ts1;
	ts1= new ThiSinh[n+1];
	for(int i=0;i<n;i++){
		cout<<"Nhap thi sinh thu:"<<i+1<<endl;
	    ts1[i].Nhap();
	    
	}
	    for(int i=0;i<n;i++){
			for(int j=i+1;j<n;j++){
				if(ts1[i].tinhtb()<ts1[j].tinhtb()){
					swap(ts1[i],ts1[j]);
				}
			}
		}
	
	cout<<"\n       Sap xep"<<endl;
	for(int i=0;i<n;i++){
		ts1[i].Xuat();
		cout<<"\n";
		cout<<"Diem trung binh: "<<ts1[i].tinhtb()<<endl<<"\n";
	}
}
