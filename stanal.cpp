#include"matrix.hpp"
int stanal(){
         int size;       //nor size - i hamar popoxakan
         int sumup=0;
         int sumdw=0;
         cout<<"enter size column: ";            //nermucuma size chap@
         cin>>size;
         int matrix[size*size];
         assert(size>0);                         //nor matrix popoxakan s u e chapi
         cout<<"start insert numbers"<<endl;
         for (int i=0;i<size; i++){              //mtnuma matrixi andamnerov ancnuma 
                 for (int j=0;j<size;j++){
                         int numbers;            //nor popoxakan vortex lineluyen matrixi michov ancan bolor tver@
                         cin>>numbers;
			 assert(numbers>0);
                         matrix[i+j]=numbers;
                         if(j<i)sumdw +=numbers;         //nerqev hashvel
                         if(j>i)sumup +=numbers;	 //verev hashvel
                 }
}
cout<<"---------------------------------------------------------"<<endl;
matrica(matrix,size,sumup,sumdw);
return 0;
}
