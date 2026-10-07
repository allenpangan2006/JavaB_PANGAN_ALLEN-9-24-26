
#include <iostream>
#include <string>

using namespace std;

int main(){
// Decalaring the variable of different types--
    int age = 20;
    double price = 50.00;
    float weight = 55.5f;
    char grade = 'B';
    bool isStudent = true;
    string name = "Allen";

//Getting input using cout--
    cout<<"Name: "<< name<<endl;
    cout<<"Age: "<< age<<endl;
    cout<<"Price: "<< price<<endl;
    cout<<"Weight: "<< weight<<endl;
    cout<<"Grade: "<< grade<<endl;
    cout<<"IsStudent: "<< isStudent<<endl;

//Getting input using cin--
    string userCity;
    cout<<"\nEnter your Address: ";
    cin>>userCity; //read one word(stops at whitespace)

    cout<<"You live in: " <<userCity<<endl;

    cin.ignore();//clears leftover newline character from previous cin
    string fullSentence;
    cout<<"Enter a sentence about yourself: ";
    getline(cin, fullSentence); //Read the entire inline
    cout<<"You said: "<<fullSentence<<endl;
/*
    return 0;
}
*/
//Control Flow(if/else, switch, loops)
/*#include <iostream>
using namespace std;

int main(){
*/
    int score;

    cout<<"Enter your score: ";
    cin>>score;

    if (score>= 90){
        cout<<"Your grade is A! "<<endl;
    }else if(score >= 80){
        cout<<"Your grade is B!"<<endl;
    }else if(score >= 75){
        cout<<"Your grade is C"<<endl;
    }else {
        cout<<"Your grade is D"<<endl;
    }

//Switch Statement
/*
#include <iostream>
#include <string>

using namespace std;

int main();
*/

    int day;
    cout<<"\nEnter a day number (1-7): ";
    cin >> day;

switch (day) {
    case 1: cout<<"Monday"<<endl; break;
    case 2: cout<<"Tuesday"<<endl; break;
    case 3: cout<<"Wednesday"<<endl; break;
    case 4: cout<<"Thursday"<<endl; break;
    case 5: cout<<"Friday"<<endl; break;
    case 6: cout<<"Saturday"<<endl; break;
    case 7: cout<<"Sunday"<<endl; break;
    default : cout<<"Invalid day"<<endl;
    
}
/*
#include <iostream>

using namespace std;

int main(){
*/ 
 cout<<"\nCounting to 1-5 with a for loop: "<<endl;
    for(int i=1; i<=5; i++){
        cout<<i<<"";
    }
    cout<<endl;

//while loop
    cout<<"\nCounting down from 5 with a while loop: "<<endl;
    int n = 5;
    while(n>0){
        cout<< n <<" ";
        n--;
    }
    cout<<endl;
//Do while loops
    cout<<"\ndo while example: "<<endl;
    int x=0;
    do{
        cout<<"x = "<< x <<endl;
        x++;
    }while (x < 3);

//Break and continue
cout<<"\nSkipping 3 using continue, stopping at 7 using break "<<endl;
for (int i=1; 1<=10; i++){
    if(i == 3) continue; //skip this iteration
    if(i == 7) break; //Exit the loop entirely
    cout<< i <<" ";
}
    cout<<endl;

    return 0;
}




