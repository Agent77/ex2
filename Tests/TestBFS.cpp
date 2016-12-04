
#include "gtest/gtest.h"
#include "TestBFS.h"
#include "../BFS.h"

TEST_F(TestBFS, getPath) {
    bfs->getPath();
    testing::internal::CaptureStdout();
    bfs->PrintPath(bfs->getSource(), bfs->getDest());
    std::string output = testing::internal::GetCapturedStdout();
    string str = "(0,0)\n(0,1)\n";
    ASSERT_EQ(output, str) << "Incorrect Path!";
}

TEST_F(TestBFS,visitNeighbors){
    Point* np = new Point(1,1);
    std::vector<Node*> neighbors = bfs->visitNeighbors(new Node(np));
    Point* p = new Point(0,1);
    Point* p2 = new Point(1,2);
    Point* p3 = new Point(2,1);
    Point* p4 = new Point(1,0);
    /*Node* first = new Node(p);
    Node* second = new Node (p2);
    Node* third = new Node (p3);
    Node* fourth = new Node(p4);
    std::vector<Node*> v;
    v.push_back(first);
    v.push_back(second);
    v.push_back(third);
    v.push_back(fourth);*/
    vector<Node *>::iterator v = neighbors.begin();
    while (v != neighbors.end()) {
        Point* neighbor = (Point*)neighbors.front()->getMyLocation();

    }
    ASSERT_EQ(p, neighbor) << "visitNeighbors didn't find the correct neighbors";
}


while (v != neighbors.end()) {
if (!(*(*v)).isVisited()) {
(*(*v)).visit();
myDeque.push((*v));