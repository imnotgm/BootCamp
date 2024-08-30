#include <iostream>
#include <string>

using namespace std;

int main()
{
    string N; int nlength, trial = 0;
    while(true){
        cin >> N;
        nlength = N.length();
        for (int i=0; i<nlength; i++){
            if(N[i]<=9 && N[i]>=0)
                continue;
            else{
                trial++;
                break;
            }
        }
        if (trial == 3){
            printf("ERROR! OUT OF TRIAL");
            trial = 0;
            break;
        }
        for(int i=0; i<nlength; i++){
            if (i%3 == nlength%3 && i!=0)
                cout << ',' << N[i];
            else
                cout << N[i];
        }
        cout << endl;
    }
}