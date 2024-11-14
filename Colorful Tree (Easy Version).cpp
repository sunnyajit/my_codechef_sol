#include <iostream>
#include <vector>
using namespace std;
// code written by sunny
void calculateBeauty() {
    int numNodes;
    cin >> numNodes;
    vector<vector<int>> adjacencyList(numNodes + 1);
    for (int i = 0; i < numNodes - 1; i++) {
        int nodeU, nodeV;
        cin >> nodeU >> nodeV;
        adjacencyList[nodeU].push_back(nodeV);
        adjacencyList[nodeV].push_back(nodeU);
    }
    
    int leafCount = 0;
    
    for (int i = 1; i <= numNodes; i++) {
        if (adjacencyList[i].size() == 1) {   
            leafCount++;
        }
    }
    
    int internalCount = numNodes - leafCount;
    
    int beautyValue = leafCount * 3 + internalCount * 2;
    
    cout << beautyValue << "\n";
}

int main() {
    int testCases;
    cin >> testCases;
    
    for (int i = 0; i < testCases; i++) {
        calculateBeauty();
    }
    
    return 0;
}
