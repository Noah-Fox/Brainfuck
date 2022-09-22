#include <iostream>

using namespace std;

int main(int argc, char* argv[]) {
    int wArrays[4][8] = {{0,0,0,0,0,0,1,0},{1,0,1,0,-1,0,0,0},{-1,0,0,0,1,0,1,0},{0,0,1,0,0,0,0,0}};
    int hArrays[4][8] = {{0,0,0,0,0,0,0,1},{0,-1,0,0,0,1,0,1},{0,1,0,1,0,-1,0,0},{0,0,0,1,0,0,0,0}};

    for (int x = 1; x < argc; x ++){

        string arg = argv[x];
        int params[8];
        int paramOn = 0;
        string param;
        int letOn = 0;
        while (letOn < arg.length()){
            if (arg[letOn] == ' '){
                params[paramOn] = stoi(param);
                paramOn ++;
                param = "";
            }else{
                param += arg[letOn];
            }
            letOn ++;
        }
        params[paramOn] = stoi(param);
        

        //x1 y1 w1 h1 x2 y2 w2 h2
        int x1 = params[0];
        int y1 = params[1];
        int w1 = params[2];
        int h1 = params[3];
        int x2 = params[4];
        int y2 = params[5];
        int w2 = params[6];
        int h2 = params[7];

        
        //boolean values for if each side of square 1 is inside square 2
        bool s0 = x1 >= x2 && x1 <= x2+w2;
        bool s1 = y1+h1 >= y2 && y1+h1 <= y2+h2;
        bool s2 = x1+w1 >= x2 && x1+w1 <= x2+w2;
        bool s3 = y1 >= y2 && y1 <= y2+h2;

        //TODO exception
        if (abs((2*x1+w1)-(2*x2+w2)) >= w1+w2 || abs((2*y1+h1)-(2*y2+h2)) >= h1+h2){
            cout << 0 << endl;
        }else{

            int wArray[8];
            int hArray[8];
            for (int i = 0; i < 8; i ++){
                wArray[i] = wArrays[2*s0+s2][i];
                hArray[i] = hArrays[2*s1+s3][i];
            }

            int w = 0;
            int h = 0;
            for (int i = 0; i < 8; i ++){
                w += params[i] * wArray[i];
                h += params[i] * hArray[i];
            }

            cout << w * h << endl;
        }
    }

    return 0;
}