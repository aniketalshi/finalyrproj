/*
 * ford-fulker.cpp
 *
 *  Created on: Mar 27, 2012
 *      Author:  Vaibhav Devekar, Aniket Alshi, Aniket Divekar
 */

#include<stdio.h>
#include<iostream>
#include <list>
#include <algorithm>
#include <queue>
#include <map>

using namespace std;

#include"Graph_stl.h"



int main()
{
	Graph g;
	int n;

	freopen("tocpp.txt","r",stdin);
	freopen("topy.txt","w",stdout);

	cin>>n;
	g.add_nodes(n);

	int f1,t1;
    double cp;
	while(1)
	{
		scanf("%d%d%lf",&f1,&t1,&cp);
		if(f1==-1) break;
		g.add_edge(f1,t1,cp);
	}


	int s=n-2,t=n-1;
	 //int s=0,t=n-1;

	//fifo push-relabel
	g.push_relabel(s,t);

	g.scut(s);
 //g.display_edges();

	return 0;
}




