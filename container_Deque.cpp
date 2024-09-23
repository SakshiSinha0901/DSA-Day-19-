// CONTAINERS

// 5. DEQUE

// A. push_back()  &  push_front() & pop_back() & pop_front()

// #include <iostream>
// #include <queue>
// using namespace std;

// int main(){
//     // creation
//     deque<int>dq;
//     // insertion
//     dq.push_back(10);   // push_back()
//     // 10
//     dq.push_back(20);
//     // 10,20
//     dq.push_back(30);
//     // 10,20,30
//     dq.push_front(100);   // push_front()
//     // 100,10,20,30
//     dq.push_front(200);
//     // 200,100,10,20,30
//     dq.pop_front();
//     // 100,10,20,30
//     dq.pop_back();
//     // 100,10,20

//     cout<< dq.size() <<endl;   //size()
// }

// B. front()  &   back()
#include <iostream>
#include <queue>
using namespace std;

int main(){

    deque<int>dq;
    dq.push_back(10);     
    dq.push_back(20);
    dq.push_back(30);
    dq.push_front(100);  
    // 100,10,20,30
    cout<< dq.front() <<endl; //front()
    cout<< dq.back() <<endl; //back()   
    
}

// C. empty()
// #include <iostream>
// #include <queue>
// using namespace std;

// int main(){

//     deque<int>dq;
//     dq.push_back(10);     
//     dq.push_back(20);
//     dq.push_back(30);
//     dq.push_front(100);  
//     // 100,10,20,30
//     if(dq.empty() == true){  //empty()
//         cout<<"Deque is empty."<<endl;
//     }
//     else{
//         cout<<"Deque is not empty."<<endl;
//     }
// }    