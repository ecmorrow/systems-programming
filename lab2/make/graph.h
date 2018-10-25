#include <cstdlib>
#include <vector>
#include <iostream>
#include <fstream>

using namespace std;



class Graph { 
  private:
    int n;                    // number of nodes
    vector <vector<bool> > m; // adjacency matrix

  public:
    // create a new Erdos-Renyi random graph
    Graph(int nn, double p);

    // return the number of nodes
    int get_nodes();
    // return the number of edges
    int get_edges();
    
    // returns true if there is an edge between nodes i and j
    bool adjacent (int i, int j);
};
