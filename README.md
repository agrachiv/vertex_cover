#Vertex cover problem

[Wikipedia](https://en.wikipedia.org/wiki/Vertex_cover)

This repo features an aproximate algorythm.

####Algorythm:
At each step
- Chose any edge of the graph **E=(U, V)**
- Add to the silution **S** both vertexes **U** and **V**
- Delete from graph all edges, incidendent to **U** and **V**

Repeat untill all edges are deleted

####Proof

At each step our algorythm only deletes the covered edges, and at the end all edges were deleted so that the resulted set is the vertex cover.

All edges in the final set doesnt share same vertexes, therefore at least one of the vertexes of the edge is from the optimal solution, which means that **2|T| >= |S|**

####Benchmarks 

Perfomance benchmarks were using complete graphs as an imput.

Number of vertexes  | CPU time, ms
------------- | -------------
10 | 0.016
100 | 0.42 
1000 | 35.558
10000 | 3522.38

