#include <iostream>
#include <vector>
using namespace std;

int main(){



    vector<int> first;
    // vector<int> second;

    first.push_back(10);
    first.push_back(11);
    first.push_back(12);
    first.push_back(13);
    

    // second.push_back(100);
    // second.push_back(200);
    // second.push_back(300);
    // second.push_back(400);


    // first.swap(second);
    // cout<< first[0] << " "<< first[1] <<" "  << first[2] <<" "  << first[3] << endl;


    // travesring using for each loop
//     for(int i : first) {
//         cout<< i << " ";
//     }
//    cout << endl; 

//     for(int i : second) {
//         cout<< i << " ";
//     }


// traversing using iterator:

vector<int>::iterator it = first.begin();

    while (it != first.end())
    {
        cout<< *it << " ";
        it++;
    }
    

    
    
    //Creation
    // vector<int> vectorname;
    // it means ek vector named as vectorname and it stores integer value;
    
    //Creation with Size :
    // vector<int> marks(10);
    // it means ek vector named as marks and it stores integer value and has total space of 10 blocks;
    
    // initialize :
    // vector<int> distance(15,0);
    // it means ek vector named as distance and it stores integer value and has total space of 15 blocks and is initialized with 0 means har ek dabbe me 0 bhara hua h;
    

    // .begin(): member functions()
    // vector<int> marks(5,-1);

    //.push_back() and .pop_back():
    // vector<int> marks;

    // marks.push_back(10);
    // marks.push_back(20);
    // marks.push_back(30);
    // marks.push_back(40);
    // marks.pop_back();
    // marks.pop_back();
    // marks.clear();
    // marks.insert(marks.begin(),50);
    // marks.erase(marks.begin(),marks.end());

    
    

    // cout<<"size:" << marks.size()<<endl; 
    // cout<< marks[0]<<endl;
    // cout<<marks.front()<<endl;
    // cout<<marks.back()<<endl;

    // // cout<< *(marks.begin()) << endl;
    // if(marks.empty() == true){
    //     cout<<"Vector is empty";
    // }
    // else{
    //     cout<<"Not Empty";
    // }


    // cout<< marks[0]<<endl;
    // cout<< marks[1]<<endl;


    return 0;
}
