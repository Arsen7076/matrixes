#include"matrix.hpp"
int* matrica (int *matric,int size,int sumup,int sumdw) {
vector<int> bin1=erkuakan(sumup);			//find binar for up sum
vector<int> bin2=erkuakan(sumdw);			//find binar for down sum
int index1=bin1.size();
assert(index1>=0);
int index2=bin2.size();
assert(index2>=0);
int ip=0;
	for(int i=0;i<size;i++){
		for(int j=0;j<size;j++){
			if(j>i && index1>=0){matric[ip]=bin1[index1];		//chang up number for binary
				index1--;}
			else if(j<i && index2>=0){matric[ip]=bin2[index2];			//chang down number for binary
				index2--;}
			else {matric[ip]=9;}
			ip +=1;
		}}
	ip=0;
	for(int i=0; i<size; i++){
		for(int j=0; j<size;j++){ 		//print final arguments
			cout<<matric[ip]<<" ";
			ip +=1;
		}
		cout<<endl;
	}
	tpel(sumup,sumdw);
	for(int k = bin2.size() - 1; k >= 0; --k)
		cout << bin1[k];
	cout<<"   ";
	for(int k = bin1.size() - 1; k >= 0; --k)
		cout << bin2[k];
	return 0;
}
