#include <iostream>
#include <fstream>

#include "readGraph/readGraph.h"
#include "list/list.h"

int main() {
    std::ifstream fin("C:\\Users\\Iluha\\Documents\\github_repos\\graph-3\\input.txt");
    int n;

    list* graph = readGraph(fin, n);

    for (int i = 0; i < n; i++) {
        graph[i].print();
        std::cout << "\n";
    }

    return 0;
}
