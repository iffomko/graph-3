//
// Created by Iluha on 10.05.2022.
//

#include "readGraph.h"

list* readGraph(std::ifstream &fin, int &n) {
    list* graph = nullptr;

    if (!fin) {
        std::cout << "Read graph from file failed with error..." << std::endl;
    } else {
        fin >> n;

        graph = new list[n];

        for (int i = 0; i < n; i++) {
            int value = 0;

            while (value != -1) {
                fin >> value;

                if (value != -1)
                    graph[i].push(value);
            }
        }
    }

    fin.close();

    return graph;
}