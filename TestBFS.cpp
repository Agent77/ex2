//
// Created by nirbs on 29/11/16.
//

#include "gtest/gtest.h"
#include "TestBFS.h"
#include "BFS.h"

TEST(TestBFS, getPath){
    Point p = Point(0,0);
    Point p2 = Point(1,2);
    Grid g = Grid(3, 3);
    graphPointer = &g;
    BFS bfs = BFS(graphPointer, 3, 3, &p, &p2);
    bfs.getPath();
    Node n= bfs.getDestination().getSource();
    ASSERT_EQ(p,(n.getMyLocation.getNextCoordinate(0),n.getMyLocation.getNextCoordinate(1))) << "The source from the input and the source of our destination are unequal";
}

TEST(TestBFS, printPath){
    Point p = Point(0,0);
    Point p2 = Point(1,2);
    Grid g = Grid(3, 3);
    graphPointer = &g;
    BFS bfs = BFS(graphPointer, 3, 3, &p, &p2);

    testing::internal::CaptureStdout();//TODO check about the print test
    bfs.printpath();
    std::string output = testing::internal::GetCapturedStdout();

}

TEST(TestBFS,visitNeighbors){
    std::vector<Node*> v=getNeighbors(Node(Point(1,1)));
    std::vector<Node*> v1;
    Node* first = Node* (Point (2,1));
    Node* second = Node* (Point (0,1));
    Node* third = Node* (Point (1,0));
    Node* fourth = Node* (Point (1,2));
    v.push_back(first);
    v.push_back(second);
    v.push_back(third);
    v.push_back(fourth);
    ASSERT_EQ(v,v1) << "visitNeighbors didn't find the correct neighbors";
}