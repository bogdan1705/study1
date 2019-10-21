#include <iostream>


using namespace std;

int main()
{
    int M=4;
    int N=4;



   int Arr [M][N];

    for (int i= 0;i<M;i++ ){
        for(int j=0;j<N;j++){
            Arr[i][j]=j;
            cout<< Arr[i][j]<<endl;
        }
    }
    int v[N];
    int min=100;
   for(int a=0 ;a<N;a++){
        for(int i=0;i<M;i++){
            for(int j=0;j<N;j++){

                if(min>Arr[i][j]){
                    min=Arr[i][j];

                     }
                    v[a]=min;
                }
        }
    cout << v[a];
    }

    return 0;
}

