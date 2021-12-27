#include "vertex_cover_solver.h"

int main()
{
    vertex_cover_solver test(7);

    test.add_edge(0, 1);
    test.add_edge(0, 2);
    test.add_edge(1, 3);
    test.add_edge(3, 4);
    test.add_edge(4, 5);
    test.add_edge(5, 6);

    test.print_vertex_cover();

    return 0;
}
