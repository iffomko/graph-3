//
// Created by Iluha on 15.05.2022.
//

#include "dfs.h"

void dfs(list* graph, bool* used, int top, stack &container) {
    used[top] = true;

    for (int i = 0; i < graph[top].length(); i++) {
        if (!used[graph[top][i]->getData() - 1]) {
            container.push(graph[top][i]->getData());
            dfs(graph, used, graph[top][i]->getData() - 1, container);
            container.print();
            container.pop();
        }
    }
}