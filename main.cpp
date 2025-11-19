#include <iostream>
#include <string>
using namespace std;

// problem 15
void hello() {
        cout << "Hello from hello()" << endl;
}
void bye() {
        cout << "Bye from bye()" << endl;
}

// problem 16
int add(int a, int b) {
        return a + b;
}
int multiply(int a, int b) {
        return a * b;
}
// p 17 and 18
void calculate(int (*op)(int, int), int a, int b) {
        cout<<"Result: "<<op(a, b);
}

int main() {
        srand(time(NULL));
    // problem 9
            // int a = 7, b=14, c=21;
            // int *ptr[3] = {&a, &b, &c};
            // for (int i = 0; i < 3; i++) {
            //     cout << **(ptr+i) <<" ";
            // }

    // problem 10
            // int arr[5] = {4, 2, 5, 1, 3};
            // int *aPtr = arr;
            // for (int i = 0; i < 4; i++) {
            //     for (int j = 1; j < 5; j++) {
            //         if (*(aPtr+j)<*(aPtr+j-1)) {
            //             int temp = *(aPtr+j);
            //             *(aPtr+j) = *(aPtr+j-1);
            //             *(aPtr+j-1) = temp;
            //         }
            //     }
            // }
            // for (int i = 0; i < 5; i++) {
            //     cout<<*(aPtr+i)<<" ";
            // }


    // problem 11
            // const char *suits[4] = {"Hearts", "Diamonds", "Clubs", "Spades"};
            // for (int i = 0; i < 4; i++) {
            //     cout << *(suits+i)<<" ";
            // }


    // problem 12
                    // const char* days[3] = {"Mon", "Tue", "Wed"};
                    // for (int i = 0; i < 3; i++) {
                    //         cout << *(*(days+i)+1)<< " ";
                    // }


        // problem 13
                // 1st way
                        // string face[13] = {"Ace", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine", "Ten", "Jack", "Queen", "King"};
                        // string suits[4] = {"Hearts", "Clubs", "Diamonds", "Spades"};
                        // string deck[4][13];
                        // for (int i = 0; i < 4; i++) {
                        //         for (int j = 0; j < 13; j++) {
                        //                 deck[i][j] = *(face+j) + " of "+suits[i];
                        //         }
                        // }
                        // for (int i = 0; i < 4; i++) {
                        //         for (int j = 0; j < 13; j++) {
                        //                 cout << deck[i][j]<<endl;;
                        //         }
                        // }
                // 2nd way
                        // const char* suits[4] = {"Hearts", "Diamonds", "Clubs", "Spades"};
                        // const char* ranks[13] = {"Ace", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine", "Ten", "Jack", "Queen", "King"};
                        // // printing
                        // for (int i=0; i<4; i++) {
                        //         for (int j=0; j<13; j++) {
                        //                 cout<<*(ranks+j)<<" of "<<*(suits+i)<<endl;
                        //         }
                        // }

        // problem 14
                        // const char* suits[4] = {"Hearts", "Diamonds", "Clubs", "Spades"};
                        // const char* ranks[13] = {"Ace", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine", "Ten", "Jack", "Queen", "King"};
                        // int deck[4][13];
                        // for (int i = 0; i < 4; i++) {
                        //         for (int j = 0; j < 13; j++) {
                        //                 deck[i][j] = rand() % 52;
                        //         }
                        // }
                        // for (int i = 0; i < 4; i++) {
                        //         for (int j = 0; j < 13; j++) {
                        //                 int name = deck[i][j]/13;
                        //                 int type = deck[i][j]%13;
                        //                 cout<<*(ranks+type)<<" of "<<*(suits+name)<<endl;
                        //         }
                        // }

        // problem 15
                // void(*fptr)();
                // fptr = hello;
                // fptr();
                //
                // fptr = bye;
                // fptr();

        // problem 16
                        // int(*fptr)(int, int);
                        // fptr = add;
                        // cout<<"Add: "<<fptr(12, 13)<<endl;
                        // fptr = multiply;
                        // cout<<"Multiply: "<<fptr(12, 13);

        // problem 17
                // int(*op)(int, int);
                // op =multiply;
                // calculate(op, 5, 6);


        // problem 18
                        // int n; cout<<"Select: "; cin>>n;
                        // int(*op[])(int, int) = {add, multiply};
                        // calculate(op[n-1], 3, 5);








    return 0;
}