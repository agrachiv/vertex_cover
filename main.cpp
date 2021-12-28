#include "vertex_cover_solver.h"
#include "benchmark/benchmark.h"

vertex_cover_solver configure_complete_graph( int number_of_vertexes)
{
    vertex_cover_solver test( number_of_vertexes);
    for ( int i = 0; i < number_of_vertexes; i++)
	for ( int j = 0; j < number_of_vertexes; j++)
	    if ( i < j)
	    	test.add_edge(i, j);
    return test;
}

void run_benchmark( benchmark::State& state)
{
    auto test = configure_complete_graph( state.range(0));
    test.print_vertex_cover();
}	

int main()
{
    benchmark::RegisterBenchmark( "Test", run_benchmark);
    benchmark::RunSpecifiedBenchmarks()->Range(8, 8<<10);
    return 0;
}
