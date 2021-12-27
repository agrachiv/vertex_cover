#ifndef VERTEX_COVER_SOLVER_H
#define VERTEX_COVER_SOLVER_H

#include <vector>
#include <iostream>


class vertex_cover_solver
{
    public:
        const int size;

        vertex_cover_solver( int size);
        void add_edge( int node_1, int node_2);
        void print_vertex_cover();

    private:
        std::vector<std::vector<int>> adjacency_matrix;
};
#endif // VERTEX_COVER_SOLVER_H
