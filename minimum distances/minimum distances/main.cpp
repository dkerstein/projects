//
//  main.cpp
//  minimum distances
//
//  Created by Diane Kerstein on 6/27/16.
//
//

#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <string>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;


int main(){
    int n;
    cin >> n;
    vector<int> A(n);
    for(int i = 0;i < n;i++){
        cin >> A[i];
    }
    
    //find minimum distance between same value
    int shortestdistance = n;
    int value;
    int test;
    int distance = -1;
    
    for(int i = 0;i < n;i++){
        value = A.at(i);
        for(int j = i+1;j < n;j++){
            test = A.at(j);
            if (test == value) {
                distance = abs(i-j);
                break;
            }
        }
        shortestdistance = min(distance,shortestdistance);
    }
    
    //output that distance
    cout << shortestdistance;
    return 0;
}

