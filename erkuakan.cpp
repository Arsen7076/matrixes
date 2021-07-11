#include"matrix.hpp"
#include<vector>
vector <int> erkuakan (int number){           //stananq binar arjeqy
     int remainder=0;
     vector<int> residual;
 	for (int i=0;number>=2;i++){
	       remainder=number%2;
		number /=2;
		residual.push_back(remainder);
	}
	residual.push_back(number);
   return residual;
}
