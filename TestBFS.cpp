
#include "gtest/gtest.h"
#include "TestBFS.h"
#include "BFS.h"

TEST_F(TestBFS, getPath) {
    Point* p = new Point(0,0);
    Point* p2 = new Point(0,1);
    Grid* g = new Grid(3, 3);
    BFS bfs = BFS(g, 3, 3, p, p2);
    bfs.getPath();




    //testing::internal::CaptureStdout();
    //ostringstream output = bfs.PrintPath(bfs.getSource(), bfs.getDest());
    //std::string str= output.str();
    //std::string str2 = "(0,0)\n(0,1)\n";
//    ASSERT_STREQ(str, str2) << "DIDNT WORK";
    //std::string output = testing::internal::GetCapturedStdout();


    //Node n= bfs.getDestination().getSource();
    //ASSERT_EQ(p,(n.getMyLocation.getNextCoordinate(0),n.getMyLocation.getNextCoordinate(1))) << "The source from the input and the source of our destination are unequal";
}

TEST_F(TestBFS, printPath){
    Point* p = new Point(0,0);
    Point* p2 = new Point(1,2);
    Grid* g = new Grid(3, 3);



}

TEST_F(TestBFS,visitNeighbors){
    Point* p = new Point(0,0);
    Point* p2 = new Point(1,2);
    Grid* g = new Grid(3, 3);
    BFS bfs = BFS(g, 3 ,3,p,p2);
    Point* np = new Point(1,1);
    std::vector<Node*> neighbors = bfs.visitNeighbors(new Node(np));
    //TODO check neighbors updated correctly




    /*std::vector<Node*> v1;
    Point* p = new Point(2,1);
    Point* p2 = new Point(0,1);
    Point* p3 = new Point(1,0);
    Point* p4 = new Point(1,2);
    Node* first = new Node(p);
    Node* second = new Node (p2);
    Node* third = new Node (p3);
    Node* fourth = new Node(p4);
    v.push_back(first);
    v.push_back(second);
    v.push_back(third);
    v.push_back(fourth);
    ASSERT_EQ(v,v1) << "visitNeighbors didn't find the correct neighbors";
     */
}