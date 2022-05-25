#include <iostream>
#include <fstream>

#include "readGraph/readGraph.h"
#include "list/list.h"
#include "stack/stack.h"
#include "dfs/dfs.h"

int main() {
    std::ifstream fin("C:\\Users\\Iluha\\Documents\\github_repos\\graph-3\\input.txt");
    int n;

    list* graph = readGraph(fin, n);

    if (graph != nullptr) {
        for (int i = 0; i < n; i++) {
            std::cout << i + 1 << " ";
            graph[i].print();
            std::cout << "\n";
        }

        bool* used = new bool[n];
        stack container(n);

        std::cout << "New graphs:\n";

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++)
                used[j] = false;

            container.push(i + 1);
            dfs(graph, used, i, container);
            container.pop();
        }
    }

    return 0;
}
