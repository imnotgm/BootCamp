#include <iostream>
#include <string>

using namespace std;

int main()
{
    string N; int nlength, trial = 0; bool flag=false;
    while(true){
        cin >> N;
        nlength = N.length();
        for (int i=0; i<nlength; i++){
            if((N[i]<= '9' && N[i]>='0') || N[0]=='-')
                continue;
            else{
                trial++;
                flag=true;
                break;
            }
        }
        if (trial == 3){
            printf("There's one or more character which is not a number\nERROR! OUT OF TRIAL");
            trial = 0;
            break;
        }
        if(flag == true){
            cout << "There's one or more character which is not a number" << endl;
            flag=false;
            continue;
        }
        if(N[0] == '-'){
            cout<< '-' ;
            N = N.substr(1, N.length());
            nlength= N.length();
        }
        if(nlength>20){
            cout << "N is more than 20 character" << endl;
            continue;
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

//
