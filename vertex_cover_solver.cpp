#include "vertex_cover_solver.h"


vertex_cover_solver::vertex_cover_solver( int size) : size( size), adjacency_matrix( size, std::vector<int>( size)) {}

void vertex_cover_solver::add_edge( int node_1, int node_2)
{
    adjacency_matrix[node_1].push_back(node_2);
    adjacency_matrix[node_2].push_back(node_1);
}

void vertex_cover_solver::print_vertex_cover()
{

    std::vector<bool> visited(size, false);

    std::vector<int>::iterator i;

    for ( int u = 0; u < size; u++) //O(E)
    {
        if ( visited[u] == false)
        {
            for ( i = adjacency_matrix[u].begin(); i != adjacency_matrix[u].end(); ++i) //O(V)
            {
                int v = *i;
                if ( visited.at(v) == false)
                {
                     visited[v] = true;
                     visited[u] = true;
                     break;
                }
            }
        }
    }

    for ( int i = 0; i < size; i++)
        if ( visited[i] == true)
          std::cout << i << " ";
}
