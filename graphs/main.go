package main

import (
	"fmt"
	"math"
)

type Graph struct {
	adj map[string]map[string]int
}

func (g *Graph) addEdge(vertice string, dir string, peso int) {
	if _, found := g.adj[vertice]; found {
		g.adj[vertice][dir] = peso
	} else {
		g.adj[vertice] = map[string]int{
			dir: peso,
		}
	}
}

func (g *Graph) dijkstra(start string, goal string) int {
	infinity := math.MaxInt64
	notVisited := map[string]string{}
	for key := range g.adj {
		notVisited[key] = key
	}

	min_distances := map[string]int{}
	for _, key := range g.adj {
		for adj := range key {
			min_distances[adj] = infinity
		}
	}
	fmt.Println(min_distances)

	min_distances[start] = 0
	calcaMindist := func() string {
		minVertice := ""
		for _, vertice := range notVisited {
			if minVertice == "" {
				minVertice = vertice
			}
			if min_distances[vertice] < min_distances[minVertice] {
				minVertice = vertice
			}
		}
		return minVertice
	}

	for len(notVisited) != 0 {
		u := calcaMindist()
		for childVertice, peso := range g.adj[u] {
			if min_distances[childVertice] > (min_distances[u] + peso) {
				min_distances[childVertice] = min_distances[u] + peso
			}
		}
		delete(notVisited, u)

	}
	fmt.Println(min_distances)
	return min_distances[goal]

}

func main() {
	g := Graph{adj: make(map[string]map[string]int)}

	// g.addEdge("Romeu", "Leticia", 3)
	// g.addEdge("Romeu", "Pedro", 1)
	// g.addEdge("Leticia", "Maria", 3)
	// g.addEdge("Leticia", "Julieta", 4)
	// g.addEdge("Maria", "Julieta", 1)
	// g.addEdge("Pedro", "Julieta", 6)

	g.addEdge("Maria", "Julieta", 1)
	g.addEdge("Julieta", "Maria", 1)
	g.addEdge("Leticia", "Julieta", 5)
	g.addEdge("Julieta", "Leticia", 5)
	g.addEdge("Pedro", "Julieta", 6)
	g.addEdge("Julieta", "Pedro", 6)
	g.addEdge("Pedro", "Romeu", 1)
	g.addEdge("Romeu", "Pedro", 1)
	g.addEdge("Leticia", "Romeu", 3)
	g.addEdge("Romeu", "Leticia", 3)
	g.addEdge("Maria", "Leticia", 3)
	g.addEdge("Leticia", "Maria", 3)

	fmt.Println(g.dijkstra("Pedro", "Leticia"))

}
