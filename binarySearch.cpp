#include<iostream>
using namespace std;

int main(){
	//ascending
	int ar[10]={1,2,3,4,5,6,7,8};
	int size = sizeof(ar) / sizeof(ar[0]);
	
	int low = 0, up = size - 1, med, key;
	bool status;
	
	cout<<"input key: ";
	cin>> key;
	cout<<"key = "<<key<<endl<<endl;
	
	
	while(low <= up)
	{
		med = (low + up)/ 2;
		cout<<low<<"+"<<up<<"="<<med<<endl;
		if( ar[med] == key ){
			cout<< key <<" is present at position " << med;
			status = true;
			break;
		}
		else{
			if( key > ar[med] ){
				cout<<"if =>";
				cout<<key<<">"<<ar[med]<<endl;
				cout<<med<<"+1";
				low = med + 1;
				cout<<low<<endl;
			}else{
				cout<<"else =>";
				up = med-1;
				cout<<"up = med-1 => "<<up<<endl;
			}
		}
	}
	
	if(status == false){
		cout<< key <<" is not present in the list ";
	}
	
	
}
